#include <bits/stdc++.h>
using namespace std;

long long i,j,n,total,dp[1000000001],best;
long long jenis[] = {0,1,5,10,50,100};
int q;

int main(){
	cin >> q;
	while(q--){
		cin >> total;
		dp[0]=0;
		for(i=1;i<=total;i++){
			best=50000;
			for(j=1;j<=5;j++){
				if(jenis[j]<=i){
					best=min(best,dp[i-jenis[j]]+1);
				}
			}
			dp[i]=best;
		}
		cout << dp[total] << endl;
	}
}
