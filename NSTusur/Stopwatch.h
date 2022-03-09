#pragma once
#include <chrono>

/// <summary>
/// ����������
/// </summary>
class Stopwatch
{
public:
	/// <summary>
	/// ����������� ������
	/// </summary>
	Stopwatch();

	/// <summary>
	/// ��������� ����������.
	/// </summary>
	void Start();

	/// <summary>
	/// ���������� ����������.
	/// </summary>
	void Stop();

	/// <summary>
	/// �������� ��������� �� ���� � ���������� ���������� �������.
	/// </summary>
	void Reset();

	/// <summary>
	/// �������� ���������� ����� � ������������.
	/// </summary>
	/// <returns>����� ����� - �����������.</returns>
	long long GetDuration();

private:

	/// <summary>
	/// ���� ��������� �������
	/// true - ������ ����������, false - ������ �������.
	/// </summary>
	bool _isStopped;

	/// <summary>
	/// ������ ������ �������.
	/// </summary>
	std::chrono::high_resolution_clock::time_point _timeBegin;

	/// <summary>
	/// ������ ��������� �������.
	/// </summary>
	std::chrono::high_resolution_clock::time_point _timeEnd;

	/// <summary>
	/// ����������������� �������.
	/// </summary>
	std::chrono::high_resolution_clock::time_point _timeDuration;
};
