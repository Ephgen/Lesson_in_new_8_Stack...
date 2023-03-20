#pragma once
#include <iostream> 
#include <Windows.h>

using namespace std;

class QueueRing
{
	int* Wait;
	int MaxQueueLength;
	int QueueLength;

public:
	QueueRing(int);
	~QueueRing();
	void Add(int);		// ����������
	bool Extract();	// ����������
	void Clear();	// ������� �������
	bool IsEmpty();	// �������� �� ���-��� ��-�� � �������
	bool IsFull();	// �������� �� ������������
	int GetCount();	// ���-�� �� � �������
	void Show();	// �����
};
