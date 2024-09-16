#include <bits/stdc++.h>
using namespace std;

int n,tmp=0,huruf[26];
string s;

int main(){
	cin >> n >> s;
	memset(huruf,0,sizeof(huruf));
	for(int i=0;i<n;i++){
		int idx_huruf = s[i]-'A';
		huruf[idx_huruf]++;
	}
	sort(huruf,huruf+26,greater<int>());
	if(huruf[2]==0){
		cout << -1;
		return 0;
	}else{
		if(huruf[2]<huruf[1]){
			tmp++;
		}
		if(huruf[2]<huruf[0]){
			tmp++;
		}
	}
	cout << huruf[2]*3+tmp;	
	return 0;
}
