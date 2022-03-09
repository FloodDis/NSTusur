#pragma once
#include <iostream>
#include <winerror.h>
using namespace std;

/// <summary>
/// Функция деления двух чисел (try-catch)
/// </summary>
/// <param name="numerator">Числитель</param>
/// <param name="denominator">Знаменатель</param>
/// <returns>Результат деления</returns>
int DivideTryCatch(int numerator, int denominator);

/// <summary>
/// Функция деления двух чисел (bool)
/// </summary>
/// <param name="numerator">Числитель</param>
/// <param name="denominator">Знаменатель</param>
/// <param name="result">Переменная, 
/// куда будет присваиваться результат деления</param>
/// <returns>
/// true - деление прошло успешно, 
/// false - появилось исключение 
/// </returns>
bool DivideBool(int numerator, int denominator, int& result);

/// <summary>
/// Функция деления двух чисел (int)
/// </summary>
/// <param name="numerator">Числитель</param>
/// <param name="denominator">Знаменатель</param>
/// <param name="result">Переменная, 
/// куда будет присваиваться результат деления</param> 
/// <returns>
/// 0 - деление прошло успешно
/// -1 - появилось исключение
/// </returns>
int DivideInt(int numerator, int denominator, int& result);

/// <summary>
/// Функция деления двух чисел (HRESULT)
/// </summary>
/// <param name="numerator">Числитель</param>
/// <param name="denominator">Знаменатель</param>
/// <param name="result">Переменная, 
/// куда будет присваиваться результат деления</param> 
/// <returns>
/// S_OK - деление прошло успешно
/// E_INVALIDARG - появилось исключение
/// </returns>
HRESULT DivideHRESULT(int numerator, int denominator, int& result);