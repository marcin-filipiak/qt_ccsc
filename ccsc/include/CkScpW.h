// CkScpW.h: interface for the CkScpW class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat v9.5.0

#ifndef _CkScpW_H
#define _CkScpW_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkWideCharBase.h"

class CkByteData;
class CkTaskW;
class CkSshW;
class CkBaseProgressW;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkScpW
class CK_VISIBLE_PUBLIC CkScpW  : public CkWideCharBase
{
    private:
	bool m_cbOwned;
	void *m_eventCallback;

	// Don't allow assignment or copying these objects.
	CkScpW(const CkScpW &);
	CkScpW &operator=(const CkScpW &);

    public:
	CkScpW(void);
	virtual ~CkScpW(void);

	static CkScpW *createNew(void);
	

	CkScpW(bool bCallbackOwned);
	static CkScpW *createNew(bool bCallbackOwned);

	
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
	// This is the number of milliseconds between each AbortCheck event callback. The
	// AbortCheck callback allows an application to abort any SSH operation prior to
	// completion. If HeartbeatMs is 0 (the default), no AbortCheck event callbacks
	// will fire.
	int get_HeartbeatMs(void);
	// This is the number of milliseconds between each AbortCheck event callback. The
	// AbortCheck callback allows an application to abort any SSH operation prior to
	// completion. If HeartbeatMs is 0 (the default), no AbortCheck event callbacks
	// will fire.
	void put_HeartbeatMs(int newVal);

	// This property is only valid in programming environment and languages that allow
	// for event callbacks.
	// 
	// Sets the value to be defined as 100% complete for the purpose of PercentDone
	// event callbacks. The defaut value of 100 means that at most 100 event
	// PercentDone callbacks will occur in a method that (1) is event enabled and (2)
	// is such that it is possible to measure progress as a percentage completed. This
	// property may be set to larger numbers to get more fine-grained PercentDone
	// callbacks. For example, setting this property equal to 1000 will provide
	// callbacks with .1 percent granularity. For example, a value of 453 would
	// indicate 45.3% competed. This property is clamped to a minimum value of 10, and
	// a maximum value of 100000.
	// 
	int get_PercentDoneScale(void);
	// This property is only valid in programming environment and languages that allow
	// for event callbacks.
	// 
	// Sets the value to be defined as 100% complete for the purpose of PercentDone
	// event callbacks. The defaut value of 100 means that at most 100 event
	// PercentDone callbacks will occur in a method that (1) is event enabled and (2)
	// is such that it is possible to measure progress as a percentage completed. This
	// property may be set to larger numbers to get more fine-grained PercentDone
	// callbacks. For example, setting this property equal to 1000 will provide
	// callbacks with .1 percent granularity. For example, a value of 453 would
	// indicate 45.3% competed. This property is clamped to a minimum value of 10, and
	// a maximum value of 100000.
	// 
	void put_PercentDoneScale(int newVal);

	// Can contain a wildcarded list of file patterns (or exact file/directory names)
	// separated by semicolons. For example, "*.xml; *.txt; *.csv". If set, the
	// SyncTreeUpload and SyncTreeDownload methods will only transfer files that match
	// any one of these patterns.
	// 
	// Note: Unlike the SFTP's SyncMustNotMatch property, this property applies to both
	// filenames and directory names when recursively traversing a directory tree.
	// 
	void get_SyncMustMatch(CkString &str);
	// Can contain a wildcarded list of file patterns (or exact file/directory names)
	// separated by semicolons. For example, "*.xml; *.txt; *.csv". If set, the
	// SyncTreeUpload and SyncTreeDownload methods will only transfer files that match
	// any one of these patterns.
	// 
	// Note: Unlike the SFTP's SyncMustNotMatch property, this property applies to both
	// filenames and directory names when recursively traversing a directory tree.
	// 
	const wchar_t *syncMustMatch(void);
	// Can contain a wildcarded list of file patterns (or exact file/directory names)
	// separated by semicolons. For example, "*.xml; *.txt; *.csv". If set, the
	// SyncTreeUpload and SyncTreeDownload methods will only transfer files that match
	// any one of these patterns.
	// 
	// Note: Unlike the SFTP's SyncMustNotMatch property, this property applies to both
	// filenames and directory names when recursively traversing a directory tree.
	// 
	void put_SyncMustMatch(const wchar_t *newVal);

