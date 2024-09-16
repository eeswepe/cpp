#include <bits/stdc++.h>
using namespace std;
int i,j,t,n,mini,maks,input,ans_maks,ans_mini;
int main(){
	cin >> t;
	while(t--){
		ans_maks=0;ans_mini=0;
		cin >> n;
		for(i=0;i<n;i++){
			mini=1001;maks=0;
			for(j=0;j<3;j++){
				cin >> input;
				if(input<mini) mini=input;
				if(input>maks) maks=input;
			}
			ans_mini+=mini;ans_maks+=maks;
		}
		cout << ans_mini << " " << ans_maks<< endl;
	}
}
