#include <bits/stdc++.h>
using namespace std;

int m,s[10001] = {0},e[10001] = {0},p[10001] = {0},dp[15000] = {0};

int main(){
	cin >> m;
	for(int i=0;i<m;i++){
		cin >> s[i] >> e[i] >> p[i];
	}
	for(int i=1;i<=15000;i++){
		for(int j=0;j<m;j++){
			if(e[j]<=i){
				dp[i] = max(dp[i],dp[s[j]-1]+p[j]);
			}
		}
	}
	cout << dp[15000];
}
