#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverseString(char* str) {
	int length = strlen(str);
	// ���ݸ� �ݺ��ϸ� �� ��ȯ�Ǿ�����
	for (int i = 0; i < length / 2; i++) {
		char temp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = temp;
	}
}

int main()
{
	char A[4], B[4];

	scanf("%s %s", A, B);

	// ������
	reverseString(A);
	reverseString(B);

	// ������ ��ȯ
	int reversedA = atoi(A);
	int reversedB = atoi(B);

	if (reversedA > reversedB) {
		printf("%d\n", reversedA);
	}
	else {
		printf("%d\n", reversedB);
	}
	return 0;
}