#include <bits/stdc++.h>
using namespace std;

int n,m, arr[1001], best, now, dp[1000001];

int main(){
	while(cin >> n >> m){
		dp[0] = 1000001;
		dp[1] = 1000001;
		for(int i=1;i<=n;i++){
			cin >> arr[i];
		}
		for(int i=2;i<=n;i++){
			best=1000001;
			for(int j=m;j<0;j++){
				dp[i]
			}
		}
		cout << best;
	}
}
