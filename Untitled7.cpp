#include <bits/stdc++.h>
using namespace std;

pair<long long, long long> coklat[100001];
long long n, d, total, harga, penyuka, ans=0;

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
	for(int i=0;i<n;i++){
		harga = coklat[i].first;
		penyuka = coklat[i].second;
		if(harga<=(d/penyuka)){
			ans+=penyuka;
			d-=(penyuka*harga);
		}else{
			ans+=(d/harga);
			break;
		}
	}
	cout << ans;
}
