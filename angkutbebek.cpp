#include<bits/stdc++.h>
using namespace std;

int n,k,cost=0,bebek[1000001];
pair<int,int> kandang[1001];

int main(){
//	first=harga,second=kapasitas
	cin >> k;
	for(int i=0;i<k;i++){
		cin >> kandang[i].second;
	}
	for(int i=0;i<k;i++){
		cin >> kandang[i].first;
	}
	sort(kandang,kandang+k,greater<int>());
	cin >> n;
	memset(bebek,0,sizeof(bebek));
	for(int i=0;i<n;i++){
		cin >> bebek[i];
	}
	sort(bebek, bebek+n);
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			if(kandang[i].second-bebek[i]){
				kandang[i].second-=bebek[i];
				cost+=kandang[i].first*bebek[i];
			}else{
				continue;
			}
		}
	}
	cout << cost;
}
