#include <iostream>
#include <windows.h>
#include "PerformanceTest.h"
using namespace std;

void main()
{
	int averageTime = GetAverageExecutionTimeTryCatch();
	cout << "Average time for try-catch:\n";
	cout << averageTime << "\n\n";

	averageTime = GetAverageExecutionTimeInt();
	cout << "Average time for int:\n";
	cout << averageTime << "\n\n";

	averageTime = GetAverageExecutionTimeBool();
	cout << "Average time for bool:\n";
	cout << averageTime << "\n\n";

	averageTime = GetAverageExecutionTimeHRESULT();
	cout << "Average time for HRESULT:\n";
	cout << averageTime << "\n\n";

	system("pause");
}
