#include <iostream>
int a[3][200];
using namespace std;

int main()
{

	int n;
	int maxy;
	int val[200];
	int size[200];

	cin >> maxy;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> size[i];
		cin >> val[i];
	}


	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= maxy; j++) {
			
			if(i -1 < 0) {
				a[1][j] = 0;
			}
			
			if(size[i] > j) {
				a[1][j] = a[0][j];
			}

			else {
				a[1][j] = max(val[i] + a[0][j - size[i]], a[0][j]);
			}


		}

		for (int j = 0; j < maxy; j++) {
			swap(a[0][i], a[1][i]);
		}


	}


	cout << a[1][maxy]<<endl;

}
	
