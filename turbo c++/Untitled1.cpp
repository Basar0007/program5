#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,temp;
	printf("\n enter the value of a=");
	scanf("%d",&a);
	printf("\n enter the value of b=");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("\n after :a=%d and b=%d",a,b);
	return 0;
}
