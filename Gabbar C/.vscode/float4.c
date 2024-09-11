#include<stdio.h>
void main()
{
	float a,b ,sum;
	printf("This is addition program : \n");
	printf("Enter the first value = ");
	scanf("%f",&a);
	
	printf("Enter the second  value = ");
	scanf("%f",&b);
	
	printf("value of a = %.2f\n",a);
	printf("value of b = %.2f\n",b);
	
	sum = a+b;
	
	printf(" sum of %.2f and %.2f = %.2f",a,b, sum);

}
