#include <bits/stdc++.h>
using namespace std;

int total, dp[7500];
int jenis_koin[] = {1,5,10,25,50};

void setup(){
	memset(dp,0,sizeof(dp));
	dp[0]=1;
	for(int koin:jenis_koin){
//		cout << "jenis koin "  << koin << endl;
		for(int i=1;i<=10;i++){
			if(koin<=i){
				dp[i] += dp[i-koin];	
			}
		}
//		for(int i=1;i<=10;i++){
//			cout << "dp ke-" << i << " = " << dp[i] << endl;
//		}
	}
}

int main(){
	setup();
	while(cin >> total){
		cout << dp[total] << endl;
	}
}
