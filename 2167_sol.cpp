#include <iostream>
using namespace std;

int main() {
	int n, m, k, i, j, x, y = 0;
	cin >> n >> m;
	int ** arr = new int *[n];
	for (int a = 0; a < n; a++) {
		arr[a]= new int[m];
	}
	for (int a = 0; a < n; a++) {
		for (int b = 0; b < m; b++) {
			cin >> arr[a][b];
		}
	}
	cin >> k;
	int sum = 0;
	for (int t =0; t < k; t++) {
		cin >> i >> j >> x >> y;
		for (int p = i-1 ; p < x; p++) {
			for (int o = j-1 ; o < y; o++)
			{
				sum += arr[p][o];
			}
		}
		cout << sum <<endl;
		sum = 0;
	}
}
