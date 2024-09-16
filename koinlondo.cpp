#include <bits/stdc++.h>
using namespace std;

int t,n,temp;

int main(){
	cin >> t;
	while(t--){
		cin >> n;
		temp = ((n*567/9)+7492)*(235/47)-498;
		cout << (temp%100)/10 << endl;
	}
}
