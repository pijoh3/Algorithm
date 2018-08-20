//실패 코드 -> 공백도 문자열로 인식하는 문제 발생!!!
/*#include <stdio.h>

int main()
{
	int i, j, cnt;
	char message[100][100];

	cnt = sizeof(message) / sizeof(message[0]);
	
	for (i = 0; i < cnt; i++)
	{
		scanf("%s", message[i]); 
		printf("%s\n", message[i]);
	}

	return 0;
}*/

#include <stdio.h>
int main(int argc, const char * argv[])
{
	char a[200];
	while (scanf("%[^\n]s", a) != EOF)
	{
		getchar();
		printf("%s\n", a);
	}
}
