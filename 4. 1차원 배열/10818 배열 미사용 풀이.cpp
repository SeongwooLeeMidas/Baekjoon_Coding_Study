#include <iostream>
using namespace std;

int main(int argc, const char* argv[]) 
{
	ios_base::sync_with_stdio(0);

	// �ʱⰪ�� ������ minValue�� maxValue�� �ֱ� ���ؼ�
	// �̷��� �������ָ� � ���� �鸸1���ٴ� �۰�, � ���� �鸸1���ٴ� ũ��
	int minValue = 1000001;
	int maxValue = -1000001;

	int N;
	cin >> N;

	int inputValue;
	for (int i = 0; i < N; i++) {
		cin >> inputValue;

		// �Է����� ���� ���� minValue���� �۴ٸ� min�� inputValue�� ����
		if (inputValue < minValue) {
			minValue = inputValue;
		}
		// �Է����� ���� ���� maxValue���� ũ�ٸ� max�� inputValue�� ����
		if (inputValue > maxValue) {
			maxValue = inputValue;
		}
	}

	cout << minValue << " " << maxValue;
	return 0;
}