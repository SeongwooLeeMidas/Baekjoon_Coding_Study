#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int n, v;
	int arr[101];

	cin >> n; // ������ ���� �Է¹���

	for (int i = 0; i < n; i++) {
		cin >> arr[i]; // �迭�� ������ �Է� ����
	}
	cin >> v; // ã������ ������ �Է¹���

	int count = 0; // v�� �迭�� ��Ҷ� ���ؼ� ������ ī��Ʈ ����
	for (int i = 0; i < n; i++) {
		if (arr[i] == v)
			count++;
	}
	cout << count; // ������ ī��Ʈ�� ���
}