#include <bits/stdc++.h>
using namespace std;

string s;
int m,ans,l,r,dp[100001];

void setup(){
	for(int i=1;i<s.length();i++){
		if(s[i]==s[i-1]){
			dp[i] = dp[i-1]+1;
		}else{
			dp[i]=dp[i-1];
		}
//		cout << s[i] << " " << s[i+1]<< " " << dp[i] << endl;
	}
}

int main(){
	dp[0] = 0;
	cin >> s >> m;
	setup();
	while(m--){
		ans=0;
		cin >> l >> r;
		cout << dp[r-1]-dp[l-1]<< endl;
	}
	
}
