#include<iostream>
using namespace std;
long fractorial(int n) {
	long fractorial=1;
	for(int i=1;i<=n;i++) {
		fractorial*=i;
	}
	return fractorial;
}
long ToHop(int k,int n) {
	return (fractorial(n))/(fractorial(k)*fractorial(n-k));
}
bool kiemTra(int k,int n) {
	if((k>=0 && k<=n) && (n>=1 && n<=20)) {
		return 1;
	}
	return 0;
}

void nhapKN(int *k,int *n,int &soPhanTu) {
	bool run=true;
	while(run) {
		cin >> k[soPhanTu] >> n[soPhanTu];
		if(k[soPhanTu]==-1 && n[soPhanTu]==-1) {
			run=false;
			break;
		}
		soPhanTu++;
	}
}
int main() {
	int *k=new int[1];
	int *n=new int[1];
	int soPhanTu=0;
	nhapKN(k,n,soPhanTu);
	for(int i=0;i<soPhanTu;i++) {
		if(kiemTra(k[i],n[i])) {
			cout << ToHop(k[i],n[i]) << endl;
		}
	}
	return 0;
}
