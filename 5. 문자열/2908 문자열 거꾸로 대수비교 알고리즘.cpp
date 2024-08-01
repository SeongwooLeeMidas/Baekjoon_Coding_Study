#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string A, B;
	cin >> A >> B;

	reverse(A.begin(), A.end());
	reverse(B.begin(), B.end());

	// C++������ stoi�� ����, C�� atoi�� ����
	int reversedA = stoi(A);
	int reversedB = stoi(B);

	cout << max(reversedA, reversedB) << "\n";

	return 0;
}