#include <iostream>
#include <string.h>
using namespace std;

string split(string x)
{
	string a;
	a.reserve(1000009);	
	a = "";

	int n;

	n = x.size();

	for (int i = 0; i < n/2 + n % 2; i++) {
		a.push_back(x[i]);
	}

	return a;

}


string add(string x)
{
	long int n;
	x.reserve(1000009);	
	char wow;

	n = x.size();
	for (int i = 0, j = n-1; i < j and j >= 0; i++, j--) {
		swap(x[i], x[j]);
	}

	int carry = 1;
	int t;

	for (int i = 0;  i < n; i++) {
		t = (x[i] -'0' + carry) / 10;
		x[i] = (x[i] - '0' + carry) % 10 + '0';
		carry = t;
	}
	
	wow = carry + '0';
	if(carry) {
		x = x + wow;
	}
	
	n = x.size();

	for (int i = 0, j = n-1; i < j and j >=0; i++, j--) {
		swap(x[i], x[j]);
	}
	
	return x;
}

int carrycheck(string x)
{
	long int n;
	x.reserve(1000009);	
	char wow;

	n = x.size();
	for (int i = 0, j = n-1; i < j and j >= 0; i++, j--) {
		swap(x[i], x[j]);
	}

	int carry = 1;
	int t;

	for (int i = 0;  i < n; i++) {
		t = (x[i] -'0' + carry) / 10;
		x[i] = (x[i] - '0' + carry) % 10 + '0';
		carry = t;
	}
	
	wow = carry + '0';
	if(carry) {
		x = x + wow;
	}
	
	n = x.size();

	for (int i = 0, j = n-1; i < j and j >=0; i++, j--) {
		swap(x[i], x[j]);
	}
	
	return carry;
}

string makepali(string x)
{
	int n;
	n = x.size();
	for (int i = 0, j = n-1; i < j; i++, j--) {
		x[j] = x[i];
	}


	return x;

}

int big(string a, string b  ) {

	if(a.size() > b.size()) {
		return 1;
	}

	else {
		if(a.size() < b.size()) {
			return 0;
		}

		else {
			for (int i = 0; i < a.size(); i++) {
				if(a[i] < b[i]) {
					return 0;
				}

				if(a[i] > b[i]) {
					return 1;
				}

			}


			return 1;

		}


	}



}

string makepalibro(string x, int n, int c)
{
	x.reserve(1000009);	
	if(n % 2 == 0) {
		for (int i = n/2-c; i >= 0; i--) {
			x.push_back(x[i]);
		}

	}

	else {
		for (int i = n/2-1; i >=0; i--) {
			x.push_back(x[i]);
		}

	}
	return x;

}

int main()
{
	string a;
	string b;
	string t;
	string aws;

	string temp;
	string incre;
	int boom;
	int tring;
	int pp;
	int i;
	a.reserve(1000009);	
	b.reserve(1000009);	
	t.reserve(1000009);	
	temp.reserve(1000009);	
	incre.reserve(1000009);	
	aws.reserve(1000009);	
	int k;
	

	cin  >> tring;

	for (int i = 0; i < tring; i++) {
	
	cin >> a;
	
	if(a == "9") {
		cout << "11" << endl;
		continue;
	}

	b = makepali(a);

	incre = add(a);
	if(big(b, incre)) {
		cout << b << endl;
	}

	else {
		
		t = split(a);
		temp = t;
		t = add(t);
		t = makepalibro(t, a.size(), carrycheck(temp));
		cout << t<<endl;
	}

	}

	
}
