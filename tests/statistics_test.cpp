
#include "StatisticsTest.hpp"
#include "lib/tpunit++.hpp"

using namespace std;

int main()
{
	StatisticsTest __StatisticsTestTest;

	/**
	 * Run all of the registered tpunit++ tests. Returns 0 if
	 * all tests are successful, otherwise returns the number
	 * of failing assertions.
	 */
	return tpunit::Tests::Run();

}

