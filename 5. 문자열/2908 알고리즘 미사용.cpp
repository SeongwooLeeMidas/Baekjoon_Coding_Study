#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;

    // ���ڿ� A�� �Ųٷ� ������
    string reversedA;
    for (int i = A.length() - 1; i >= 0; i--) {
        reversedA += A[i];
    }

    // ���ڿ� B�� �Ųٷ� ������
    string reversedB;
    for (int i = B.length() - 1; i >= 0; i--) {
        reversedB += B[i];
    }

    // �������� ���ڿ��� ������ ��ȯ
    int reversedAInt = stoi(reversedA);
    int reversedBInt = stoi(reversedB);

    // �� ���� ���Ͽ� ū ���� ���
    cout << (reversedAInt > reversedBInt ? reversedAInt : reversedBInt) << endl;

    return 0;
}
