#include "Queue.h"
void Queue::Show() {
	cout << "\n-------------------------\n";
	for (int i = 0; i < QueueLength; i++)
	{
		cout << Wait[i] << " ";
	}
	cout << "\n-------------------------\n";
}

Queue::Queue(int m) : MaxQueueLength{ m },
Wait{ new int[m] },
QueueLength{ 0 } {}

Queue::~Queue() {
	delete[]Wait;
}
	void Queue::Clear() {
		QueueLength = 0;
	}
	bool Queue::IsEmpty() {
		return QueueLength == 0;
	}
	bool Queue::IsFull() {
		return QueueLength == MaxQueueLength;
	}
	int Queue::GetCount() {
		return QueueLength;
	}
	void Queue::Add(int c) {
		if (!IsFull())
			Wait[QueueLength++] = c;
	}
	int Queue::Extract() {
		if (!IsEmpty())
		{
			int temp = Wait[0];
			for (int i = 1; i < QueueLength; i++) {
				Wait[i - 1] = Wait[i];
			}
			QueueLength--;
			return temp;
		}
		else
			return -1;
	}