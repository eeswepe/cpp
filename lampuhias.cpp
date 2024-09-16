#include <bits/stdc++.h>
using namespace std;

long long p,q,r,t,cek;

void solve(){
	cin >> cek;
	if(cek%p==0 and cek%q==0 and cek%r==0){
		cout << "YA" << endl;
		return;
	}
	cout << "TIDAK" << endl;
}

int main(){
	cin >> p >> q >> r >> t;
	while(t--){
		solve();
	}
}
