 /****************************************************************************
    **
    ** Copyright (C) 2005-2005 Trolltech AS. All rights reserved.
    **
    ** This file is part of the documentation of the Qt Toolkit.
    **
    ** This file may be used under the terms of the GNU General Public
    ** License version 2.0 as published by the Free Software Foundation
    ** and appearing in the file LICENSE.GPL included in the packaging of
    ** this file.  Please review the following information to ensure GNU
    ** General Public Licensing requirements will be met:
    ** http://www.trolltech.com/products/qt/opensource.html
    **
    ** If you are unsure which license is appropriate for your use, please
    ** review the following information:
    ** http://www.trolltech.com/products/qt/licensing.html or contact the
    ** sales department at sales@trolltech.com.
    **
    ** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
    ** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
    **
    ****************************************************************************/

    #include <QtGui>

    #include "highlighter.h"

    Highlighter::Highlighter(QTextDocument *parent)
        : QSyntaxHighlighter(parent)
    {
        QTextCharFormat keywordFormat;
        keywordFormat.setForeground(Qt::darkBlue);
        keywordFormat.setFontWeight(QFont::Bold);
        QStringList keywordPatterns;
        keywordPatterns << "\\bchar\\b" << "\\bclass\\b" << "\\bconst\\b" << "\\bdouble\\b"
                        << "\\benum\\b" << "\\bexplicit\\b" << "\\bfriend\\b" << "\\binline\\b"
                        << "\\bint\\b" << "\\blong\\b" << "\\bnamespace\\b" << "\\boperator\\b"
                        << "\\bprivate\\b" << "\\bprotected\\b" << "\\bpublic\\b"
                        << "\\bshort\\b" << "\\bsignals\\b" << "\\bsigned\\b"
                        << "\\bslots\\b" << "\\bstatic\\b" << "\\bstruct\\b" << "\\btemplate\\b"
                        << "\\btypedef\\b" << "\\btypename\\b" << "\\bunion\\b" << "\\bunsigned\\b"
                        << "\\bvirtual\\b"<< "\\bvoid\\b" << "\\bvolatile\\b";
        foreach (QString pattern, keywordPatterns)
            mappings[pattern] = keywordFormat;

        QTextCharFormat classFormat;
        classFormat.setFontWeight(QFont::Bold);
        classFormat.setForeground(Qt::darkMagenta);
        mappings["\\bQ[A-Za-z]+\\b"] = classFormat;

        QTextCharFormat singleLineCommentFormat;
        singleLineCommentFormat.setForeground(Qt::red);
        mappings["//[^\n]*"] = singleLineCommentFormat;

        multiLineCommentFormat.setForeground(Qt::red);

        QTextCharFormat quotationFormat;
        quotationFormat.setForeground(Qt::darkGreen);
        mappings["\".*\""] = quotationFormat;

        QTextCharFormat functionFormat;
        functionFormat.setFontItalic(true);
        functionFormat.setForeground(Qt::blue);
        mappings["\\b[A-Za-z0-9_]+\\(.*\\)"] = functionFormat;
    }

    void Highlighter::highlightBlock(const QString &text)
    {
        foreach (QString pattern, mappings.keys()) {
            QRegExp expression(pattern);
            int index = text.indexOf(expression);
            while (index >= 0) {
                int length = expression.matchedLength();
                setFormat(index, length, mappings[pattern]);
                index = text.indexOf(expression, index + length);
            }
        }
        setCurrentBlockState(0);

        QRegExp startExpression( "/\\*");
        QRegExp endExpression("\\*/");

        int startIndex = 0;
        if (previousBlockState() != 1)
            startIndex = text.indexOf(startExpression);

        while (startIndex >= 0) {
           int endIndex = text.indexOf(endExpression, startIndex);
           int commentLength;
           if (endIndex == -1) {
               setCurrentBlockState(1);
               commentLength = text.length() - startIndex;
           } else {
               commentLength = endIndex - startIndex + endExpression.matchedLength();
           }
           setFormat(startIndex, commentLength, multiLineCommentFormat);
           startIndex = text.indexOf(startExpression, startIndex + commentLength);
        }
    }