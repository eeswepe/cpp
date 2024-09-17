#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    // cout << "input n: ";
    cin >> n;
    vector<int> v;
    while(n--){
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    for(int i: v){
        cout << i << " ";
    }
}