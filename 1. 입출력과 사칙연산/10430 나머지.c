#include <stdio.h>

int main(void)
{
	int A, B, C;

	scanf("%d %d %d", &A, &B, &C);
	// Ʋ�ȴ� ���� : scanf�� printf�� ���� ���� ����
	// scanf�� %d�� �ް�, �� ������ �ص� �����ڷ� �ϴ°� �˾Ҵµ�
	// printf �� �� ���� %d\n���� ����ϰ�, �ڿ� ����Ұ� ��ǥ�� ���ִ°� ��������
	printf("%d\n", (A + B) % C);
	printf("%d\n", ((A % C) + (B % C)) % C);
	printf("%d\n", (A * B) % C);
	printf("%d\n", ((A % C) * (B % C)) % C);

	return 0;
}