#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	// ������ ���� N�� ã�� ���� v�� ����
	int N, v;
	// �ִ� 100���� ������ ������ �迭 arr�� �������ش�
	int arr[101];

	// ������ ������ �Է¹ް�
	cin >> N;

	// �� N���� ������ �迭�� �Է¹ޱ�
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	// �� ������ ã������ ���� v �Է¹ޱ�
	cin >> v;

	// ã������ ���� v�� ���� �����ϴµ� ��� ����?
	// �� count �ᰡ���� �߰��Ҷ����� �÷��ָ� �ǰڴ�
	int count = 0;
	for (int i = 0; i < N; i++) {
		if (arr[i] == v) {
			count++;
		}
	}
	cout << count;

	return 0;
}