#include <bits/stdc++.h>
using namespace std;

bool idx[1000001];
vector<int> nilai_prima;

void sieve(){
	for(int i=2;i<1000000;i++){
		if(!idx[i]){
			nilai_prima.push_back(i);
		}
		idx[i]=true;
		for(int j=i*i;j<1000000;j+=i){
			idx[j]=true;
		}
	}
}

int main(){
	sieve();
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << nilai_prima[n];
	}
}
