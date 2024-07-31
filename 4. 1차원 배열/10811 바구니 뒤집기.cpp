#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	// �ٱ��� ��ȣ�� 1���� N���� �Է�
	int baskets[101];
	for (int i = 1; i <= N; i++) {
		baskets[i] = i;
	}

	for (int i = 0; i < M; i++) {
		int start, end;
		cin >> start >> end;

		// �迭 �Ϻθ� �������� ��ȯ
		while (start < end) {
			int temp = baskets[start];
			baskets[start] = baskets[end];
			baskets[end] = temp;

			start++;
			end--;
		}
	}

	for (int i = 1; i <= N; i++) {
		cout << baskets[i] << " ";
	}
	cout << "\n";

	return 0;
}