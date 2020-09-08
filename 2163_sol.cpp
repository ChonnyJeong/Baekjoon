#include <iostream>
using namespace std;


int num = 0;

void cut(int n, int m) {
	if ((n < 2) && (m < 2)) { return; }
	int largerNum = 0;
	int smallerNum = 0;
	if (n > m) { largerNum = n; smallerNum = m;}
	else { largerNum = m; smallerNum = n; }
	int half = largerNum / 2;
	int ohalf = largerNum - half;
	num++;
	cut(half, smallerNum);
	cut(ohalf, smallerNum);
}

int main() {
	int n = 0, m=0;
	cin >> n >> m;
	cut(n, m);
	cout << num;
}
