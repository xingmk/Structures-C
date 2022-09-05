#include <studio.h>

int main(){
	int i, j;
	int *reult = NULL;

	for (i=0; i<numsSize-1; i++){
		for (j=i+1; j<numsSize; j++){
			if (nums[i] + nums[j] == target){
				reult = (int*)malloc(sizeof(int)*2);
				reult[0]=i;
				reult[1]=j;
				return reult;
			}
		}
	}
	return reult;
}