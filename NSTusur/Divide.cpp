#include "Divide.h"

int DivideTryCatch(int numerator, int denominator)
{
	if (denominator == 0)
	{
		throw -1;
	}
	return  numerator / denominator;
}

bool DivideBool(int numerator, int denominator, int& result)
{
	if (denominator == 0)
	{
		return false;
	}
	else
	{
		result = numerator / denominator;
		return true;
	}
}

int DivideInt(int numerator, int denominator, int& result)
{
	if (denominator == 0)
	{
		return -1;
	}
	else
	{
		result = numerator / denominator;
		return 0;
	}
}

HRESULT DivideHRESULT(int numerator, int denominator, int& result)
{
	if (denominator == 0)
	{
		return E_INVALIDARG;
	}
	else
	{
		result = numerator / denominator;
		return S_OK;
	}
}