#include<iostream>
using namespace std;
void print(int m,int n) {
	for(int i=1;i<=m;i++) {
		cout << " ";
	}
	for(int i=1;i<=n;i++) {
		cout << "*";
	}
}
int main() {
	int N;
	cin >> N;
	for(int i=1;i<=N*2-1;i+=2) {
		print((N*2-1-i)/2,i);
		print((N*2-1-i)/2,0);
		cout << endl;
	}
	return 0;
}
