#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string S;
	int T;
	cin >> T;

	int R;
	for (int i = 0; i < T; i++) {
		cin >> R >> S;
		// �� for�� ��� while (T--) ����

		string P = ""; // �� ���ڿ� P

		// ���ڿ� S�� �� ���� �ݺ�
		for (int i = 0; i < S.length(); i++) {
			char c = S[i];
			// ���� c�� R�� �ݺ��� P�� �߰�
			for (int i = 0; i < R; i++) { // j�� ���� ���ϰ� �����ص� ��
				P += c;
			}
		}
		cout << P << "\n";
	}
}