#include<iostream>
#include<stdlib.h>
#include <ctime>
using namespace std;
void print(int a[],int n) {
	for(int i=0;i<n;i++) {
		for(int j=i+1;j<n;j++) {
			for(int k=j+1;k<n;k++) {
				int sum=0;
				sum+=(a[i]+a[j]+a[k]);
				if(sum%25==0) {
					cout << a[i] << " " << a[j] << " " << a[k] << endl;
				}
				sum=0;
			}
		}
	}
}
int main() {
	srand(time(NULL)); 
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++) {
		a[i]=rand()%(49-0+1)+0;
	}
	for(int i=0;i<n;i++) {
		cout << a[i] << " ";
	}
	print(a,n);
	return 0;
}
