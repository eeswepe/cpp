#include <bits/stdc++.h>
using namespace std;

int total,best,dp[10000];
int jenis_koin[] = {1,3,5};

int main(){
	cin >> total;
	for(int i=1;i<=total;i++){
		for(int koin:jenis_koin){
			if(koin<=total){
				dp[i]++;
			}
		}
	}
	cout << dp[total];
}
