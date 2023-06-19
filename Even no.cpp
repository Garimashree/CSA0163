#include<stdio.h>
int main(){
	int start = 2;
	int end = 20;
	printf("The series of whole numbers excluding zero with a difference of 2 is:\n");
	for (int i = start; i <= end; i += 2){
		printf("%d ", i);
	}
	return 0;
}
