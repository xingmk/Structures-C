#include <bits/stdc++.h>
#define Maxsize 50
using namespace std;
typedef int ElemType;

// Construct (Static)
typedef struct {
	ElemType data[Maxsize];
	int length;
}SqList;

// Initialization (Static)
void InitList(SqList &L) {
	for (int i=0; i<Maxsize; i++) {
		L.data[i] = 0;
	}
	L.length = 0;
}

// Print Values
void PrintValues (SqList &L){
	for (int i=0; i<Maxsize; i++) {
		cout << L.data[i] << endl;
	}
}

int main() {
	SqList L;
	InitList(L);

	PrintValues(L);
	return 0;
}

