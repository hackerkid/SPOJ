#include <iostream>

using namespace std;

string rev(string x)
{
	int n;
	n = x.length();

	for (int i = 0, j = n-1; i < j; i++, j--) {
		swap(x[i], x[j]);
	}

	return x;

}

string add(string x, string y)
{
	
	x = rev(x);
	y = rev(y);
	
	int n;
	int m;
	int c;
	int temp;
	string wow;

	c = 0;
	char ans[5000];

	n = x.length();
	m = y.length();

	if(n < m) {
		swap(n, m);
		swap(x, y);
	}

	for (int i = 0; i < m; i++) {
		temp = (x[i] - '0') + (y[i] - '0') + c;
		c = temp / 10;
		ans[i] = (temp % 10) + '0';
	}

	for (int i = m; i < n; i++) {
		temp = x[i] - '0' + c;
		c = temp / 10;
		ans[i] = (temp % 10) + '0';
	}

	if(c) {
		ans[n] = c + '0';
		ans[n+1] = '\0';
	}

	else {
		ans[n] = '\0';
	}

	wow = ans;
	wow = rev(wow);
	return wow;

}

long long value(string x)
{	
	long long sum;
	sum = 0;
	for (int i = 1, j = x.length() - 1; j >= 0; i = i * 10, j--) {
		sum += (x[j] - '0') * i;
	}

	return sum;

}

long long sum(string x)
{	
	long long sum;
	sum = 0;
	for (int i = 0; i < x.length(); i++) {
		sum += x[i] - '0';
	}

	return sum;


}

string ans(string x, string n)
{
	string temp;
//	cout << x << endl;

	if(sum(x) == value(n)) {
		return x;
	}

	else {
		temp = add(x, n);
		return ans(temp, n);
	}

}
		

int main()
{

	long long t;
	string x;
	string num;
	int n;
	

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> num;
		x = "9999900";
//		num = x;
		while(sum(x) != value(num)) {
			x = add(x, num);
		}

		cout << x <<endl;

	}

}




