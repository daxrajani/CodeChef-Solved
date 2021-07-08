#include <stdio.h>

int main(void) {
	int T;
	scanf("%d", &T);
	while(T--)
	{
		int a,m,sum=0;
		scanf("%d", &a);
        while(a>0)    
        {  
            
            m=a%10;    
            sum=sum+m;    
            a=a/10;    
        }
        printf("%d\n",sum); 
	}
	return 0;
}

