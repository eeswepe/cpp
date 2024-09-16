#include <bits/stdc++.h>
using namespace std;

int n,k,dp[100001],a[100001],t[100001];

int main(){
	memset(dp,0,sizeof(dp));
	cin >> n >> k;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		cin >> t[i];
	}
	for(int i=1;i<=n;i++){
		if(t[i-1]==0){
			dp[i] = dp[i-1];
		}else{
			dp[i] = dp[i-1]+a[i];
		}
		
		
//		if(i>=k){
//			if(t[i-1]==0){
//				dp[i] = max(dp[i-1], dp[i-k]);
//			}else{
//				dp[i] = max(dp[i-1], dp[i-k]+a[i-1]);
//			}
//		}
	}
	cout << dp[n];
}
