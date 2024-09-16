#include <iostream>
using namespace std;

int n,ans=0;

int main(){
	cin >> n;
	for(int i=1;i<n;i++){
		for(int j=1;j<n;j++){
			if(i*j<n){
				ans++;
			}
		}
	}
	cout << ans;
}
