#include<stdio.h>
int main()
{
	int i;
	printf("Natural numbers upto 50 with a difference of 2: ");
	for(i = 1; i <= 50; i = i + 2) {
		printf("%d ", i);
	}
	return 0;
}

