#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// ó���� Ʋ�� ���� : 50�� �� �Ѵµ��� ���������� name[50]���� �Ἥ
	// 51�� ����� �� NULL ���ڱ��� �����ؼ�
	char name[51];
	cin >> name;

	cout << name << "??!";
	
	return 0;
}