// CkCompressionW.h: interface for the CkCompressionW class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat v9.5.0

#ifndef _CkCompressionW_H
#define _CkCompressionW_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkWideCharBase.h"

class CkByteData;
class CkTaskW;
class CkBaseProgressW;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkCompressionW
class CK_VISIBLE_PUBLIC CkCompressionW  : public CkWideCharBase
{
    private:
	bool m_cbOwned;
	void *m_eventCallback;

	// Don't allow assignment or copying these objects.
	CkCompressionW(const CkCompressionW &);
	CkCompressionW &operator=(const CkCompressionW &);

    public:
	CkCompressionW(void);
	virtual ~CkCompressionW(void);

	static CkCompressionW *createNew(void);
	

	CkCompressionW(bool bCallbackOwned);
	static CkCompressionW *createNew(bool bCallbackOwned);

	
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	CkBaseProgressW *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkBaseProgressW *progress);


	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// The compression algorithm to be used. Should be set to either "ppmd", "deflate",
	// "zlib", "bzip2", or "lzw".
	// 
	// Note: The PPMD compression algorithm is only available for 32-bit builds. It is
	// not available for 64-bit implementations. Also, this PPMD implementation is the
	// "J" variant.
	// 
	void get_Algorithm(CkString &str);
	// The compression algorithm to be used. Should be set to either "ppmd", "deflate",
	// "zlib", "bzip2", or "lzw".
	// 
	// Note: The PPMD compression algorithm is only available for 32-bit builds. It is
	// not available for 64-bit implementations. Also, this PPMD implementation is the
	// "J" variant.
	// 
	const wchar_t *algorithm(void);
	// The compression algorithm to be used. Should be set to either "ppmd", "deflate",
	// "zlib", "bzip2", or "lzw".
	// 
	// Note: The PPMD compression algorithm is only available for 32-bit builds. It is
	// not available for 64-bit implementations. Also, this PPMD implementation is the
	// "J" variant.
	// 
	void put_Algorithm(const wchar_t *newVal);

	// Only applies to methods that compress or decompress strings. This specifies the
	// character encoding that the string should be converted to before compression.
	// Many programming languages use Unicode (2 bytes per char) for representing
	// characters. This property allows for the string to be converted to a 1-byte per
	// char encoding prior to compression.
	void get_Charset(CkString &str);
	// Only applies to methods that compress or decompress strings. This specifies the
	// character encoding that the string should be converted to before compression.
	// Many programming languages use Unicode (2 bytes per char) for representing
	// characters. This property allows for the string to be converted to a 1-byte per
	// char encoding prior to compression.
	const wchar_t *charset(void);
	// Only applies to methods that compress or decompress strings. This specifies the
	// character encoding that the string should be converted to before compression.
	// Many programming languages use Unicode (2 bytes per char) for representing
	// characters. This property allows for the string to be converted to a 1-byte per
	// char encoding prior to compression.
	void put_Charset(const wchar_t *newVal);

	// Controls the encoding expected by methods ending in "ENC", such as
	// CompressBytesENC. Valid values are "base64", "hex", "url", and
	// "quoted-printable". Compression methods ending in ENC return the binary
	// compressed data as an encoded string using this encoding. Decompress methods
	// expect the input string to be this encoding.
	void get_EncodingMode(CkString &str);
	// Controls the encoding expected by methods ending in "ENC", such as
	// CompressBytesENC. Valid values are "base64", "hex", "url", and
	// "quoted-printable". Compression methods ending in ENC return the binary
	// compressed data as an encoded string using this encoding. Decompress methods
	// expect the input string to be this encoding.
	const wchar_t *encodingMode(void);
	// Controls the encoding expected by methods ending in "ENC", such as
	// CompressBytesENC. Valid values are "base64", "hex", "url", and
	// "quoted-printable". Compression methods ending in ENC return the binary
	// compressed data as an encoded string using this encoding. Decompress methods
	// expect the input string to be this encoding.
	void put_EncodingMode(const wchar_t *newVal);

	// The number of milliseconds between each AbortCheck event callback. The
	// AbortCheck callback allows an application to abort any method call prior to
	// completion. If HeartbeatMs is 0 (the default), no AbortCheck event callbacks
	// will fire.
	int get_HeartbeatMs(void);
	// The number of milliseconds between each AbortCheck event callback. The
	// AbortCheck callback allows an application to abort any method call prior to
	// completion. If HeartbeatMs is 0 (the default), no AbortCheck event callbacks
	// will fire.
	void put_HeartbeatMs(int newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Large amounts of binary byte data may be compressed in chunks by first calling
	// BeginCompressBytes, followed by 0 or more calls to MoreCompressedBytes, and
	// ending with a final call to EndCompressBytes. Each call returns 0 or more bytes
	// of compressed data which may be output to a compressed data stream (such as a
	// file, socket, etc.).
	bool BeginCompressBytes(const CkByteData &data, CkByteData &outData);

	// Creates an asynchronous task to call the BeginCompressBytes method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *BeginCompressBytesAsync(const CkByteData &data);

	// Large amounts of binary byte data may be compressed in chunks by first calling
	// BeginCompressBytesENC, followed by 0 or more calls to MoreCompressedBytesENC,
	// and ending with a final call to EndCompressBytesENC. Each call returns 0 or more
	// characters of compressed data (encoded as a string according to the EncodingMode
	// property setting) which may be output to a compressed data stream (such as a
	// file, socket, etc.).
	bool BeginCompressBytesENC(const CkByteData &data, CkString &outStr);
	// Large amounts of binary byte data may be compressed in chunks by first calling
	// BeginCompressBytesENC, followed by 0 or more calls to MoreCompressedBytesENC,
	// and ending with a final call to EndCompressBytesENC. Each call returns 0 or more
	// characters of compressed data (encoded as a string according to the EncodingMode
	// property setting) which may be output to a compressed data stream (such as a
	// file, socket, etc.).
	const wchar_t *beginCompressBytesENC(const CkByteData &data);

	// Creates an asynchronous task to call the BeginCompressBytesENC method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *BeginCompressBytesENCAsync(const CkByteData &data);

	// Large amounts of string data may be compressed in chunks by first calling
	// BeginCompressString, followed by 0 or more calls to MoreCompressedString, and
	// ending with a final call to EndCompressString. Each call returns 0 or more bytes
	// of compressed data which may be output to a compressed data stream (such as a
	// file, socket, etc.).
	bool BeginCompressString(const wchar_t *str, CkByteData &outData);

	// Creates an asynchronous task to call the BeginCompressString method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *BeginCompressStringAsync(const wchar_t *str);

	// Large amounts of string data may be compressed in chunks by first calling
	// BeginCompressStringENC, followed by 0 or more calls to MoreCompressedStringENC,
	// and ending with a final call to EndCompressStringENC. Each call returns 0 or
	// more characters of compressed data (encoded as a string according to the
	// EncodingMode property setting) which may be output to a compressed data stream
	// (such as a file, socket, etc.).
	bool BeginCompressStringENC(const wchar_t *str, CkString &outStr);
	// Large amounts of string data may be compressed in chunks by first calling
	// BeginCompressStringENC, followed by 0 or more calls to MoreCompressedStringENC,
	// and ending with a final call to EndCompressStringENC. Each call returns 0 or
	// more characters of compressed data (encoded as a string according to the
	// EncodingMode property setting) which may be output to a compressed data stream
	// (such as a file, socket, etc.).
	const wchar_t *beginCompressStringENC(const wchar_t *str);

	// Creates an asynchronous task to call the BeginCompressStringENC method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *BeginCompressStringENCAsync(const wchar_t *str);

	// A compressed data stream may be decompressed in chunks by first calling
	// BeginDecompressBytes, followed by 0 or more calls to MoreDecompressedBytes, and
	// ending with a final call to EndDecompressBytes. Each call returns 0 or more
	// bytes of decompressed data.
	bool BeginDecompressBytes(const CkByteData &data, CkByteData &outData);

	// Creates an asynchronous task to call the BeginDecompressBytes method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *BeginDecompressBytesAsync(const CkByteData &data);

	// The input to this method is an encoded string containing compressed data. The
	// EncodingMode property should be set prior to calling this method. The input
	// string is decoded according to the EncodingMode (hex, base64, etc.) and then
	// decompressed.
	// 
	// A compressed data stream may be decompressed in chunks by first calling
	// BeginDecompressBytesENC, followed by 0 or more calls to
	// MoreDecompressedBytesENC, and ending with a final call to EndDecompressBytesENC.
	// Each call returns 0 or more bytes of decompressed data.
	// 
	bool BeginDecompressBytesENC(const wchar_t *str, CkByteData &outData);

	// Creates an asynchronous task to call the BeginDecompressBytesENC method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *BeginDecompressBytesENCAsync(const wchar_t *str);

	// A compressed data stream may be decompressed in chunks by first calling
	// BeginDecompressString, followed by 0 or more calls to MoreDecompressedString,
	// and ending with a final call to EndDecompressString. Each call returns 0 or more
	// characters of decompressed text.
	bool BeginDecompressString(const CkByteData &data, CkString &outStr);
	// A compressed data stream may be decompressed in chunks by first calling
	// BeginDecompressString, followed by 0 or more calls to MoreDecompressedString,
	// and ending with a final call to EndDecompressString. Each call returns 0 or more
	// characters of decompressed text.
	const wchar_t *beginDecompressString(const CkByteData &data);

	// Creates an asynchronous task to call the BeginDecompressString method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *BeginDecompressStringAsync(const CkByteData &data);

	// The input to this method is an encoded string containing compressed data. The
	// EncodingMode property should be set prior to calling this method. The input
	// string is decoded according to the EncodingMode (hex, base64, etc.) and then
	// decompressed.
	// 
	// A compressed data stream may be decompressed in chunks by first calling
	// BeginDecompressStringENC, followed by 0 or more calls to
	// MoreDecompressedStringENC, and ending with a final call to
	// EndDecompressStringENC. Each call returns 0 or more characters of decompressed
	// text.
	// 
	bool BeginDecompressStringENC(const wchar_t *str, CkString &outStr);
	// The input to this method is an encoded string containing compressed data. The
	// EncodingMode property should be set prior to calling this method. The input
	// string is decoded according to the EncodingMode (hex, base64, etc.) and then
	// decompressed.
	// 
	// A compressed data stream may be decompressed in chunks by first calling
	// BeginDecompressStringENC, followed by 0 or more calls to
	// MoreDecompressedStringENC, and ending with a final call to
	// EndDecompressStringENC. Each call returns 0 or more characters of decompressed
	// text.
	// 
	const wchar_t *beginDecompressStringENC(const wchar_t *str);

	// Creates an asynchronous task to call the BeginDecompressStringENC method with
	// the arguments provided. (Async methods are available starting in Chilkat
	// v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *BeginDecompressStringENCAsync(const wchar_t *str);

	// Compresses byte data.
	bool CompressBytes(const CkByteData &data, CkByteData &outData);

	// Creates an asynchronous task to call the CompressBytes method with the arguments
	// provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CompressBytesAsync(const CkByteData &data);

	// Compresses bytes and returns the compressed data encoded to a string. The
	// encoding (hex, base64, etc.) is determined by the EncodingMode property setting.
	bool CompressBytesENC(const CkByteData &data, CkString &outStr);
	// Compresses bytes and returns the compressed data encoded to a string. The
	// encoding (hex, base64, etc.) is determined by the EncodingMode property setting.
	const wchar_t *compressBytesENC(const CkByteData &data);

	// Creates an asynchronous task to call the CompressBytesENC method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CompressBytesENCAsync(const CkByteData &data);

	// Performs file-to-file compression. Files of any size may be compressed because
	// the file is compressed internally in streaming mode.
	bool CompressFile(const wchar_t *srcPath, const wchar_t *destPath);

	// Creates an asynchronous task to call the CompressFile method with the arguments
	// provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CompressFileAsync(const wchar_t *srcPath, const wchar_t *destPath);

	// Compresses a string.
	bool CompressString(const wchar_t *str, CkByteData &outData);

	// Creates an asynchronous task to call the CompressString method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CompressStringAsync(const wchar_t *str);

	// Compresses a string and returns the compressed data encoded to a string. The
	// output encoding (hex, base64, etc.) is determined by the EncodingMode property
	// setting.
	bool CompressStringENC(const wchar_t *str, CkString &outStr);
	// Compresses a string and returns the compressed data encoded to a string. The
	// output encoding (hex, base64, etc.) is determined by the EncodingMode property
	// setting.
	const wchar_t *compressStringENC(const wchar_t *str);

	// Creates an asynchronous task to call the CompressStringENC method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CompressStringENCAsync(const wchar_t *str);

	// The opposite of CompressBytes.
	bool DecompressBytes(const CkByteData &data, CkByteData &outData);

	// Creates an asynchronous task to call the DecompressBytes method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *DecompressBytesAsync(const CkByteData &data);

	// The opposite of CompressBytesENC. encodedCompressedData contains the compressed data as an
	// encoded string (hex, base64, etc) as specified by the EncodingMode property
	// setting.
	bool DecompressBytesENC(const wchar_t *str, CkByteData &outData);

	// Creates an asynchronous task to call the DecompressBytesENC method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *DecompressBytesENCAsync(const wchar_t *str);

	// Performs file-to-file decompression (the opposite of CompressFile). Internally
	// the file is decompressed in streaming mode which allows files of any size to be
	// decompressed.
	bool DecompressFile(const wchar_t *srcPath, const wchar_t *destPath);

	// Creates an asynchronous task to call the DecompressFile method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *DecompressFileAsync(const wchar_t *srcPath, const wchar_t *destPath);

	// Takes compressed bytes, decompresses, and returns the resulting string.
	bool DecompressString(const CkByteData &data, CkString &outStr);
	// Takes compressed bytes, decompresses, and returns the resulting string.
	const wchar_t *decompressString(const CkByteData &data);

	// Creates an asynchronous task to call the DecompressString method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *DecompressStringAsync(const CkByteData &data);

	// The opposite of CompressStringENC. encodedCompressedData contains the compressed data as an
	// encoded string (hex, base64, etc) as specified by the EncodingMode property
	// setting.
	bool DecompressStringENC(const wchar_t *str, CkString &outStr);
	// The opposite of CompressStringENC. encodedCompressedData contains the compressed data as an
	// encoded string (hex, base64, etc) as specified by the EncodingMode property
	// setting.
	const wchar_t *decompressStringENC(const wchar_t *str);

	// Creates an asynchronous task to call the DecompressStringENC method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *DecompressStringENCAsync(const wchar_t *str);

	// Must be callled to finalize a compression stream. Returns any remaining
	// (buffered) compressed data.
	// 
	// (See BeginCompressBytes)
	// 
	bool EndCompressBytes(CkByteData &outData);

	// Creates an asynchronous task to call the EndCompressBytes method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *EndCompressBytesAsync(void);

	// Must be callled to finalize a compression stream. Returns any remaining
	// (buffered) compressed data.
	// 
	// (See BeginCompressBytesENC)
	// 
	bool EndCompressBytesENC(CkString &outStr);
	// Must be callled to finalize a compression stream. Returns any remaining
	// (buffered) compressed data.
	// 
	// (See BeginCompressBytesENC)
	// 
	const wchar_t *endCompressBytesENC(void);

	// Creates an asynchronous task to call the EndCompressBytesENC method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *EndCompressBytesENCAsync(void);

	// Must be callled to finalize a compression stream. Returns any remaining
	// (buffered) compressed data.
	// 
	// (See BeginCompressString)
	// 
	bool EndCompressString(CkByteData &outData);

	// Creates an asynchronous task to call the EndCompressString method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *EndCompressStringAsync(void);

	// Must be callled to finalize a compression stream. Returns any remaining
	// (buffered) compressed data.
	// 
	// (See BeginCompressStringENC)
	// 
	bool EndCompressStringENC(CkString &outStr);
	// Must be callled to finalize a compression stream. Returns any remaining
	// (buffered) compressed data.
	// 
	// (See BeginCompressStringENC)
	// 
	const wchar_t *endCompressStringENC(void);

	// Creates an asynchronous task to call the EndCompressStringENC method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *EndCompressStringENCAsync(void);

	// Called to finalize the decompression stream and return any remaining (buffered)
	// decompressed data.
	// 
	// (See BeginDecompressBytes)
	// 
	bool EndDecompressBytes(CkByteData &outData);

	// Creates an asynchronous task to call the EndDecompressBytes method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *EndDecompressBytesAsync(void);

	// Called to finalize the decompression stream and return any remaining (buffered)
	// decompressed data.
	// 
	// The input to this method is an encoded string containing compressed data. The
	// EncodingMode property should be set prior to calling this method. The input
	// string is decoded according to the EncodingMode (hex, base64, etc.) and then
	// decompressed.
	// 
	// (See BeginDecompressBytesENC)
	// 
	bool EndDecompressBytesENC(CkByteData &outData);

	// Creates an asynchronous task to call the EndDecompressBytesENC method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *EndDecompressBytesENCAsync(void);

	// Called to finalize the decompression stream and return any remaining (buffered)
	// decompressed data.
	// 
	// (See BeginDecompressString)
	// 
	bool EndDecompressString(CkString &outStr);
	// Called to finalize the decompression stream and return any remaining (buffered)
	// decompressed data.
	// 
	// (See BeginDecompressString)
	// 
	const wchar_t *endDecompressString(void);

	// Creates an asynchronous task to call the EndDecompressString method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *EndDecompressStringAsync(void);

	// Called to finalize the decompression stream and return any remaining (buffered)
	// decompressed data.
	// 
	// The input to this method is an encoded string containing compressed data. The
	// EncodingMode property should be set prior to calling this method. The input
	// string is decoded according to the EncodingMode (hex, base64, etc.) and then
	// decompressed.
	// 
	// (See BeginDecompressStringENC)
	// 
	bool EndDecompressStringENC(CkString &outStr);
	// Called to finalize the decompression stream and return any remaining (buffered)
	// decompressed data.
	// 
	// The input to this method is an encoded string containing compressed data. The
	// EncodingMode property should be set prior to calling this method. The input
	// string is decoded according to the EncodingMode (hex, base64, etc.) and then
	// decompressed.
	// 
	// (See BeginDecompressStringENC)
	// 
	const wchar_t *endDecompressStringENC(void);

	// Creates an asynchronous task to call the EndDecompressStringENC method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *EndDecompressStringENCAsync(void);

	// (See BeginCompressBytes)
	bool MoreCompressBytes(const CkByteData &data, CkByteData &outData);

	// Creates an asynchronous task to call the MoreCompressBytes method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *MoreCompressBytesAsync(const CkByteData &data);

	// (See BeginCompressBytesENC)
	bool MoreCompressBytesENC(const CkByteData &data, CkString &outStr);
	// (See BeginCompressBytesENC)
	const wchar_t *moreCompressBytesENC(const CkByteData &data);

	// Creates an asynchronous task to call the MoreCompressBytesENC method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *MoreCompressBytesENCAsync(const CkByteData &data);

	// (See BeginCompressString)
	bool MoreCompressString(const wchar_t *str, CkByteData &outData);

	// Creates an asynchronous task to call the MoreCompressString method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *MoreCompressStringAsync(const wchar_t *str);

	// (See BeginCompressStringENC)
	bool MoreCompressStringENC(const wchar_t *str, CkString &outStr);
	// (See BeginCompressStringENC)
	const wchar_t *moreCompressStringENC(const wchar_t *str);

	// Creates an asynchronous task to call the MoreCompressStringENC method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *MoreCompressStringENCAsync(const wchar_t *str);

	// (See BeginDecompressBytes)
	bool MoreDecompressBytes(const CkByteData &data, CkByteData &outData);

	// Creates an asynchronous task to call the MoreDecompressBytes method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *MoreDecompressBytesAsync(const CkByteData &data);

	// The input to this method is an encoded string containing compressed data. The
	// EncodingMode property should be set prior to calling this method. The input
	// string is decoded according to the EncodingMode (hex, base64, etc.) and then
	// decompressed.
	// 
	// (See BeginDecompressBytesENC)
	// 
	bool MoreDecompressBytesENC(const wchar_t *str, CkByteData &outData);

	// Creates an asynchronous task to call the MoreDecompressBytesENC method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *MoreDecompressBytesENCAsync(const wchar_t *str);

	// (See BeginDecompressString)
	bool MoreDecompressString(const CkByteData &data, CkString &outStr);
	// (See BeginDecompressString)
	const wchar_t *moreDecompressString(const CkByteData &data);

	// Creates an asynchronous task to call the MoreDecompressString method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *MoreDecompressStringAsync(const CkByteData &data);

	// The input to this method is an encoded string containing compressed data. The
	// EncodingMode property should be set prior to calling this method. The input
	// string is decoded according to the EncodingMode (hex, base64, etc.) and then
	// decompressed.
	// 
	// (See BeginDecompressStringENC)
	// 
	bool MoreDecompressStringENC(const wchar_t *str, CkString &outStr);
	// The input to this method is an encoded string containing compressed data. The
	// EncodingMode property should be set prior to calling this method. The input
	// string is decoded according to the EncodingMode (hex, base64, etc.) and then
	// decompressed.
	// 
	// (See BeginDecompressStringENC)
	// 
	const wchar_t *moreDecompressStringENC(const wchar_t *str);

	// Creates an asynchronous task to call the MoreDecompressStringENC method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *MoreDecompressStringENCAsync(const wchar_t *str);

	// Unlocks the component allowing for the full functionality to be used. The
	// component may be used fully-functional for the 1st 30-days after download by
	// passing an arbitrary string to this method. If for some reason you do not
	// receive the full 30-day trial, send email to support@chilkatsoft.com for a
	// temporary unlock code w/ an explicit expiration date. Upon purchase, a permanent
	// unlock code is provided which should replace the temporary/arbitrary string
	// passed to this method.
	bool UnlockComponent(const wchar_t *unlockCode);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
