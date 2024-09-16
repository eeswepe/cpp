#include <bits/stdc++.h>
using namespace std;

int i=0,n,m,best=10001,f[50];

int main(){
	cin >> n >> m;
	for(int i=0;i<m;i++){
		cin >> f[i];
	}
	sort(f,f+m);
	while(i+n<=m){
		best = min(f[i+n-1]-f[i], best);
		i++;
	}
	cout << best;
}
