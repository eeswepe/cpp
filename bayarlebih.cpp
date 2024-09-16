#include <bits/stdc++.h>
using namespace std;

int best,t,n,total,jenis_koin[101],dp[10001];
bool membagi;

int main(){
	cin >> t;
	while(t--){
		membagi=true;
		dp[0]=0;
		jenis_koin[0]=0;
		cin >> total >> n;
		for(int i=1;i<=n;i++){
			cin >> jenis_koin[i];
			if(total%jenis_koin[i]==0){
				membagi=false;
			}
		}
		sort(jenis_koin+1,jenis_koin+n+1);
//		for(int i=1;i<=n;i++){
//			cout <<endl<<i << " " << jenis_koin[i];
//		}
		cout << "feaf"  << membagi << endl;
		if(membagi){
			total+=jenis_koin[1]-(total%jenis_koin[1]);
		}
		for(int i=1;i<=total;i++){
			best=10001;		
			for(int j=1;j<=n;j++){
				if(jenis_koin[j]<=i){
					best = min(best,dp[i-jenis_koin[j]]+1);	
				}
				dp[i] = best;
			}
			cout << "dp ke " << i << " = " << dp[i] << endl;
		}
		cout << total << " " <<dp[total];
	}
}
