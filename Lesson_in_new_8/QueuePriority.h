#pragma once
#include <iostream>   // ����: ������������ ���������. ���� - ��� ������ ������ ��� ��������� � �����. � �������.
#include <Windows.h>

using namespace std;

class QueuePriority
{
		int* Wait;	//�������
		int* Pri;	// ���������
		int MaxQueueLength;
		int QueueLength;

	public:
		QueuePriority(int);
		~QueuePriority();
		void Add(int, int);		// ����������
		int Extract();	// ����������
		void Clear();	// ������� �������
		bool IsEmpty();	// �������� �� ���-��� ��-�� � �������
		bool IsFull();	// �������� �� ������������
		int GetCount();	// ���-�� �� � �������
		void Show();	// �����
};

