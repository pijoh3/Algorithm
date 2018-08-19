#include <stdio.h>

int main()
{
	int T, i, a, b;
	char comma[20];

	scanf("%d",&T);
	for(i = 0; i < T; i++)
	{
		scanf("%d%[,]%d",&a, &comma, &b);
		printf("%d\n", a+b);
	}

	return 0;
}
