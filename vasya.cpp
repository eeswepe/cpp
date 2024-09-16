#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,ans=0;
	cin >> n >> m;
	m/=n;
	while(m>1){
//		cout << m << endl;
		if(m!=0 and m%3==0){
//			cout << "dibagi 2" << endl;
			m/=3;
			ans++;
		}else{
//			cout << "dibagi 3" << endl;
			m/=2;
			ans++;
		}
	}
//	cout << n << " " << m << endl;
	cout << ans;
//	cout << m << " " << n << " " << ans << endl;
}
