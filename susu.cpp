#include <bits/stdc++.h>
using namespace std;

int n,m, arr[1001], best, now;

int main(){
	while(cin >> n >> m){
		best=1000001;
		for(int i=0;i<1000;i++){
			arr[i] = 1000001;
		}
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		if(m>n){
			now=0;
			for(int i=0;i<n;i++){
				now+=arr[i];
			}
			cout << now;
			continue;
		}
		for(int i=0;i<n;i++){
			now = 0;
			for(int j=i;j<i+m;j++){
				now+=arr[j];
			}
			best = min(now,best);	
		}
		cout << best;
	}
}
