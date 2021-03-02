#include<iostream>
#include<cmath>
using namespace std;
int roundTH1(double so) {
	if(so-(int)so<0.5) {
		return floor(so);
	}
	else {
		return ceil(so);
	}
}
int roundTH2(double so) {
	int x=(int) so;
	if(so-x<0.5) {
		return x;
	}
	else {
		return x+1;
	}
}
int main() {
	double n;
	cin >> n;
	cout << roundTH1(n) << endl;
	cout << roundTH2(n);
	return 0;
}
