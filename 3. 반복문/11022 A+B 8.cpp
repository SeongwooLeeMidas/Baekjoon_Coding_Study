#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
    ios_base::sync_with_stdio(false); // ǥ�� ����� ����ȭ ����
    cin.tie(NULL); // ����� ���ΰ� ����

    int T;
    cin >> T;

    for (int i = 1; i <= T; i++) {
        int a, b;
        cin >> a >> b;
        cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b << "\n";
    }
    return 0;
}