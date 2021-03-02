#include<iostream>
#include<cmath>
using namespace std;
bool check_soNT(int so) {
	if(so<2) {
		return 0;
	}
	else {
		for(int i=2;i<=sqrt(so);i++) {
			if(so%i==0) {
				return 0;
			}
		}
	}
	return 1;
}
int main() {
	int n;
	cin >> n;
	cout << check_soNT(n);
	return 0;
}
