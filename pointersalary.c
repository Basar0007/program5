#include<stdio.h>
	float markfunc(float*jeel,float a)
	{
		*jeel=*jeel+a;
	}
	float main()
	{
		float mark=0,imark=0;
		printf("enter mark=");
		scanf("%f",&mark);
		printf("enter imark=");
		scanf("%f",&imark);
		markfunc(&mark,imark);
		printf(" final enter mark=%f",mark);
	return 0;
	}
