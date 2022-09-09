#include<stdio.h>
#include<stdlib.h>

int main(){
    int ge, shi, bai;
    for (int i=1; i<5; i++){ //个位数
        for (int j=1; j<5; j++){ //十位数字
            for (int k=1; k<5; k++){ //百位数字
                if ( i != k && i !=j && j!=k){
                    printf("%d, %d, %d\n", i, j, k);
                }
            }            
        }
    }
    system("pause");
    return 0;
}