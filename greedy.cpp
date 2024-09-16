#include<bits/stdc++.h>
using namespace std;

pair<int,int> duration[100001];
int n,start=0,ans=0,hour;

int main(){
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> duration[i].second >> hour;
		duration[i].first = hour+duration[i].second;
	}
	cout << endl;
	sort(duration,duration+n);
//	for(int i=0;i<n;i++){
//		cout << duration[i].first <<  duration[i].second << endl;
//	}
	for(int i=0;i<n;i++){
		if(duration[i].second>=start){
			ans++;
			start=duration[i].first;
		}
	}
	cout << ans;
	
}
