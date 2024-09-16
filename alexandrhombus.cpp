#include <iostream>
using namespace std;

int n, dp[101];

int main(){
	dp[0] = 1;
	cin >> n;
	for(int i=1;i<=n;i++){
		dp[i] = dp[i-1]+(4*(n-1));
		cout << "dp[" << i << "] " << dp[i] << endl;
	}
	cout << dp[n];
}
