#include <stdio.h> 
int main()
{
    int T,i;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        int a,b,re;
        scanf("%d %d",&a,&b);
        re=a%b;
        printf("%d\n",re);
    }
    return 0;
}