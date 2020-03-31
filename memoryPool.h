/*	
  This class MUST NOT be changed. Implementation of this class should only be
	done in MemoryPool.cpp. Changing this header file will most likely cause
	the test harness to fail to compile, which will constitute a fail.
*/

#include <string>

class MemoryPool
{
	void* m_buffer;
	unsigned int m_available;

	// Do not add additional member variables, or methods. changes made to MemoryPool.h
	// WILL NOT be integrated into the test harness. Changing this class will
	// result in your test failing to compile, and will constitute a fail.
public:

	// DO NOT change these APIs, doing so will fail to compile against our 
	// test harness and will constitute a fail.
	MemoryPool(const int bufferSize);
	void* allocate(const unsigned int allocationSize);
	void deallocate(void*);
	int available() { return m_available; }
	bool validatePool();
};
