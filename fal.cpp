#include <bits/stdc++.h>
using namespace std;

int t,n,arr[100001];

int main(){
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=0;i<n;i++) cin >> arr[i];
		sort(arr,arr+n,greater<int>());
		cout << arr[0]+arr[1] << endl;
	}
}


