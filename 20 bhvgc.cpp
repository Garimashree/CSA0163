#include<stdio.h>
#include<conio.h>
int main() {
	int i;
	int a;
	int sum=0;
	int n;
	printf("enter the number of numberes to find sum:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("enter the number :");
		scanf("%d",&a);
		sum=sum+a;
	}
printf("the sum is %d",sum);
}
