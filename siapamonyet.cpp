#include <bits/stdc++.h>
using namespace std;

int n,h,t,max_range=0,before=0, range=0, test_case=1, nilai_sama;
bool sama = 0;

void solve()
{
	int n;
	cin >> n;
	while(n--){
		cin >> h;
		range = h-before;
		if(range==max_range){
			nilai_sama=max_range;
		}
		max_range = max(range,max_range);
		before = h;
	}
//	cout << nilai_sama << " " << max_range << endl ;
	if(max_range==nilai_sama){
		sama=1;
	}
	if(sama){
		max_range++;
	}
	cout << "Case " << test_case << ": " << max_range << endl;
}

int main(){
	cin >> t;
	while(t--){
		solve();
		test_case++;
	}
}
