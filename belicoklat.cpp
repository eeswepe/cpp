#include <bits/stdc++.h>
using namespace std;

pair<long long, long long> coklat[100001];
long long n, d, total, cost=0, ans=0;

int main(){
//	first=harga, second=peminat
	cin >> n >> d;
	for(long long i=0;i<n;i++){
		cin >> coklat[i].first >> coklat[i].second;
	}
	sort(coklat,coklat+n);
//	for(int i=0;i<n;i++){
//		cout << coklat[i].first << " " << coklat[i].second << endl;
//	}

//  cek kurang dari
	for(long long i=0;i<n;i++){
		total = coklat[i].first*coklat[i].second;
		if(cost+total<=d){
			cost+=total;
			ans+=coklat[i].second;
		}else if(cost+total>d){
			ans=ans+((d-cost)/coklat[i].first);
			break;
		}
	}
	cout << ans;
}
