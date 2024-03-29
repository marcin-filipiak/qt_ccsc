// CkHashtable.h: interface for the CkHashtable class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat v9.5.0

#ifndef _CkHashtable_H
#define _CkHashtable_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"




#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkHashtable
class CK_VISIBLE_PUBLIC CkHashtable  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkHashtable(const CkHashtable &);
	CkHashtable &operator=(const CkHashtable &);

    public:
	CkHashtable(void);
	virtual ~CkHashtable(void);

	static CkHashtable *createNew(void);
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
	// Adds or replaces an entry with the given key and string value to the hash table.
	// Returns true if a new hash entry was added or replaced. Returns false if an
	// out-of-memory condition occurred.
	bool AddStr(const char *key, const char *value);


	// Adds or replaces an entry with the given key and integer value to the hash
	// table. Returns true if a new hash entry was added or replaced. Returns false
	// if an out-of-memory condition occurred.
	bool AddInt(const char *key, int value);


	// Removes all elements from the Hashtable.
	void Clear(void);


	// Determines if a given key is contained within the hash table. Returns true if
	// the key exists, otherwise returns false.
	bool Contains(const char *key);


	// Removes the entry with the specified key from the hash table. Returns true if
	// the key existed and was removed. Returns false if the key did not already
	// exist.
	bool Remove(const char *key);


	// Returns the string value associated with the specified key.
	bool LookupStr(const char *key, CkString &outStr);

	// Returns the string value associated with the specified key.
	const char *lookupStr(const char *key);

	// Returns the integer value associated with the specified key. If the key is not
	// in the hash table, the return value is 0.
	int LookupInt(const char *key);


	// Removes all elements from the Hashtable and re-sizes with the specified ARG1.
	// 
	// The capacity is the number of buckets in the hash table. In the case of a "hash
	// collision", a single bucket stores multiple entries, which must be searched
	// sequentially. One rule of thumb is to set the capacity to twice the number of
	// expected items to be hashed. It's also preferable to set the capacity to a prime
	// number. (The 1st 10,000 prime numbers are listed here:
	// https://primes.utm.edu/lists/small/10000.txt )
	// 
	// The initial default capacity of the hash table is 521.
	// 
	bool ClearWithNewCapacity(int capacity);






	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
