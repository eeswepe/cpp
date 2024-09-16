#include <bits/stdc++.h>
using namespace std;

int n,c,best,profit[1001],weight[1001],dp[1001][1001];

int main(){
	cin >> n >> c;
	for(int i=0;i<=c;i++){
		dp[0][i] = 0;
	}
	for(int i=1;i<=n;i++){
		cin >> profit[i] >> weight[i];
	}
	for(int i=1;i<=c;i++){
		for(int j=0;j<=n;j++){
			best = dp[i-1][j];
			if(c>=weight[j]){
				best = max(best,dp[i-1][j-weight[i]]+profit[i]);
			}
			dp[i][j] = best;
		}
	}
	cout << dp[c][n];
}
