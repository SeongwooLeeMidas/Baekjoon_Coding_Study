#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b;
	cin >> a >> b;

	// ��� �ϸ� 3, 8, 5�� ����� �� ������ ����
	cout << a * (b % 10) << "\n";
	cout << a * ((b % 100) / 10) << "\n";
	cout << a * (b / 100) << "\n";
	cout << a * b;

	return 0;
}