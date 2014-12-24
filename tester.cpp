#include <iostream>
using namespace std;
int a[2005][2005];

int main()
{

	int n;
	int maxy;
	int val[2002];
	int size[2002];

	cin >> maxy;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> size[i];
		cin >> val[i];
	}


	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= maxy; j++) {
			
			if(i == 0 or j == 0 ) {
				a[i][j] = 0;
			}

			else {

			
			if(size[i-1] > j) {
				a[i][j] = a[i-1][j];
			}

			else {
				a[i][j] = max(val[i-1] + a[i-1][j - size[i-1]], a[i-1][j]);
			}

			}


		}

	




	}


	cout << a[n][maxy]<<endl;

}
	
