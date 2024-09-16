#include <bits/stdc++.h>
using namespace std;

int n,t,duration[201],value[201],maks_value,maks_idx;

int main(){
	
	cin >> n >> t;
	for(int i=0;i<n;i++){
		cin >> duration[i];
	}
	for(int i=0;i<n;i++){
		cin >> value[i];
	}
	if(value[0]>t){
		cout << value[0] << ' ' <<  t;
		cout << -1 << endl;
		return 0;
	}
	for(int i=0;i<n;i++){
		if(duration[i]+i<=t){
			cout << duration[i]+i << endl;
			if(value[i]>maks_value){
				maks_value = value[i];
				maks_idx = i;
			}
		}
	}
	cout << maks_idx+1;
}
