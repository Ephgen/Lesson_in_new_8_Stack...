#pragma once
#include <iostream> 
#include <Windows.h>

using namespace std;

class Queue
{
	int* Wait;
	int MaxQueueLength;
	int QueueLength;

public:
	Queue(int);
	~Queue();
	void Add(int);		// ����������
	int Extract();	// ����������
	void Clear();	// ������� �������
	bool IsEmpty();	// �������� �� ���-��� ��-�� � �������
	bool IsFull();	// �������� �� ������������
	int GetCount();	// ���-�� �� � �������
	void Show();	// �����
};

