#include <iostream>
using namespace std;

// Ʋ�� ���� : 4�� ����� �� ��� ó�� �� �ϰ� 4�� ��� �ƴ� �� ������
// else �Ἥ ������ ����
int main(int argc, char const* argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int y;
    cin >> y;

    if (y % 4 == 0) {
        if (y % 400 == 0) {
            cout << 1;
        }
        else if (y % 100 != 0)
        {
            cout << 1;
        }
        else
            cout << 0;
    }

    else 
        cout << 0;

    return 0;
}