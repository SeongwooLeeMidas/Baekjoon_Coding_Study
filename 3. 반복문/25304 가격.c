#include <stdio.h>

int main(void)
{
	int a, b, N;
	int X = 0;

	scanf("%d %d", &X, &N);
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &a, &b);
		X = X - (a * b);
	}

	// else�� �ص� �ǰ� else if�� �ص� �ȴ�
	if (X == 0)
		printf("Yes");
	else
		printf("No");
	//else if (X != 0)
	//	printf("No");
	return 0;
}