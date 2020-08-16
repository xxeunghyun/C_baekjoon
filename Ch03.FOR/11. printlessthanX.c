/*정수 N개로 이루어진 수열 A와 정수 X가 주어진다. 
이때, A에서 X보다 작은 수를 모두 출력하는 프로그램을 작성하시오.
수열 A의 원소 = n개, 임의의 수 x 입력*/

#include <stdio.h>

int main() {

	int x, n, a[100];

	printf("N과 X의 값을 입력하시오. \n");
	scanf("%d %d", &n, &x);



	for (int i = 0; i < n; i++)
	{
		printf("수열 a의 원소들 값을 입력하시오.\n"); //직접 수열 원소 입력 받아야 함
		scanf("%d", &a[i]);

		if (a[i] < x)
		{
			printf("%d\t", a[i]);
		}
	}

	return 0;
}
