#include <bits/stdc++.h>
using namespace std;

int main(){
	long long a,b,c,d,e,f;
	cin >> a >> b >> c >> d;
	e=(a*d)+(c*b);
	f=b*d;
	int fpb=__gcd(e,f);
	cout << e/fpb << " " << f/fpb;
}
