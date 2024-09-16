#include <bits/stdc++.h>
using namespace std;

int n,k,w[101],h[101],dp[2001][2001],best;
vector<int> ans;

//	k = jumlah barang
//	n = kapasitas

int main(){
	cin >> n >> k;
	for(int i=0;i<=n;i++){
		dp[0][i] = 0;
	}
	for(int i=1;i<=k;i++){
		cin >> h[i] >> w[i];;
	}
	for(int i=1;i<=k;i++){
		for(int j=0;j<=n;j++){
			best=dp[i-1][j];
			if(j>=w[i]){
				best = max(best, dp[i-1][j-w[i]]+h[i]);
			}
			dp[i][j] = best;
		}
	}
	cout << dp[k][n];
//	print dp
	for(int i=0;i<=k;i++){
		for(int j=0;j<=n;j++){
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	
//	mencari nilai maksimal pada kolom k
//	int idx_maks;
//	for(int i=1;i<=n;i++){
//		if(dp[k][i]==dp[k][n]){
//			idx_maks=i;
//			break;
//		}
//	}
//	int akhir = k;
//	while(akhir>0){
//		if(dp[akhir][idx_maks]==dp[akhir-1][idx_maks]){
//			akhir--;
//		}else{
//			idx_maks-=w[akhir];
//			ans.push_back(akhir);
//			akhir--;
//		}
//	}
//	
//	for(int i=ans.size()-1;i>=0;i--){
//		cout << ans[i] << endl;
//	}
	
}