	// Can contain a wildcarded list of file patterns separated by semicolons. For
	// example, "*.xml; *.txt; *.csv". If set, the SyncTreeUpload and SyncTreeDownload
	// methods will not transfer files that match any one of these patterns.
	// 
	// Note: Unlike the SFTP's SyncMustNotMatch property, this property applies to both
	// filenames and directory names when recursively traversing a directory tree.
	// 
	void get_SyncMustNotMatch(CkString &str);
	// Can contain a wildcarded list of file patterns separated by semicolons. For
	// example, "*.xml; *.txt; *.csv". If set, the SyncTreeUpload and SyncTreeDownload
	// methods will not transfer files that match any one of these patterns.
	// 
	// Note: Unlike the SFTP's SyncMustNotMatch property, this property applies to both
	// filenames and directory names when recursively traversing a directory tree.
	// 
	const wchar_t *syncMustNotMatch(void);
	// Can contain a wildcarded list of file patterns separated by semicolons. For
	// example, "*.xml; *.txt; *.csv". If set, the SyncTreeUpload and SyncTreeDownload
	// methods will not transfer files that match any one of these patterns.
	// 
	// Note: Unlike the SFTP's SyncMustNotMatch property, this property applies to both
	// filenames and directory names when recursively traversing a directory tree.
	// 
	void put_SyncMustNotMatch(const wchar_t *newVal);

