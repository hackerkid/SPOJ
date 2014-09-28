#include <iostream>

using namespace std;

int main()
{
	int a[150][150];
	int t;
	int x;
	int y;
	int z;
	int temp;
	int m;
	int n;
	
	cin >> t;

	for (int k = 0; k < t; k++) {
		cin >> m;
		cin >> n;

		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				cin >> a[i][j];
			}

		}

		for (int i = m-2; i >=0 ; i--) {
			for (int j = n-1; j >=0; j--) {
				x = -1;
				y = -1;
				z = -1;

				if(j+1 < n) {
					x = a[i+1][j+1];
				}

				if(j-1 >= 0) {
					y = a[i+1][j-1];
				}

				z = a[i+1][j];

				a[i][j] = max(max(x,y), z) + a[i][j];
			}

		}

		temp = -1;
		for (int i = 0; i < n; i++) {
			if(temp < a[0][i]) {
				temp = a[0][i];
			}

		}

		cout << temp<<endl;
	}


}



