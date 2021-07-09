#include <stdio.h>

int main(void) {
	int T,i,j;
	scanf("%d",&T);
	while(T--)
	{
	    int a,f,l,sum=0;
		scanf("%d", &a);
        l=a%10;
        while(a>= 10)
        {
        a = a / 10;
        }
        f = a;
        sum=l+f;
        printf("%d\n",sum); 
	}
	return 0;
}

