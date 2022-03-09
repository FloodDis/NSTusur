#include "PerformanceTest.h"

long long GetAverageExecutionTimeTryCatch()
{
	int result;
	long long averageTime = 0;
	int exceptionCount = 0;
	Stopwatch stopWatch;
	for (int i = 0; i < 10000; i++)
	{
		stopWatch.Start();
		try
		{
			result = DivideTryCatch(1, 1);
		}
		catch (const int& error)
		{
			exceptionCount++;
		}
		stopWatch.Stop();
		averageTime += stopWatch.GetDuration();
		stopWatch.Reset();
	}
	cout << "Exception count: " << exceptionCount << "\n";
	return averageTime / 10000;
}

long long GetAverageExecutionTimeInt()
{
	int result;
	int answer;
	long long averageTime = 0;
	int exceptionCount = 0;
	Stopwatch stopWatch;
	int denominator = 0;
	for (int i = 0; i < 10000; i++)
	{
		stopWatch.Start();
		answer = DivideInt(1, 1, result);
		if (answer == -1)
		{
			exceptionCount++;
		}
		stopWatch.Stop();
		averageTime += stopWatch.GetDuration();
		stopWatch.Reset();
	}
	cout << "Exception count: " << exceptionCount << "\n";
	return averageTime / 10000;
}

long long GetAverageExecutionTimeBool()
{
	bool answer;
	int result;
	long long averageTime = 0;
	int exceptionCount = 0;
	Stopwatch stopWatch;
	for (int i = 0; i < 10000; i++)
	{
		stopWatch.Start();
		answer = DivideBool(1, 1, result);
		if (answer == false)
		{
			exceptionCount++;
		}
		stopWatch.Stop();
		averageTime += stopWatch.GetDuration();
		stopWatch.Reset();
	}
	cout << "Exception count: " << exceptionCount << "\n";
	return averageTime / 10000;
}

long long GetAverageExecutionTimeHRESULT()
{
	HRESULT answer;
	int result;
	long long averageTime = 0;
	int exceptionCount = 0;
	Stopwatch stopWatch;
	for (int i = 0; i < 10000; i++)
	{
		stopWatch.Start();
		answer = DivideHRESULT(1, 1, result);
		if (answer == E_INVALIDARG)
		{
			exceptionCount++;
		}
		stopWatch.Stop();
		averageTime += stopWatch.GetDuration();
		stopWatch.Reset();
	}
	cout << "Exception count: " << exceptionCount << "\n";
	return averageTime / 10000;
}