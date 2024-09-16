#include <bits/stdc++.h>
using namespace std;

bool idx[1000001];
vector<int>nilai_prima;

void sieve(){
	for(int i=2;i*i<=1000000;i++){
		if(!idx[i]){
			for(int j=i*i;j<=1000000;j+=i){
				idx[j]=true;
			}
		}
	}
	for(int i=2;i<1000000;i++){
		if(!idx[i]){
			nilai_prima.push_back(i);
		}
	}
}

int main(){
	int t,target;
	cin >> t;
	sieve();
	while(t--){
		cin >> target;
		cout << nilai_prima[target-1] << endl;
	}
}
