#include <iostream>
using namespace std;

int main(){
    int n, faktor=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            faktor++;
        }
    }
    if(faktor==5){
        cout << "YES";
    }else{
        cout << "NO";
    }
}