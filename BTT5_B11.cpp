#include<iostream>
#include<cmath>
using namespace std;
long long BIN(int so) {
	int dem=0;
	long long x=0;
	while(so>0) {
		int temp=so%2;
		x=x+temp*pow(10,dem);
		so=so/2;
		dem++;
	}
	return x;
}
int main() {
	int n;
	cin >> n;
	cout << BIN(n);
	return 0;
}
