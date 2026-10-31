#include<stdio.h>

void change(int *b);
int  main()
{
	int i;
	int a[5] = {1,3,5,7,9};
	int* p = &i;
   
	change(a);
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	} 
	
	return 0;
}

void change(int *b )
{
	int i;
	for (i = 0;i < 5;i++)
	{
		b[i] = b[i] * 2;
	}
}
