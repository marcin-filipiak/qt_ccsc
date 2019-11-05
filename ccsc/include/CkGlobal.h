// CkGlobal.h: interface for the CkGlobal class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat v9.5.0

#ifndef _CkGlobal_H
#define _CkGlobal_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"




#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkGlobal
class CK_VISIBLE_PUBLIC CkGlobal  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkGlobal(const CkGlobal &);
	CkGlobal &operator=(const CkGlobal &);

    public:
	CkGlobal(void);
	virtual ~CkGlobal(void);

	static CkGlobal *createNew(void);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// The default ANSI code page is determined at runtime based on the computer where
	// the application happens to be running. For example, the ANSI code page for an
	// application running on a Japanese computer is likely to be Shift_JIS (code page
	// 932), whereas on a US-English computer it would be iso-8859-1 (or Windows-1252
	// which is essentially a superset of iso-8859-1).
	// 
	// If there is a desire for the Chilkat library to use a specific ANSI code page
	// regardless of locale, then this property should be set to the desired code page.
	// The default value of this property is the ANSI code page of the local computer.
	// 
	int get_AnsiCodePage(void);
	// The default ANSI code page is determined at runtime based on the computer where
	// the application happens to be running. For example, the ANSI code page for an
	// application running on a Japanese computer is likely to be Shift_JIS (code page
	// 932), whereas on a US-English computer it would be iso-8859-1 (or Windows-1252
	// which is essentially a superset of iso-8859-1).
	// 
	// If there is a desire for the Chilkat library to use a specific ANSI code page
	// regardless of locale, then this property should be set to the desired code page.
	// The default value of this property is the ANSI code page of the local computer.
	// 
	void put_AnsiCodePage(int newVal);

	// Applies only to programming languages where each class has the Utf8 property,
	// and where strings are passed and returned as multibyte (null-terminated
	// sequences of bytes). This includes the multibyte C/C++ API, Perl, Python 2.*
	// (not Python 3.*), Ruby, and PHP. This does not include Java, Objective-C, or
	// Python 3.* as all strings in these languages are utf-8. This property has no
	// effect in programming languages or APIs that return Unicode or strings as
	// objects (such as .NET).
	// 
	// A Chilkat class's Utf8 property controls whether strings are returned as utf-8
	// or ANSI. It also controls how Chilkat is to interpret the bytes of passed-in
	// arguments. It must be set to false if the application is passing ANSI strings
	// (i.e. the byte representation is ANSI), and must be set to true if the
	// application is passing string arguments using the utf-8 representation.
	// 
	// This global Utf8 property controls the default setting of the Utf8 property for
	// all Chilkat objects. Thus it allows for an application to be entirely in "utf-8
	// mode" or "ANSI mode" without needing to explicity set the Utf8 property of every
	// Chilkat object instance.
	// 
	bool get_DefaultUtf8(void);
	// Applies only to programming languages where each class has the Utf8 property,
	// and where strings are passed and returned as multibyte (null-terminated
	// sequences of bytes). This includes the multibyte C/C++ API, Perl, Python 2.*
	// (not Python 3.*), Ruby, and PHP. This does not include Java, Objective-C, or
	// Python 3.* as all strings in these languages are utf-8. This property has no
	// effect in programming languages or APIs that return Unicode or strings as
	// objects (such as .NET).
	// 
	// A Chilkat class's Utf8 property controls whether strings are returned as utf-8
	// or ANSI. It also controls how Chilkat is to interpret the bytes of passed-in
	// arguments. It must be set to false if the application is passing ANSI strings
	// (i.e. the byte representation is ANSI), and must be set to true if the
	// application is passing string arguments using the utf-8 representation.
	// 
	// This global Utf8 property controls the default setting of the Utf8 property for
	// all Chilkat objects. Thus it allows for an application to be entirely in "utf-8
	// mode" or "ANSI mode" without needing to explicity set the Utf8 property of every
	// Chilkat object instance.
	// 
	void put_DefaultUtf8(bool newVal);

	// If DNS caching is enabled, this is the time-to-live (in seconds) for a cached
	// DNS lookup. A DNS lookup result older than this expiration time is discarded,
	// and causes a new DNS lookup to occur. A value of 0 indicates an infinite
	// time-to-live. The default value of this property is 0.
	int get_DnsTimeToLive(void);
	// If DNS caching is enabled, this is the time-to-live (in seconds) for a cached
	// DNS lookup. A DNS lookup result older than this expiration time is discarded,
	// and causes a new DNS lookup to occur. A value of 0 indicates an infinite
	// time-to-live. The default value of this property is 0.
	void put_DnsTimeToLive(int newVal);

	// Controls whether DNS domain lookups (to resolve to IP addresses) are cached in
	// memory. The default value is false, meaning that DNS caching is disabled.
	bool get_EnableDnsCaching(void);
	// Controls whether DNS domain lookups (to resolve to IP addresses) are cached in
	// memory. The default value is false, meaning that DNS caching is disabled.
	void put_EnableDnsCaching(bool newVal);

	// The maximum number of thread pool threads. The default value is 100. The maximum
	// value is 500. Note: Asynchronous worker threads are created on as needed up to
	// the maximum.
	int get_MaxThreads(void);
	// The maximum number of thread pool threads. The default value is 100. The maximum
	// value is 500. Note: Asynchronous worker threads are created on as needed up to
	// the maximum.
	void put_MaxThreads(int newVal);

	// If set, indicates the path of a log file to be used by the thread pool thread
	// and each of the pool worker threads for logging async activity.
	void get_ThreadPoolLogPath(CkString &str);
	// If set, indicates the path of a log file to be used by the thread pool thread
	// and each of the pool worker threads for logging async activity.
	const char *threadPoolLogPath(void);
	// If set, indicates the path of a log file to be used by the thread pool thread
	// and each of the pool worker threads for logging async activity.
	void put_ThreadPoolLogPath(const char *newVal);

	// Selects the default NTLM protocol version to use for NTLM authentication for
	// HTTP, POP3, IMAP, SMTP, and HTTP proxies. The default value is 2. This property
	// may optionally be set to 1.
	int get_DefaultNtlmVersion(void);
	// Selects the default NTLM protocol version to use for NTLM authentication for
	// HTTP, POP3, IMAP, SMTP, and HTTP proxies. The default value is 2. This property
	// may optionally be set to 1.
	void put_DefaultNtlmVersion(int newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Clears the global DNS cache.
	bool DnsClearCache(void);


	// Unlocks the entire Chilkat API for all classes. This should be called once at
	// the beginning of a program. Once unlocked, objects of any Chilkat class may be
	// instantiated and used. To unlock in fully-functional 30-day trial mode, pass any
	// string, such as "Hello", in ARG1. If a license is purchased, then replace the
	// "Hello" with the purchased unlock code.
	// 
	// After calling UnlockComponent once, the instance of the CLASS_NAME object may be
	// discarded/deleted (assuming the programming language requires explicit deletes).
	// Multiple calls to UnlockComponent are harmless. If the Chilkat API is already
	// unlocked, the duplicate calls to UnlockComponent are no-ops.
	// 
	// Note: The CLASS_NAME's UnlockComponent method should only be called with a
	// Bundle unlock code. If an individual product license was purchased, the
	// UnlockComponent method in the specifically licensed class should be called
	// instead.
	// 
	bool UnlockBundle(const char *bundleUnlockCode);






	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
