#include <iostream>
#include <string.h>

using namespace std;
char a[5005];
int n;
long long ans[5005];
bool vis[5005];
long long explore(int i)
{
	long long x;
	long long y;

	if(i == n) {
		return 1;
	}

	if(vis[i] != 0) {
		return ans[i];
	}

	vis[i] = 1;
	y = 0;
	x = 0;
	
	if(a[i] - '0' > 0) {
		x = explore(i+1);
	
		if(i+1 < n and ((a[i] - '0') * 10 + (a[i+1] - '0')) <= 26) {
			y = explore(i+2);
		}
		
	}
	
	ans[i] = x + y;
	return x + y;

}
		


int main()
{

	cin >> a;
	
	while(a[0] != '0') {
		n = strlen(a);
		memset(vis, 0, sizeof(vis));
		cout << explore(0) << endl;
		cin >> a;
	}

}

