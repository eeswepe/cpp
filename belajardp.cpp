#include <bits/stdc++.h>
using namespace std;

int total,best,dp[10000];
int jenis_koin[] = {1,3,5};

int main(){
	cin >> total;
	dp[0] = 0;
	for(int i=1;i<=total;i++){
//		cout << "i " << i << endl;
		best = 10000;
		for(int koin:jenis_koin){
//			cout << "koin " << koin<< endl;
			if(koin<=total){
				best=min(best,dp[i-koin]+1);
			}
			dp[i] = best;
//			cout << dp[i] << endl;
		}
	}
	cout << dp[total];
}
