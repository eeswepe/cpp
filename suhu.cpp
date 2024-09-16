#include <bits/stdc++.h>
using namespace std;

int n,t,duration[201],value[201];

void solve(){
	int maks_value=-2,maks_idx=-1, can_solved=0;
	cin >> n >> t;
	for(int i=0;i<n;i++){
		cin >> duration[i];
		if(duration[i]+1<=t){
			can_solved=1;
		}
	}
	for(int i=0;i<n;i++){
		cin >> value[i];
	}
	if(!can_solved){
		cout << -1 << endl;
		return;
	}
	for(int i=0;i<n;i++){
		if(duration[i]+i<=t){
			if(value[i]>maks_value){
				maks_value = value[i];
				maks_idx = i;
			}
		}
	}
	cout << maks_idx+1 << endl;
}

int main(){
	int q;
	cin >> q;
	while(q--){
		solve();
	}
}
