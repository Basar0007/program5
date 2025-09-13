#include<stdio.h>

void swap(int*a,int*b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void selectionsort(int arr[],int n)
{
	int i,j,minindex;
	for(i = 0; i < n - 1; i++)
	{
		minindex = i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[minindex])
			{
				minindex=j;
			}
		}
		swap(&arr[minindex],&arr[i]);
	}
}
void printArray(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\n\n",arr[i]);
	}
}
int main()
{
	int i,n;
	printf("enter no of element:");
	scanf("%d",&n);
	
	int arr[n];
	printf("enter %d element\n");
	for(i=0;i<n;i++)
	{
		printf("enter the no=");
		scanf("%d",&arr[n]);
	}
	selectionsort(arr,n);
	printf("sorted arr");
	printArray(arr,n);
	return 0;
}
