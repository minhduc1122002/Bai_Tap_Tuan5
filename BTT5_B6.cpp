#include <iostream>
#include <cmath>
using namespace std;
int UCLN(int s1, int s2) {
	int max;
	for(int i=1;i<=min(s1,s2);i++) {
		if(s1%i==0 && s2%i==0) {
			max=i;
		}
	}
	return max;
}
int main() {
    int a,b;
    cin >> a >> b;
    cout << UCLN(a,b);
    return 0;
}
