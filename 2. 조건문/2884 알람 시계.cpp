#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
    int h, m;

    cin >> h >> m;

    // �Է¹��� ���� 45�к��� ������
    if (m < 45) {
        h--;
        m = 60 - (45 - m);

        // �ð� ������ �Ǹ� 23�÷� �ٲ��ֱ�
        if (h < 0) {
            h = 23;
        }
    }

    else {
        m = m - 45;
    }

    cout << h << " " << m;

    return 0;
}