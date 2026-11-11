#include<stdio.h>
int main()
{
	double high ;
	double wight;
	printf("hello world!\n");
	printf("请输入身高(米)：");
	scanf("%lf",&high);
	printf("请输入体重(kg)：") ; 
	scanf("%lf",&wight);
	double bmi;
	bmi = wight/(high*high);
	printf("结果BMI=");
	printf("%f",bmi); 
	
	
	

	return 0; 
}
