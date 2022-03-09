#pragma once
#include <iostream>
#include <winerror.h>
using namespace std;

/// <summary>
/// ������� ������� ���� ����� (try-catch)
/// </summary>
/// <param name="numerator">���������</param>
/// <param name="denominator">�����������</param>
/// <returns>��������� �������</returns>
int DivideTryCatch(int numerator, int denominator);

/// <summary>
/// ������� ������� ���� ����� (bool)
/// </summary>
/// <param name="numerator">���������</param>
/// <param name="denominator">�����������</param>
/// <param name="result">����������, 
/// ���� ����� ������������� ��������� �������</param>
/// <returns>
/// true - ������� ������ �������, 
/// false - ��������� ���������� 
/// </returns>
bool DivideBool(int numerator, int denominator, int& result);

/// <summary>
/// ������� ������� ���� ����� (int)
/// </summary>
/// <param name="numerator">���������</param>
/// <param name="denominator">�����������</param>
/// <param name="result">����������, 
/// ���� ����� ������������� ��������� �������</param> 
/// <returns>
/// 0 - ������� ������ �������
/// -1 - ��������� ����������
/// </returns>
int DivideInt(int numerator, int denominator, int& result);

/// <summary>
/// ������� ������� ���� ����� (HRESULT)
/// </summary>
/// <param name="numerator">���������</param>
/// <param name="denominator">�����������</param>
/// <param name="result">����������, 
/// ���� ����� ������������� ��������� �������</param> 
/// <returns>
/// S_OK - ������� ������ �������
/// E_INVALIDARG - ��������� ����������
/// </returns>
HRESULT DivideHRESULT(int numerator, int denominator, int& result);