#include <iostream>
using namespace std;

// 10952�� �ٸ� ���� �� ���� �Է¹޴��� �� �� ���ٴ� ��
// �Է� ���ϸ� ������ �Է��� ���� ��, �� �̻� ���� �� �ִ� �����Ͱ� ���� ���
// ������ ���� �� �̸� EOF��� �Ѵ�
// ������ ������ �о��ٰ� ���� �ƴ϶� �� �а� �� ������ ���� �� EOF

int main(int argc, char const* argv[])
{
	int a, b;
	while (!(cin >> a >> b).eof()) { // cin>>a>>b.eof ������� ���� �� eof ���¸� �˻��ϵ��� ����
		cout << a + b << "\n";
	}
	return 0;
}

//#include <cstdio>
//
//int main(int argc, const char* argv[]) {
//
//	int a, b;
//
//	// �Ǵ� scanf("%d %d", &a, &b) == 2 �ε� ����
//	while (scanf("%d %d", &a, &b) != -1) {
//		printf("%d\n", a + b);
//	}
//
//	return 0;
//}