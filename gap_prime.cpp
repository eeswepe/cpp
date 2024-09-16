#include <bits/stdc++.h>
using namespace std;

bool arr[1000001];
int input;

void sieve(){
	for(int i=1;i<1000001;i++){
		arr[i] = true;
	}
	arr[0] = true;
	arr[1] = false;
	for(int i=2;i<1000001;i++){
		if(arr[i]){
			for(int j=2*i;j<=1000001;j+=i){
				arr[j] = false;	
			}
		}
	}
}

void solve(int n){
	if(!arr[n]){
		int ans=0;
		while(!arr[n]){
			n--;
		}
		for(int i=n+1;i<1000001;i++){
			ans++;
			if(arr[i]){
				break;
			}
		}
		cout << ans << endl;
	}else{
		cout << 0;
	}
	
}

int main(){
	sieve();
	while(true){
		cin >> input;
		if(!input) break;
		solve(input);
	}
}
