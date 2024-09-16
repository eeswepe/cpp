#include <bits/stdc++.h>
using namespace std;

long long i, n, ketinggian[100001], dp[100001], best=100001, ans=0, super, biasa, balik;

int main(){
	cin >> n;
	dp[0] = 0;
	dp[1]= 0;
	ketinggian[n+1] = 1000001;
	ketinggian[0] = 1000001;
	for(long long j=1;j<=n;j++){
		cin >> ketinggian[j];
	}
	i=2;
	while(i<=n){
		super = 3*pow(ketinggian[i]-ketinggian[i-2],2) + dp[i-2];
		biasa = pow(ketinggian[i]-ketinggian[i-1],2) + dp[i-1];
		balik = 3*pow(ketinggian[i-1]-ketinggian[i+1],2) + dp[i-1] + pow(ketinggian[i]-ketinggian[i+1],2);
		
//		cout << "super " << super << " biasa " << biasa << " balik" << balik << endl;
		
		dp[i] = min(balik, min(super,biasa));;
		i++;
	}
	cout << dp[n];
}
