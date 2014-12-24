#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
	string x;
	x.reserve(40);
	cin >> x;

	cout << x.size()<<endl;
	cout << x.length()<<endl;


}
