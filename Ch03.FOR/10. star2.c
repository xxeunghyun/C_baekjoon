#include <stdio.h>

int main() {

	int n;
	int i, j;
	printf("n의 값을 입력해주세요.\n");
	scanf("%d", &n);

	for (i = 0; i < n ; i++)
	{
		for (j = 0; j < 5-i; j++)
		{
			printf(" ");
		}

		for (j = i; j >= 0; j--)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}
