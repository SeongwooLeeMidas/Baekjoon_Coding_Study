#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int n, m;
	cin >> n >> m;

	int arr[101] = { 0, }; // 0���� �迭 �ʱ�ȭ

	int a, b, c;
	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		for (int k = a; k <= b; k++) {
			arr[k] = c;
		}
	}

	for (int i = 1; i <= n; i++) {
		cout << arr[i] << ' ';
	}
}

// ���� ���ð� ���ذ� �ȵż� �Ʒ��� ���� ÷��
// ù ��° ���� �ִ� �۾�
//cin >> a >> b >> c; // ����, a = 2, b = 4, c = 7
//for (int k = a; k <= b; k++) {
//	arr[k] = c;
//}
// �� ���, arr[2] = 7, arr[3] = 7, arr[4] = 7

// �� ��° ���� �ִ� �۾�
//cin >> a >> b >> c; // ����, a = 1, b = 3, c = 5
//for (int k = a; k <= b; k++) {
//	arr[k] = c;
//}
// �� ���, arr[1] = 5, arr[2] = 5, arr[3] = 5
// ������ arr[2]�� arr[3]�� ����ִ� 7�� 5�� ����� �˴ϴ�.