/*
문제 2 (난이도 : 中上)
위와 동일한 형태를 취하되, 역 삼각형을 출력한다. 아래는 N = 3 일 때의 출력 예시 이다.
*/
#include <stdio.h>

int main()
{
	int n, i, j;
	scanf("%d",&n);

	for (i = 0 ; i < n; i++)
	{
		for( j = 0; j < i ; j++)
			printf(" ");
		for( j = 0 ; j < 2*(n-i) - 1 ; j++)
		      	printf("*");
		
		printf("\n");

	}			

	return 0;
}
