#include <bits/stdc++.h>
using namespace std;

int n,ans=0;
vector<int> batu;

int main(){
	cin >> n;
	batu.push_back(0);
	for(int i=1;i<=n;i++){
		int j;cin >> j;
		batu.push_back(j);
	}
	batu.push_back(0);
	int x=1;
	for(int i=1;i<n;i++){
		
		for(int j=1;j<=n;j++){
			cout << batu[j] << "-";
		}cout << endl;
		
		if(batu[x-1]>batu[x+1]){
			if(batu[x+1]>batu[x]){
				ans+=batu[x+1];
			}else{
				ans+=batu[x-1];
			}
		}else if(batu[x-1]<batu[x+1]){
			if(batu[x]<batu[x]){
				ans+=batu[x-1];
			}else{
				ans+=batu[x+1];
			}
		}
		
		cout << "ans = " << ans << endl;
		batu.erase(batu.begin()+x);
//		n--;
	}
	cout << ans;
	
}
