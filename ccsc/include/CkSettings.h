// This source file is not generated.

#if !defined(_CKSETTINGS_H_INCLUDED_)
#define _CKSETTINGS_H_INCLUDED_

#include "chilkatDefs.h"

#ifndef __sun__
#pragma pack (push, 8)
#endif

// Do not uncomment this line.
//#define CK_SIM_OUT_OF_MEMORY


class CK_VISIBLE_PUBLIC CkSettings  
{
public:
	CkSettings();
	virtual ~CkSettings();

	// CLASS: CkSettings

	// Applies to Windows systems only.  Indicates whether the Windows CA cert stores (registry based, such as Current User or Local Machine)
	// are automatically consulted to implicitly trust root CA certificates. (Meaning that if a certificate is found in 
	// a CA cert store, then it is assumed to be trusted.)
	// The default value is true.
	static bool m_trustSystemCaRoots;

	// Each Chilkat object's Utf8 property will default to the value of 
	// CkSettings::m_utf8.  The default is false (meaning ANSI).
	static bool m_utf8;  

	// If set to true, then all LastErrorText's will be verbose w.r.t. SSL/TLS internals.
	// The default is false.
	static bool m_verboseSsl;

	// If set to true, then all LastErrorText's will be verbose w.r.t. MIME parsing internals.
	// The default is false.
	static bool m_verboseMime;

	// If set to true, then log the certs examined when searching..
	// The default is false.
	static bool m_verboseCertStoreSearch;

	// Defaults to 262144
	static int m_socketSendBufSize;
	// Defaults to 4194304
	static int m_socketRecvBufSize;

	// Defaults to 2.  May be set to 1 in CkGlobal's "DefaultNtlmVersion" property.
	// Determines the NTLM protocol version used by HTTP, POP3, IMAP, SMTP, and HTTP proxies.
	static int m_defaultNtlmVersion;

#if defined(CK_SIM_OUT_OF_MEMORY)

#define CHECK_FAIL_NEW \
    CkSettings::m_newCount++; \
    if (CkSettings::m_newFailAtCount && (CkSettings::m_newCount >= CkSettings::m_newFailAtCount)) return 0;

#define CHECK_FAIL_NEW_F \
    CkSettings::m_newCount++; \
    if (CkSettings::m_newFailAtCount && (CkSettings::m_newCount >= CkSettings::m_newFailAtCount)) return false;

#define CHECK_FAIL_NEW_R \
    CkSettings::m_newCount++; \
    if (CkSettings::m_newFailAtCount && (CkSettings::m_newCount >= CkSettings::m_newFailAtCount)) return;

#define CHECK_FAIL_NEW_V(rtnValue) \
    CkSettings::m_newCount++; \
    if (CkSettings::m_newFailAtCount && (CkSettings::m_newCount >= CkSettings::m_newFailAtCount)) return rtnValue;

#else

#define CHECK_FAIL_NEW
#define CHECK_FAIL_NEW_F
#define CHECK_FAIL_NEW_R
#define CHECK_FAIL_NEW_V(rtnValue)

#endif

	// Simulate out-of-memory conditions.
	// Each internal Chilkat heap allocation increments m_newCount.
	static __int64 m_newCount;
	// Set this to non-zero to fail the internal heap allocation at this count or greater.
	static __int64 m_newFailAtCount;


	// Call this once at the beginning of your program
	// if your program is multithreaded.
	static void initializeMultithreaded(void);

	// Call this once at the end of your program.
	// It is only necessary if you are testing for memory leaks.
	static void cleanupMemory(void);


	// Get the sum of the sizes of all the process heaps.
	// Only valid/implemented on Windows..
	//static unsigned long getTotalSizeProcessHeaps(void);

	// Only valid/implemented on Windows.  Returns true if all process heaps are valid,
	// returns false if any process heaps are corrupted.
	static bool validateHeap(void);

	static int getAnsiCodePage(void);
	static int getOemCodePage(void);
	static void setAnsiCodePage(int cp);
	static void setOemCodePage(int cp);

};
#ifndef __sun__
#pragma pack (pop)
#endif


#endif // !defined(_CKSETTINGS_H_INCLUDED_)
