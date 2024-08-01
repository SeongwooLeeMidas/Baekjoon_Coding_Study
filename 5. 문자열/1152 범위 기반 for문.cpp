#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    int count = 0;
    bool inWord = false;

    if (str.empty()) {
        cout << "0" << "\n";
        return 0;
    }

    for (char c : str) {
        if (c == ' ') {
            if (inWord) {
                count++;
                inWord = false;
            }
        }
        else {
            inWord = true;
        }
    }

    // ������ �ܾ ���ڿ� ������ �̾��� ��� ó��
    if (inWord) {
        count++;
    }

    cout << count << "\n";
    return 0;
}
