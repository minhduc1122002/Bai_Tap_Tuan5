#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
int ran_smaller_num(int so) {
	srand(time(NULL)); 
	int x=rand()%(so-1-0+1)-0;
	return x;
}
int main() {
	int n;
	cin >> n;
	cout << ran_smaller_num(n);
	return 0;
}
