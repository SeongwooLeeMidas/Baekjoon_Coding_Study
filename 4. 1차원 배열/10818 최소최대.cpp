#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const* argv[])
{
	ios_base::sync_with_stdio(false); // ���� ���׿��� �ð� 3�� ���̳���?

	int N;
	cin >> N;

	int arr[1000001];

	// �����غ��� �Է��� �� ���� ��¼�� �޴µ� ������ ���� ���� ������
	// cin���� >> " " �̷��� ���ϴϱ� ��뤤��
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + N); // 0 ~ N-1 ���� ����
	
	cout << arr[0] << " " << arr[N - 1];

	return 0;
}