#include <bits/stdc++.h>
using namespace std;

int n, bilpos[10];
bool pernah[10];

void permutasi(int digit){
	if(digit>n){
		for(int i=1;i<=n;i++){
			cout << bilpos[i];
		}
		cout << endl;
		return;
	}
	for(int i=1;i<=n;i++){
		if(!pernah[i]){
			bilpos[digit]=i;
			pernah[i]=1;
			permutasi(digit+1);	
			pernah[i]=0;
		}
	}
	
}

int main(){
	int n;
	cin >> n;
	permutasi(1);
}
