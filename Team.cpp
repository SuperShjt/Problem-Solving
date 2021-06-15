#include <iostream>
using namespace std;
int main() {

	int n, m = 3, count = 0, output = 0;
	cin >> n;
	int* arr = new int[n * m];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> *(arr + i * m + j);
			if (*(arr + i * m + j) == 1) {
				count++;
			}
		}
		if (count >= 2) {
			output++;
			count = 0;

		}
		else
		{
			count = 0;
		}
	}
	cout << output;
}