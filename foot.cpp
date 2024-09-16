#include <bits/stdc++.h>
using namespace std;

int n,m,ans=0,foot[1001],shoe[1001];

int main(){
	cin >> n >> m;
	for(int i=0;i<n;i++){
		cin >> foot[i];
	}
	for(int i=0;i<n;i++){
		cin >> shoe[i];
	}
	sort(foot,foot+n);
	sort(shoe,shoe+m);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(foot[i]+1==shoe[j] || foot[i]==shoe[j]){
				ans++;
				shoe[j] = -1;
				foot[i] = -1;
			}
		}
	}
	cout << ans;
}
