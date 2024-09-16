#include <bits/stdc++.h>
using namespace std;

int total,dp[7500];
int jenis[] = {1,5,10,25,50}; 

int main(){
	while(cin >> total){
		dp[0]=1;
		for(int koin:jenis){
			for(int i=koin;i<=total;i++){
//				cout << koin << " " << i << endl;
//				cout << i << " " << dp[i] << endl;
				dp[i]+=dp[i-koin];
				
			}
		}
		for(int i=0;i<total;i++){
			cout << i << " " << dp[i] << endl;
		}
		cout << endl << dp[total];
	}
}
