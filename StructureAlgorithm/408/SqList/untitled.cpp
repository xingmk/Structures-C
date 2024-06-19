#include<bits/stdc++.h>
using namespace std;

int main() {
	int n[10];
    
	for (int i=0; i<10; i++)
	{
		n[ i ] = i + 100;
	}
	
	for (int j=0; j<10; j++)
	{
		printf("Element[%d] = %d\n", j, n[j] );
	}
	
	return 0;
}
