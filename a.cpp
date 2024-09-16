#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,a;
	int ans=0;
	cin >> n >> m;
	vector<int> foot_size;
	vector<int> available_size;
	
	for(int i=0;i<n;i++){
		cin >> a;
		foot_size.push_back(a);
	}
	
	for(int i=0;i<m;i++){
		cin >> a;
		available_size.push_back(a);
	}

	sort(foot_size.begin(), foot_size.end());
	sort(available_size.begin(), available_size.end());
	
	
	
	for(int i=0;i<n;i++){
		if(foot_size[i]-available_size[i]<=1){
			ans++;
		}
	}
	cout << ans;
}

