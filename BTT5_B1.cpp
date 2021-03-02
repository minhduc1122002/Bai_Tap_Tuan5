#include<iostream>
#include <cstdlib>
#include<ctime>
using namespace std;
int check_xq(int **a, int x, int y) {
	int dem=0;
	if(a[x-1][y-1]) dem++;
	if(a[x-1][y]) dem++;
	if(a[x-1][y+1]) dem++;
	if(a[x][y-1]) dem++;
	if(a[x][y+1]) dem++;
	if(a[x+1][y-1]) dem++;
	if(a[x+1][y]) dem++;
	if(a[x+1][y+1]) dem++;
	return dem;
}
int main() {
	srand(time(NULL)); 
	int m,n,k;
	cin >> m >> n >> k;
	int **a=new int *[m];
	for(int i=0;i<m;i++) {
		*(a+i)=new int [n];
	}
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			a[i][j]=0;
		}
	}
	int x[k],y[k];
	for(int i=0;i<k;i++) {
		x[i]=rand()%(m-1-0+1)+0;
		y[i]=rand()%(n-1-0+1)+0;
		for(int j=i-1;j>=0;j--) {
			if(x[i]==x[j] && y[i]==y[j]) {
				x[i]=rand()%(m-1-0+1)+0;
				y[i]=rand()%(n-1-0+1)+0;
				j=i;
			}
			else {
				continue;
			}
		}
	}
	for(int i=0;i<k;i++) {
		a[x[i]][y[i]]=1;
	}
	int **b=new int *[m];
	for(int i=0;i<m;i++) {
		*(b+i)=new int [n];
	}
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			b[i][j]=0;
		}
	}
	bool win=true;
	while(win) {
		int h,c;
		cin >> h >> c;
		if(a[h][c]==1) {
			win=false;
			cout << "You're dead" << endl;
			for(int i=0;i<m;i++) {
				for(int j=0;j<n;j++) {
					cout << a[i][j] << " ";
				}
				cout << endl;
			}
			return 0;
		}
		else {
			b[h][c]=check_xq(a,h,c);
			a[h][c]=check_xq(a,h,c);
		}
		for(int i=0;i<m;i++) {
			for(int j=0;j<n;j++) {
				cout << b[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
