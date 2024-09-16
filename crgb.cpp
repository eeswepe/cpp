#include <bits/stdc++.h>
using namespace std;

bool arr[1000001];
vector<int> prime;
int input;

void sieve(){
	for(int i=1;i<1000001;i++){
		arr[i] = true;
	}
	arr[1] = false;
	for(int i=2;i<1000001;i++){
		if(arr[i]){
			for(int j=2*i;j<=1000001;j+=i){
				arr[j] = false;	
			}
		}
	}
	for(int i=2;i<1000001;i++){
		if(arr[i]){
			prime.push_back(i);
		}
	}
}

void solve(int n){
	for(int i=0;i<1000001;){
		int cek = n-prime[i];
		if(cek<=0){
			cout << "Goldbach's conjecture is wrong"<<endl;
			break;
		}
		if(arr[cek]){
			cout << n << " = "<<prime[i]<<" + " << cek << endl;
			break;
		}else{
			i++;
		}
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
