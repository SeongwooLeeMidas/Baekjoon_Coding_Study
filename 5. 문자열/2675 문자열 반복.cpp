#include <iostream>
using namespace std;

int main(void)
{
	string S;
	int T;
	cin >> T;
	
	int R;
	for (int i = 0; i < T; i++) {
		cin >> R >> S;
	}
	// �� for�� ��� while (T--) ����

	string P = ""; // �� ���ڿ� P

	// ���ڿ� S�� �� ���� �ݺ�
	// ���� ��� for �� C+11 �̻�
	for (char c : S) {
		// ���� c�� R�� �ݺ��� P�� �߰�
		for (int i = 0; i < R; i++) {
			P += c;
		}
	}
	cout << P << "\n";
	
}