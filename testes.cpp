#include <bits/stdc++.h>
using namespace std;

long long n,k,cost=0,idx_bebek=0,bebek[1000001];
pair<long long,long long> kandang[10001];

int main(){
	memset(bebek,0,sizeof(bebek));
//	first=harga,second=kapasitas
	cin >> k;
	for(int i=0;i<k;i++){
		cin >> kandang[i].second;
	}
	for(int i=0;i<k;i++){
		cin >> kandang[i].first;
	}
	sort(kandang,kandang+k);
	cin >> n;

	for(int i=0;i<n;i++){
		cin >> bebek[i];
	}
	sort(bebek, bebek+n,greater<int>());
	for(int i=0;i<k;i++){
		if(idx_bebek>=n){
			break;
		}
		while(kandang[i].second>0){
			kandang[i].second--;
			cost+=(bebek[idx_bebek]*kandang[i].first);
			idx_bebek++;
		}
	}
	cout << cost;
}
