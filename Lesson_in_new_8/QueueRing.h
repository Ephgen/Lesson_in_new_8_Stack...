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
	void Add(int);		// ƒобавление
	bool Extract();	// извлечение
	void Clear();	// очистка очереди
	bool IsEmpty();	// проверка на сущ-ние эл-ов в очереди
	bool IsFull();	// проверка на переполнение
	int GetCount();	// кол-во эл в очереди
	void Show();	// вывод
};
