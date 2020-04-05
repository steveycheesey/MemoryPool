#include <iostream>
#include <cstdlib>

#include "MemoryPool.h"

// Please initialize with your name so that we may easily keep track of your test
std::string MemoryPool::m_candidateName("Steven Cheeseman");


// This method is for your convenience, however, it is useful
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
	m_buffer = malloc(bufferSize); // *void m_buffer = malloc
	
}

// We now are in the meat and potatoes of the problem
// this method needs to find a block of memory inside the buffer
// that is unused and return a pointer to it. You will need
// to utilize a part of the buffer to track this block of memory.
void* MemoryPool::allocate(const unsigned int allocationSize) // MUST return type pointer void*
{
	 // don't forget to update m_available
	 // m_buffer contains size of requested memory else NULL
	
	int m_buffer[sizeof(m_available)];
	
	std::cout << "Start available size " << m_available << '\n'; // 1000 is available

	std::cout << "Allocation size " << allocationSize << '\n'; // 800 is allocation @ 1000bytes

	//std::cout << "test pointer to 900" << reinterpret_cast<char*>(m_buffer)[(m_available - (m_available * 10 / 100))];//find some way to track_data

	void* bufferStart = m_buffer;
	
	std::cout << "buffer starts at " << m_buffer << '\n';

	int *start_Location = &m_buffer[200]; // should be the same as m_buffer

	void* next_Address;

	if (m_available != NULL)
	{

		std::cout << "starting allotment address " << start_Location << "\n"; // first available address after tracking data m_buffer[200]

		m_available -= allocationSize;

		trackAllotment = 
		
		std::cout << "what's still available " << m_available << '\n'; // 1000 is available

		//trackAllotment = trackAllotment + allocationSize; // returning a pointer

		next_Address = &m_available;
		
		std::cout << "new address " << next_Address << "\n"; //m_buffer is pointing to address so return this

		std::cout << "m_buffer remains the same starting address " << m_buffer << "\n"; //m_buffer is pointing to address so return this

	}
	if (m_available == NULL)
	{
		return nullptr;
	}

	return (bufferStart); //trackStartOfAlloc);

	//return nullptr;

	/*unsigned int start_address = (m_available - allocationSize);

	if(start_address <= 0)
	{
		return nullptr;
	}*/
	
	//m_available -= start_address;

	//m_available -= reinterpret_cast<int>(m_buffer);

	// m_available -= start_address;


	
	//return (static_cast<int*>(m_buffer) - m_available);



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
	//// don't forget to update m_available
	//// utilize free() to de-allocate memory
	/*std::cout << "Freeing allocated memory: " << aPointer << "\n\n";
	free(aPointer);
	m_buffer = nullptr;
	aPointer = nullptr;*/

}
