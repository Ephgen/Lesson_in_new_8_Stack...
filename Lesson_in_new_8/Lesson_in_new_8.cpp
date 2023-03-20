#include <iostream>   // Тема: Динамические структуры. Стэк - кто первый пришел тот последним и уйдет. и очередь.
#include <Windows.h>
#include "Stack.h"
#include "Queue.h"
#include "QueueRing.h"
#include "QueuePriority.h"

using namespace std;


int main()
{
	/*Stack st;
	char c;
	while (!st.IsFull())
	{
		c = rand() % 4 + 2;
		cout << c << " ";
		st.Push(c);
	}
	cout << endl;
	while (c = st.Pop())
	{
		cout << c << " ";
	}*/

	/*Queue queue(25);
	for(int i= 0; i < 10; i++)
		queue.Add(rand() % 50);
	queue.Show();
	queue.Extract();
	queue.Extract();
	queue.Extract();
	queue.Show();*/

	//QueueRing queue(25);
	//for (int i = 0; i < 10; i++)
	//	queue.Add(rand() % 50);
	//queue.Show();
	//queue.Extract();
	//queue.Extract();
	//queue.Extract();
	//queue.Show();

	// Очередь с приоритетами
	QueuePriority queue(25);
	for (int i = 0; i < 10; i++)
		queue.Add(rand() % 50, rand() % 5);
	queue.Show();
	queue.Extract();
	queue.Extract();
	queue.Extract();
	queue.Show();
}
