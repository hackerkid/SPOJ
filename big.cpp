#include <iostream>

using namespace std;

int main()
{

	long long int a[] = {2,4,9,16,25,64,289,729,1681,2401,3481,4096,5041,7921,10201,15625,17161,27889,28561,29929,65536,83521,85849,146689,262144,279841,458329,491401,531441,552049,579121,597529,683929,703921,707281,734449,829921,-1};

	int t;
	int x;
	int y;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> x;
		cin >> y;
		int count = 0;

		for (int j = 0; a[j] != -1; j++) {
			if(a[j] >= x and a[j] <= y) {
				count++;
			}

			if(a[j] > y) {
				break;
			}
		}

		cout << count <<endl;
	}

}

