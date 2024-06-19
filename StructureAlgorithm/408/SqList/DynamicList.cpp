#include <bits/stdc++.h>
#define InitSize 10 // defalut length
using namespace std;
typedef int ElemType;

// Contruct (dynamic)
typedef struct {
	ElemType *data;
	int MaxSize;
	int Length;
}SqList;

// Initialization
void InitList(SqList &L) {
	L.data = (ElemType *)malloc(InitSize * sizeof(ElemType));
	L.Length = 0;
	L.MaxSize = InitSize;
}

void IncreaseSize(SqList &L, int needLength) {
	int *tmp = L.data;
	L.data = (ElemType *)malloc((L.MaxSize + needLength) * sizeof(ElemType));
	for (int i=0; i<L.MaxSize; i++) {
		L.data[i] = tmp[i];
	};	
	L.MaxSize += needLength;
	int j = L.MaxSize-1;
	while(needLength--){
		L.data[j--] = 0;
	}
	free(tmp);
}

// Print Values
void PrintValues (SqList &L){
	for (int i=0; i<L.MaxSize; i++) {
		cout << L.data[i] << endl;
	}
	cout << "MaxSize" << "=" << L.MaxSize << endl;
}

int main() {
	SqList L;
	InitList(L);
	for (int i=0; i<InitSize; i++){
		L.data[i] = 3;
	}
	// PrintValues(L);
	
	IncreaseSize(L, 5);
	//for (int i=(L.MaxSize - InitSize); i<L.MaxSize; i++){
	//	L.data[i] = 1;
	//}
	PrintValues(L);
	return 0;
}
