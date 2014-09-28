#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool wow(int a, int b)
{
	if(a > b) {
		return 1;
	}

	return 0;
}

int main()
{

	long long n;
	long long m;

	long long i;
	long long j;

	long long x;
	long long y;

	long long t;
	long long temp;
	long long sum;

	vector <int> a;
	vector <int> b;

	cin >> t;

	for (int k = 0; k < t; k++) {
		cin >> n;
		cin >> m;

		vector <int> to;
		swap(a, to);
		vector <int> too;
		swap(b, too);

		n--;
		m--;

		for (int p = 0; p < n; p++) {
			cin >> temp;
			a.push_back(temp);
		}


		for (int p = 0; p < m; p++) {
			cin >> temp;
			b.push_back(temp);
		}

		x = 1;
		y = 1;
		sum = 0;

		sort(a.begin(), a.end(), wow);
		sort(b.begin(), b.end(), wow);

		i = 0;
		j = 0;

		while(i < n or j < m) {
		
			if(i >= n and j < m) {
				sum += b[j] * x;
				j++;
				y++;;
				continue;
			}

			if(j >= m and i < n) {
				sum += a[i] * y;
				i++;
				x++;
				continue;
			}



	
			if(a[i]  > b[j]  ) {
				sum += a[i] * y;
				i++;
				x++;
			}

			else {
				sum += b[j] * x;
				j++;
				y++;;
			}


		}


		cout << sum << endl;
	}



}


