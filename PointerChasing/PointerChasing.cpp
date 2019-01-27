// PointerChasing.cpp : Defines the entry point for the application.
//

#include "PointerChasing.h"
#include "Benchmarks.h"

using namespace std;

int main()
{
	for (int i = 0; i < 10; ++i)
	{
		double timeTaken;
		cout << " Running L1 test";
		for (int j = 0; j < 10; ++j)
		{
			timeTaken = BenchmarkL1ToCPU();
			cout << "\n " << timeTaken;
		}

		cout << "\n Running L2 test";
		for (int j = 0; j < 10; ++j)
		{
			timeTaken = BenchmarkL2ToCPU();
			cout << "\n " << timeTaken ;
		}

		cout << "\n Running RAM test";
		for (int j = 0; j < 10; ++j)
		{
			timeTaken = BenchmarkMainMemToCPU();
			cout << "\n "<<timeTaken;
		}
	}

	return 0;
}
