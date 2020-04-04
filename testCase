namespace TestCase
{
  typedef std::chrono::high_resolution_clock Clock;
}
using namespace TestCase;

void runBasicTest()
{
	const int basicTestBufferSize = 1000;
	MemoryPool basicTestBuffer(basicTestBufferSize);

	auto startTime = Clock::now();

	void* basicTestPointer = basicTestBuffer.allocate(sizeof(char) * ((basicTestBuffer.available() * 8) / 10));

	if (nullptr == basicTestPointer)
	{
		std::cout << "ERROR: Basic test returned nullptr" << std::endl;
	}

	// test recombining pools
	// Also test multiple simultaneous buffers.
	const int recombiningTestBufferSize = 10000;
	MemoryPool recombiningTestBuffer(recombiningTestBufferSize);
	void* recombiningTestPointer1 = recombiningTestBuffer.allocate(sizeof(char) * (recombiningTestBuffer.available() / 4));
	void* recombiningTestPointer2 = recombiningTestBuffer.allocate(sizeof(char) * (recombiningTestBuffer.available() / 4));
	void* recombiningTestPointer3 = recombiningTestBuffer.allocate(sizeof(char) * (recombiningTestBuffer.available() / 4));
	void* recombiningTestPointer4 = recombiningTestBuffer.allocate(sizeof(char) * (recombiningTestBuffer.available() / 4));
	void* recombiningTestPointer5 = recombiningTestBuffer.allocate(sizeof(char) * (recombiningTestBuffer.available() / 4));
	void* recombiningTestPointer6 = recombiningTestBuffer.allocate(sizeof(char) * (recombiningTestBuffer.available() / 4));


	recombiningTestBuffer.deallocate(recombiningTestPointer6);
	recombiningTestBuffer.deallocate(recombiningTestPointer5);
	recombiningTestBuffer.deallocate(recombiningTestPointer4);
	recombiningTestBuffer.deallocate(recombiningTestPointer3);
	recombiningTestBuffer.deallocate(recombiningTestPointer2);

	// simple test to make sure that they don't have some global that will break things
	basicTestBuffer.deallocate(basicTestPointer);
	basicTestBuffer.validatePool();

	recombiningTestBuffer.deallocate(recombiningTestPointer1);
	recombiningTestBuffer.validatePool();

	auto timeTaken = static_cast<unsigned int> (std::chrono::duration_cast<std::chrono::milliseconds>(Clock::now() - startTime).count());

	std::cout << "Basic allocation time taken in milliseconds =" << timeTaken << std::endl;
}
