#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
    ios_base::sync_with_stdio(false);

    int a, b, c;
    cin >> a >> b >> c;

    // ��� ������ �ٸ� ���
    if (a != b && a != c && b != c) {
        int max;
        if (a > b) {
            if (c > a) {
                max = c;
            }
            else {
                max = a;
            }
        }
        else {
            if (c > b) {
                max = c;
            }
            else {
                max = b;
            }
        }
        cout << max * 100;
    }

    // �� ������ ��ĥ ��
    else {
        if (a == b && a == c) {
            cout << 10000 + a * 1000;
        }
        // b�� c�� ���� ��
        else {
            // a�� bȤ�� c���� ���� ��
            if (a == b || a == c) {
                cout << 1000 + a * 100;
            }

            // b�� c�� ���� ���
            else {
                cout << 1000 + b * 100;
            }
        }
    }
    return 0;
}