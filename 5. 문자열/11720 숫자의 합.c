#include <stdio.h>

int main(void)
{
	// N�� ���� �޾ƿ��ϱ� �ʱ�ȭ ���ص���
	int N = 0;
	char numbers[101];

	scanf("%d", &N);
	scanf("%s", &numbers);

	// sum�� ���� �޾ƿ��°� �ƴ϶� �����ϴ°Ŷ� �ʱ�ȭ �ؾ���
	int sum = 0;
	for (int i = 0; i < N; i++) {
		sum += numbers[i] - '0';
	}

	printf("%d\n", sum);

	return 0;
}