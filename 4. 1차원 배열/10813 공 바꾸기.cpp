#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	// �ʱ� �ٱ��� ����
	int arr[101];
	for (int i = 1; i <= n; i++) {
		arr[i] = i;
	}

	// ��ȯ �۾�
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		// �� ��ȣ ��ȯ
		int temp = arr[a];
		arr[a] = arr[b];
		arr[b] = temp;
	}

	// ��� ���
	for (int i = 1; i <= n; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";

	return 0;
}