#include <bits/stdc++.h>
using namespace std;

int n,m,best,harga[1001], kandungan[1001], dosis[1001], dp[10001][10001];

int main(){
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> harga[i] >> kandungan[i] >> dosis[i];
	}
	for(int i=0;i<=m;i++){
		dp[0][i] = 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<=m;j++){
			best = dp[i-1][j];
			if(j>=harga[i]){
				if(dosis[i]){
					best = max(best, dp[i-1][j-harga[i]]+kandungan[i]);
				}else{
					best = max(best, dp[i][j-harga[i]]+kandungan[i]);
				}
			}
			dp[i][j] = best;
		}
	}
	
//	for(int i=0;i<=n;i++){
//		for(int j=0;j<=m;j++){
//			cout << dp[i][j] << " ";
//		}
//		cout << endl;
//	}
	
	cout << dp[n][m];
	
}
