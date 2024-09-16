#include <bits/stdc++.h>
using namespace std;

bool arr[100000000];

void sieve(){
	arr[1] = false;
	for(int i=2;i<=100000000;i++){
		if(arr[i]){
			for(int j=i*i;j<100000000;j+=i){
				arr[j] = false;
			}
		}
	}
}

int main(){
	memset(arr,true,sizeof(arr));
	sieve();
	for(int i=1;i<10;i++){
		cout << arr[i] << " ";
	}
}
