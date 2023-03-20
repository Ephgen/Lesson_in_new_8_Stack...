#include "Stack.h"

Stack::Stack() {
	top = EMPTY;
}
void Stack::Clear() {
	top = EMPTY;
}
bool Stack::IsEmpty() {
	return top == EMPTY;
}
bool Stack::IsFull() {
	return top == FULL;
}
int Stack::GetCount() {
	return top + 1;
}
void Stack::Push(char c) {
	if (!IsFull())
		st[++top] = c;
}
char Stack::Pop() {
	if (!IsEmpty())
		return st[top--];
	else
		return NULL;
}
