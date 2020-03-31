/*
  MemoryPool is a basic memory management class. It contains a buffer, from which
	you will need to allocate space as needed. The space that you have
	made available should not be used by other requests so you will need to track
	the allocations as they come. Tracking the usage needs to be implemented in-place.
	In other words, do not create additional storage to track the pointers that have
	been allocated.

	Conversely, deallocate will inform the memory manager that
	a particular pointer is no longer needed, and the memory being reserved should
	be returned into the available pool. Note that as memory is deallocated
	you may need to adjust your tracking of m_buffer's usage so that after heavy
	allocation and deallocation there is available space for a new large allocation.

	Expected use cases. There are two competing goals for your memory manager
	1. Run time performance. Your solution will be measured for computational
	efficiency. You should not leave debugging or validation code in the allocate()
	and deallocate() methods.

	2. Fragmentation. Memory fragmentation is a frequent problem when running
	software in an embedded system. Your solution will be tested for memory fragmentation.
	Note: it will  not be necessary to write a small alloc pool for this test.
*/

#include <iostream>
#include <cstdlib>

#include "MemoryPool.h"



// This method is for your convenience; however, it is useful
// to write when solving the problem. The function declaration is a reminder 
// that you may build scaffolding to help develop a solution.
bool MemoryPool::validatePool()
{
	return true;
}

// Please add any work that needs to be done to initialize
//	- the buffer
//	- correctly calculating available memory
MemoryPool::MemoryPool(const int bufferSize)
	: m_buffer(nullptr)
	, m_available(bufferSize)
{
	m_buffer = malloc(bufferSize);
}

// We now are in the meat and potatoes of the problem
// this method needs to find a block of memory inside the buffer
// that is unused and return a pointer to it. You will need
// to utilize a part of the buffer to track this block of memory.
void* MemoryPool::allocate(const unsigned int allocationSize)
{
	// don't forget to update m_available
	// m_buffer contains size of requested memory else NULL

		// next will contain address of next chunk in list
		// when allocated it will be used ny the user

	
	return nullptr;	// nullptr is only acceptable if allocate() failed to find space.
}

// The second half of the problem at hand: when a pointer is handed back to you
// you should make that memory available to be used in future calls 
// to allocate(). 
// You do not have to test for valid pointers 
//	- you will only be given a pointer that was returned by allocate()
//	- deallocate() will never be called with the same pointer twice
//	- pointers will always be in the space of m_buffer
void MemoryPool::deallocate(void *aPointer)
{
	// don't forget to update m_available
	// utilize free() to de-allocate memory
}
