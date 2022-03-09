#pragma once
#include "Divide.h"
#include "Stopwatch.h"

/// <summary>
/// ������� �������� �������� �������
/// ������ ������� Divide(try-catch)
/// </summary>
/// <returns>������� ����� ������</returns>
long long GetAverageExecutionTimeTryCatch();

/// <summary>
/// ������� �������� �������� �������
/// ������ ������� Divide(int)
/// </summary>
/// <returns>������� ����� ������</returns>
long long GetAverageExecutionTimeInt();

/// <summary>
/// ������� �������� �������� �������
/// ������ ������� Divide(bool)
/// </summary>
/// <returns>������� ����� ������</returns>
long long GetAverageExecutionTimeBool();

/// <summary>
/// ������� �������� �������� �������
/// ������ ������� Divide(HRESULT)
/// </summary>
/// <returns>������� ����� ������</returns>
long long GetAverageExecutionTimeHRESULT();