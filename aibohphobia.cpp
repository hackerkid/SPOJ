#include <iostream>

using namespace std;
string reverse(string x)
{	
	for (int i = 0, j = x.length()-1; i < j; i++, j--) {
		swap(x[j], x[i]);
	}

	return x;
}

int a[2][6300];

int mains()
{

	long long n;
	string x;
	string y;
	cin >> x;

	y = reverse(x);
	
	n = x.length();



	for (int i = n; i >=0 ; i--) {
		for (int j = n; j >= 0; j--) {
			if(i == n or j == n) {
				a[0][j] = 0;
				continue;
			}

			if(x[i] == y[j]) {
				a[0][j] = 1 + a[1][j+1];
			}

			else {
				a[0][j] = max(a[1][j], a[0][j+1]);
			}

		}
		for (int p = 0; p <= n; p++) {
			a[1][p] = a[0][p];
		}

	}
	cout << n - a[0][0]<<endl;


}


int main()
{

	long long t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		mains();
	}


}

	
