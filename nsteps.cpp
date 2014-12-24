#include <iostream>

using namespace std;

int main()
{
	int n;
	int x;
	int y;
	int ans;
	int ok;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x;
		cin >> y;
		ok = 1;

		if(x >= 0 and y >= 0) {
			if(x == y) {
				if(x % 2 == 0) {
					ans = x * 2;
				}

				else {
					ans = x * 2 - 1;
				}

			}

			else {
				if(x == y + 2) {
					if(x % 2 == 0) {
						ans = x * 2 - 2;
					}

					else {
						ans = x * 2 - 3;
					}

				}

				else {
					cout << "No Number\n";
					ok = 0;
				}


			}
			if(ok == 1) {
				cout << ans<<endl;
			}


		}

		else {
			cout << "No Number\n";
		}



	}



}

