/*첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제*/

#include <stdio.h>

int main() {

	int n;
	int i, j;
	printf("n의 값을 입력해주세요.\n");
	scanf("%d", &n);

	for (i = 1; i < n+1 ; i++)
	{
		for (j = 1; j < i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
