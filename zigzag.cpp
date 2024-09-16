#include <bits/stdc++.h>
using namespace std;

int catat[10], n, cek[10] = {false};
void permutasi (int depth){
    if (depth>=n){
        bool zigzag = true;
        for (int i = 1;i < n-1;i++){
            bool condition1 = catat[i]>catat[i-1] && catat[i]>catat[i+1];
            bool condition2 =catat[i]<catat[i-1] && catat[i]<catat[i+1];
            if (!(condition1 || condition2)){
                zigzag = false;
            }
        }
        if (zigzag){
            for (int i = 0;i<n;i++){
                cout<<catat[i];
            }
            cout<<endl;
        }
}

    for (int j = 1;j<=n;j++){
        if (!cek[j]){
            cek[j] = true;
            catat[depth] = j;
            permutasi (depth+1);
            cek[j] = false;
        }
    }
}
int main(){
    cin>>n;
    permutasi (0);
}
