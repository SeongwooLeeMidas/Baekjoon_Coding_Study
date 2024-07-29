#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	// �� ���, ���� ��� ���� �ٽ� �� ����ϵ��� 3�� �����ش�
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		for (int j = 1; j <= 2*(n - i); j++) {
			cout << " ";
		}
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << "\n";
	}

	// ���� �Ʒ��� �������� ������ ���� ������ �Ʒ� ����ϰ� 3�� ���� �����ش�.
	// ���⼱ ������ �Ȼ������� n-1������ �ؾ��Ѵ�. ������ ���� �ʿ�����ϱ�
	// ���� ������� ������ ������ �� ����ٰ� ������
	for (int i = 1; i <= n-1; i++) {
		for (int j = 1; j <= n - i; j++) {
			cout << "*";
		}
		for (int j = 1; j <= 2 * i; j++) {
			cout << " ";
		}
		for (int j = 1; j <= n - i; j++) {
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}