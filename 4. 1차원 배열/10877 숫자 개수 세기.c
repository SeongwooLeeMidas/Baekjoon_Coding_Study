#include <stdio.h>

// �򰥸� ���� ���� �Է� �� 3���� �� �Է��� ���̶�� �ν� ����
// ���� ��� ���� �Ŷ� �����ߴµ� �Է��� 3���̴� 3���� scanf ����� �ʿ���
// 11�� N, 2�� v, �߰��� ���� ���� for�� ������ �ذ�, for�� ������ ��ü�� �̸� ������ �迭
// �迭�� ũ��� �������� �Ǵ�
int main(void)
{
	int N, v;
	int arr[101];

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	scanf("%d", &v);

	int count = 0;
	for (int i = 0; i < N; i++) {
		if (arr[i] == v)
			count++;
	}
	printf("%d", count);

	return 0;
}
