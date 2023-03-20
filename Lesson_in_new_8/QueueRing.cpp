#include "QueueRing.h"
void QueueRing::Show() {
	cout << "\n-------------------------\n";
	for (int i = 0; i < QueueLength; i++)
	{
		cout << Wait[i] << " ";
	}
	cout << "\n-------------------------\n";
}

QueueRing::QueueRing(int m) : MaxQueueLength{ m },
Wait{ new int[m] },
QueueLength{ 0 } {}

QueueRing::~QueueRing() {
	delete[]Wait;
}
void QueueRing::Clear() {
	QueueLength = 0;
}
bool QueueRing::IsEmpty() {
	return QueueLength == 0;
}
bool QueueRing::IsFull() {
	return QueueLength == MaxQueueLength;
}
int QueueRing::GetCount() {
	return QueueLength;
}
void QueueRing::Add(int c) {
	if (!IsFull())
		Wait[QueueLength++] = c;
}
bool QueueRing::Extract() {
	if (!IsEmpty())
	{
		int temp = Wait[0];
		for (int i = 1; i < QueueLength; i++) {
			Wait[i - 1] = Wait[i];
		}
		Wait[QueueLength - 1] = temp;
	
		return 1;
	}
	else
		return 0;
}