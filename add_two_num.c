#include <stdio.h> 

int main() {
	int T,i;
	scanf("%d", &T);
	for(i=0;i<T;i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);

		int ans = a + b;
		printf("%d\n", ans);
	}

	return 0;
}