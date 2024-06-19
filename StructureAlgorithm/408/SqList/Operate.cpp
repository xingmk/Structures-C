#include <bits/stdc++.h>
#define MaxSize 50
using namespace std;

// Construct (Static)
typedef struct {
	int data[MaxSize];
	int length;
}SqList;

// Initialization (Static)
void InitList(SqList &L) {
	for (int i=0; i<50; i++) {
		L.data[i] = 0;
	}
	L.length = 0;
}

// Insert (Value)
bool InsertListV(SqList &L, int num, int value);

// Insert (Location)
bool InsertListL(SqList &L, int position, int value) {
	if (position < 1 || position > L.length+1) return false; 
	if (L.length >= MaxSize) return false;
	
	for (int j=L.length; j>=position; j--){
		L.data[j] = L.data[j-1];
	}
	L.data[position-1] = value;
	L.length++;
	return true;
}


// Print Values
void PrintValues (SqList &L){
	for (int i=0; i<L.length; i++) {
		cout << L.data[i] << endl;
	}
}

int main() {
	SqList L;
	InitList(L);
	
	PrintValues(L);
	return 0;
}

