#include <stdio.h>
#include <string.h>

int main(void)
{
	char word[101];
	// ���ڿ� �迭�� & ������ �ʿ����, ���� 2���� �迭 �ּ�
	scanf("%s", word);

	// strlen�� �� ���� ������ ���� �� ���� ��ȯ
	int length = strlen(word);

	printf("%d\n", length);

	return 0;
}