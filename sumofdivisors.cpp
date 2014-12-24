#include <iostream>
#include <vector>

using namespace std;

int prime(int x) 
{
	if(x == 1) {
		return 0;
	}

	for (int i = 2; i * i <= x; i++) {
		if(x % i == 0) {
			return 0;
		}

	}

	return 1;
}

int ok(int x)
{
	long long int count = 0;
	int i;
	for ( i = 1; i * i < x; i++) {
		if(x % i == 0) {
			count+=i;
			count+= x/i;
		}

	}

	if(i * i == x) {
		count += i;
	}



	if(prime(count)) {
		return 1;
	}

	else {
		return 0;
	}

}



int main()
{

	long long t;
	long long a;
	long long b;
	vector <int> x;


	cin >> t;

	for (int i = 2; i < 1000000; i++) {
			if(ok(i)) {
				x.push_back(i);
			}

	}
	for (vector<int>::iterator j = x.begin(); j != x.end(); j++) {
		cout << *j<<endl;
	}
}





