// CkLog.h: interface for the CkLog class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat v9.5.0

#ifndef _CkLog_H
#define _CkLog_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkByteData;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkLog
class CK_VISIBLE_PUBLIC CkLog  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkLog(const CkLog &);
	CkLog &operator=(const CkLog &);

    public:
	CkLog(void);
	virtual ~CkLog(void);

	static CkLog *createNew(void);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------


	// ----------------------
	// Methods
	// ----------------------
	// Clears the log. The ARG1 is the initial top-level context tag for the new log.
	void Clear(const char *initialTag);


	// Enters a new context labelled with the given tag. Must be paired with a matching
	// call to LeaveContext.
	void EnterContext(const char *tag);


	// Leaves the current context. A context that is entered and exited without any
	// logging within the context is automatically removed from the log. (To say it
	// another way: Empty contexts are automaticallly removed from the log upon leaving
	// the context.)
	void LeaveContext(void);


	// Adds a tagged message to the log (i.e. a name/value pair).
	void LogData(const char *tag, const char *message);


	// Logs binary data in base64 format.
	void LogDataBase64(const char *tag, const CkByteData &data);


	// Logs binary data in hex format.
	void LogDataHex(const char *tag, const CkByteData &data);


	// Logs a string, but only up to the 1st ARG3 characters of the string.
	void LogDataMax(const char *tag, const char *message, int maxNumChars);


	// Logs the current date/time in RFC822 format. If ARG2 is true, then the GMT/UTC
	// time is logged. Otherwise it is the local time.
	void LogDateTime(const char *tag, bool gmt);


	// Logs an error within the current context.
	void LogError(const char *message);


	// Logs an informational message within the current context.
	void LogInfo(const char *message);


	// Logs an integer.
	void LogInt(const char *tag, int value);


	// Logs a 64-bit integer.
	void LogInt64(const char *tag, __int64 value);


	// Logs the current time in HH:MM:SS:mmm format.
	void LogTimestamp(const char *tag);






	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
