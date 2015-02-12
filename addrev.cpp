#include <iostream>
#include <math.h>
using namespace std;

long long rev(long long x)
{

	int n;
	int i;
	long long temp;
	long long ans;
	int t;

	for (i = 0, temp = x; temp; i++, temp = temp /10);
	ans = 0;

	while(x) {
		t = x % 10;
		x = x/10;
		ans += pow(10, i-1) * t;
		i--;
	}

	return ans;

}

int main()
{

	long long x;
	int t;
	long long y;
	long long ans;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> x;
		cin >> y;

		x = rev(x);
		y = rev(y);

		ans = x + y;
		ans = rev(ans);

		cout << ans << endl;
	}

}