	// The paths of the files uploaded or downloaded in the last call to SyncUploadTree
	// or SyncDownloadTree. The paths are listed one per line. In both cases (for
	// upload and download) each line contains the full local file path (not the remote
	// path).
	void get_SyncedFiles(CkString &str);
	// The paths of the files uploaded or downloaded in the last call to SyncUploadTree
	// or SyncDownloadTree. The paths are listed one per line. In both cases (for
	// upload and download) each line contains the full local file path (not the remote
	// path).
	const wchar_t *syncedFiles(void);
	// The paths of the files uploaded or downloaded in the last call to SyncUploadTree
	// or SyncDownloadTree. The paths are listed one per line. In both cases (for
	// upload and download) each line contains the full local file path (not the remote
	// path).
	void put_SyncedFiles(const wchar_t *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Downloads a binary file from the SSH server and returns the contents.
	bool DownloadBinary(const wchar_t *remotePath, CkByteData &outBytes);

	// Creates an asynchronous task to call the DownloadBinary method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *DownloadBinaryAsync(const wchar_t *remotePath);

	// Downloads a file from the SSH server returns the contents in an encoded string
	// (using an encoding such as base64).
	bool DownloadBinaryEncoded(const wchar_t *remotePath, const wchar_t *encoding, CkString &outStr);
	// Downloads a file from the SSH server returns the contents in an encoded string
	// (using an encoding such as base64).
	const wchar_t *downloadBinaryEncoded(const wchar_t *remotePath, const wchar_t *encoding);

	// Creates an asynchronous task to call the DownloadBinaryEncoded method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *DownloadBinaryEncodedAsync(const wchar_t *remotePath, const wchar_t *encoding);

	// Downloads a file from the remote SSH server to the local filesystem.
	bool DownloadFile(const wchar_t *remotePath, const wchar_t *localPath);

	// Creates an asynchronous task to call the DownloadFile method with the arguments
	// provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *DownloadFileAsync(const wchar_t *remotePath, const wchar_t *localPath);

	// Downloads a text file from the SSH server and returns the contents as a string.
	bool DownloadString(const wchar_t *remotePath, const wchar_t *charset, CkString &outStr);
	// Downloads a text file from the SSH server and returns the contents as a string.
	const wchar_t *downloadString(const wchar_t *remotePath, const wchar_t *charset);

	// Creates an asynchronous task to call the DownloadString method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *DownloadStringAsync(const wchar_t *remotePath, const wchar_t *charset);

	// Downloads files from the SSH server to a local directory tree. Synchronization
	// modes include:
	// 
	//     mode=0: Download all files
	//     mode=1: Download all files that do not exist on the local filesystem.
	//     mode=2: Download newer or non-existant files.
	//     mode=3: Download only newer files. If a file does not already exist on the
	//     local filesystem, it is not downloaded from the server.
	//     mode=5: Download only missing files or files with size differences.
	//     mode=6: Same as mode 5, but also download newer files.
	//     
	// 
	bool SyncTreeDownload(const wchar_t *remoteRoot, const wchar_t *localRoot, int mode, bool bRecurse);

	// Creates an asynchronous task to call the SyncTreeDownload method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *SyncTreeDownloadAsync(const wchar_t *remoteRoot, const wchar_t *localRoot, int mode, bool bRecurse);

	// Uploads a directory tree from the local filesystem to the SSH server.
	// Synchronization modes include:
	// 
	//     mode=0: Upload all files
	//     mode=1: Upload all files that do not exist on the FTP server.
	//     mode=2: Upload newer or non-existant files.
	//     mode=3: Upload only newer files. If a file does not already exist on the FTP
	//     server, it is not uploaded.
	//     mode=4: transfer missing files or files with size differences.
	//     mode=5: same as mode 4, but also newer files.
	// 
	bool SyncTreeUpload(const wchar_t *localBaseDir, const wchar_t *remoteBaseDir, int mode, bool bRecurse);

	// Creates an asynchronous task to call the SyncTreeUpload method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *SyncTreeUploadAsync(const wchar_t *localBaseDir, const wchar_t *remoteBaseDir, int mode, bool bRecurse);

	// Uploads binary data to a file on the SSH server.
	bool UploadBinary(const wchar_t *remotePath, const CkByteData &binData);

	// Creates an asynchronous task to call the UploadBinary method with the arguments
	// provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UploadBinaryAsync(const wchar_t *remotePath, const CkByteData &binData);

	// Uploads the binary data to a file on the remote SSH server. The binary data is
	// passed in encoded string representation (such as base64, or hex).
	bool UploadBinaryEncoded(const wchar_t *remotePath, const wchar_t *encodedData, const wchar_t *encoding);

	// Creates an asynchronous task to call the UploadBinaryEncoded method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UploadBinaryEncodedAsync(const wchar_t *remotePath, const wchar_t *encodedData, const wchar_t *encoding);

	// Uploads a file from the local filesystem to the remote SSH server.
	bool UploadFile(const wchar_t *localPath, const wchar_t *remotePath);

	// Creates an asynchronous task to call the UploadFile method with the arguments
	// provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UploadFileAsync(const wchar_t *localPath, const wchar_t *remotePath);

	// Uploads the contents of a string to a file on the remote SSH server.
	bool UploadString(const wchar_t *remotePath, const wchar_t *textData, const wchar_t *charset);

	// Creates an asynchronous task to call the UploadString method with the arguments
	// provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UploadStringAsync(const wchar_t *remotePath, const wchar_t *textData, const wchar_t *charset);

	// Uses the SSH connection of ARG1 for the SCP transfers. All of the connection and
	// socket related properties, proxy properites, timeout properties, session log,
	// etc. set on the SSH object apply to the SCP methods (because internally it is
	// the SSH object that is used to do the work of the file transfers).
	// 
	// Note: There is no UnlockComponent method in the SCP class because it is the SSH
	// object that must be unlocked. When the SSH object is not unlocked, this method
	// will return false to indicate failure.
	// 
	bool UseSsh(CkSshW &sshConnection);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
