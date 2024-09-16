#include <bits/stdc++.h>
using namespace std;

int n,bebek[100001], ans=0;

int main(){
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> bebek[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j>=1;j--){
			if(bebek[i]>=bebek[j]){
				ans++;
			}else{
				break;
			}
		}
	}
	cout << ans;
}
