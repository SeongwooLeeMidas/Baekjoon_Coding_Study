#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[101];
	scanf("%s", s);

	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	// ù ���� ��ġ Ž��
	for (int i = 0; i < 26; i++) {
		// char* pos(���ڿ�, ã�� ����), pos�� position�� ����
		// strchr�� ��ȯ�ϴ� ������ pos�� ���ڿ� ������ Ư�� ������ �ּҸ� ����Ŵ
		// s�� ���ڿ��� ���� �ּ��̹Ƿ� pos���� ����� �� ��° ��ġ���� �� �� ����
		char* pos = strchr(s, alphabet[i]);

		// �� ��ȯ ���ִ°� ���, ���ص� ����
		if (pos != NULL) {
			printf("%ld", (long)(pos - s));
		}
		else {
			printf("-1");
		}

		if (i < 25) {
			printf(" ");
		}

	}
	printf("\n");

	return 0;
}