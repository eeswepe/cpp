#include <bits/stdc++.h>
using namespace std;

int pangkat;

int main(){
	int n;
	cin >> n;
	for(int i=2;n>1;i++){
		pangkat=0;
		while(n%i==0){
			n/=i;
			pangkat++;
		}
		if(pangkat==1){
			cout << i << " ";
		}else if(pangkat>1){
			cout << i << "^"<<pangkat<< " ";
		}
		if(pangkat>=1 and n>1){
			cout << "x "; 
		}
	}
}
