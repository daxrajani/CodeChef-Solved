#include <stdio.h>
int main(void) {
	int a;
	float b,c;
	scanf("%d\t%f",&a,&b);
	if (a%5==0)
	{
	    if(a+0.50<=b)
	    {
	        c=b-a-0.50;
	        printf("%0.2f",c);
	    }
	    else
	    {
	        printf("%0.2f",b);
	    }
	}
	else
	{
	    printf("%0.2f",b);
	}
	return 0;
}

