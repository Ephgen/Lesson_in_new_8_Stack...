#pragma once
#include <iostream> 
#include <Windows.h>

using namespace std;
class Stack
{
	enum { EMPTY = -1, FULL = 20 };

	char st[FULL + 1];
	int top;

public:
	Stack();			// конструктор
	void Push(char c);  // добавление эл-та.
	char Pop();			// извлечение эл-та
	void Clear();		// Очистка стэка
	bool IsEmpty();		// проверка существования эл-та в стэке
	bool IsFull();		// проверка на переполнение стэка
	int GetCount();		// Кол-во элементов стэка

};

