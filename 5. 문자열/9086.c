#include <stdio.h>

int main() {
    int T; // �׽�Ʈ ���̽��� ���� ������ ����
    char str[1001]; // �� ���ڿ��� ������ �迭, �ִ� 1000�� + �� ���� ����

    scanf("%d", &T);

    // �׽�Ʈ ���̽� ó��
    for (int i = 0; i < T; i++) {
        scanf("%s", str);

        // ù ����, ������ ���� ���
        printf("%c%c\n", str[0], str[strlen(str) - 1]);
    }
    return 0;
}