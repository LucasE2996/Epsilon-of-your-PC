#include <stdio.h>
#include <stdlib.h>

main()
{
	double x;
	int a;
	a = 0;
	x = 1;
	while ((x+1)>1){
		x=x/2;
		a++;
	}
	printf("x = %.99lf \n\n",2*x);
	printf("Counter = %d \n\n",a);
	system("pause");
}
