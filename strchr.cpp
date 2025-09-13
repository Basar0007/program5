#include<stdio.h>
#include<string.h>
int main()
{
	char str[] = "this is a sample string";
	char* pch;
	printf("looking for the's' character in \"%s\"...\n",str);
	pch=strchr (str,'s');
	while (pch!=NULL)
	{
		printf ("found at %d\n",pch-str+1);
		pch=strchr(pch+1,'s');
	}
	return 0;
}
