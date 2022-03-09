#pragma once
#include "Divide.h"
#include "Stopwatch.h"

/// <summary>
/// Функция подсчета среднего времени
/// работы функции Divide(try-catch)
/// </summary>
/// <returns>среднее время работы</returns>
long long GetAverageExecutionTimeTryCatch();

/// <summary>
/// Функция подсчета среднего времени
/// работы функции Divide(int)
/// </summary>
/// <returns>среднее время работы</returns>
long long GetAverageExecutionTimeInt();

/// <summary>
/// Функция подсчета среднего времени
/// работы функции Divide(bool)
/// </summary>
/// <returns>среднее время работы</returns>
long long GetAverageExecutionTimeBool();

/// <summary>
/// Функция подсчета среднего времени
/// работы функции Divide(HRESULT)
/// </summary>
/// <returns>среднее время работы</returns>
long long GetAverageExecutionTimeHRESULT();