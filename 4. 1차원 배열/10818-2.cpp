#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const* argv[])
{
	int N;
	cin >> N;

	int arr[1000001];

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + N); // ���� ����, �� �� �ּ� �ǵ� �ִ�
	
	cout << arr[0] << " " << arr[N-1];
	return 0;
}