#include <bits/stdc++.h>
using namespace std;

int ans,awal=0,n,k,patok[100001],player[100001];

int main(){
	cin >> n >> k;
	for(int i=0;i<n;i++){
		int p;
		cin >> p;
		patok[i]=awal+p;
		awal=patok[i];
	}
	for(int i=0;i<k;i++){
		cin >> player[i];
		ans = upper_bound(patok,patok+n,player[i])-patok;
		cout << ans << endl;
	}
}
