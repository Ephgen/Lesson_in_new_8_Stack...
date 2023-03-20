#pragma once
#include <iostream>   // Тема: Динамические структуры. Стэк - кто первый пришел тот последним и уйдет. и очередь.
#include <Windows.h>

using namespace std;

class QueuePriority
{
		int* Wait;	//очередь
		int* Pri;	// Приоритет
		int MaxQueueLength;
		int QueueLength;

	public:
		QueuePriority(int);
		~QueuePriority();
		void Add(int, int);		// Добавление
		int Extract();	// извлечение
		void Clear();	// очистка очереди
		bool IsEmpty();	// проверка на сущ-ние эл-ов в очереди
		bool IsFull();	// проверка на переполнение
		int GetCount();	// кол-во эл в очереди
		void Show();	// вывод
};

