#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int num[9];
	for (int i = 0; i < 9; i++) {
		cin >> num[i];
	}

	int maxValue = -1; // �ִ밪
	int maxValueIndex; // �ִ밪 ��ġ
	
	for (int i = 0; i < 9; i++) {
		if (num[i] > maxValue) {
			maxValue = num[i];
			maxValueIndex = i;
		}
	}
	// ���⼭ �Ǽ��Ѱ� maxvalue�� �ε��� �Ѵ� ����޴µ�
	// �ε����� 0���� �����ؼ� �ϳ� ��������ϴ°� �����
	cout << maxValue << "\n";

	cout << maxValueIndex + 1;
	return 0;
}