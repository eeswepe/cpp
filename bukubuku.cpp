#include <bits/stdc++.h>
using namespace std;

int main(){
	while(true){
		long long n, temp;
		cin >> n;
		if(n==0){
			break;
		}
		while(n>=10){
			temp=n%10;
			n/=10;
			n+=temp;
		}
		cout << n << endl;
	}
}
