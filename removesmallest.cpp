#include <bits/stdc++.h>
using namespace std;

int t,n,dif,arr[10001];

void solve(){
	dif=0;
	cin >> n;
	if(n==1){
		cout << "YES" << endl;
		return;
	}
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	sort(arr,arr+n);
	for(int i=1;i<n;i++){
		if(arr[i-1]!=arr[i]){
//			cout << arr[i-1] << " " << arr[i] << endl;
			dif++;
		}
	}
	if(dif>1) cout << "NO" << endl;
	else cout << "YES" << endl;
//	cout << dif;
}

int main(){
	cin >> t;
	while(t--){
		solve();
	}
}
