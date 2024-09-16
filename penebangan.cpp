#include <bits/stdc++.h>
using namespace std;

int n,ukuran[3], dp[4000], best;
bool guna[3] ={true,true,true};

int main(){
	memset(dp,0,sizeof(dp));
	cin >> n ;
	for(int i=0;i<3;i++){
		cin >> ukuran[i];
	}
	for(int i=1;i<=n;i++){
		best=-1;
		for(int j=0;j<3;j++){
			if(ukuran[j]<=i){
				best=max(best,dp[i-ukuran[j]]+1);
			}
		}
		if(best!=-1){
			dp[i]=best;
		}else{
			dp[i]=-1;
		}
//		cout << "dp ke "<<i << " " << dp[i] << endl;
	}
	if(dp[n]==-1){
		cout << 0;
		return 0;
	}
	cout << dp[n];
	
}
