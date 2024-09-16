#include <bits/stdc++.h>
using namespace std;

int n,k,wake=0,temp=0,sleep=0,a[100001],t[100001];

int main(){
	cin >> n >> k;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		cin >> t[i];
	}
	int dp[n+2][2];
	dp[0][0] = dp[0][1] = dp[n+1][0] = dp[n+1][1] = 0;
	for(int i=1;i<=n;i++){
		if(!t[i]){
			dp[i][0] = dp[i-1][0]+a[i];
			dp[i][1] = dp[i-1][1]
		}else{
			dp[i][1] = dp[i-1][1]+a[i];
			dp[i][0] = dp[i-1][0];
		}
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		int sum = dp[n][1];
		sum+=[i+k-1][0] - dp[i-1][0];
		ans = max(ans,sum);
	}
	cout << ans;
}
