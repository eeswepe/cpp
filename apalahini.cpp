#include <bits/stdc++.h>
using namespace std;

int n,m,idx_knight, idx_head, cost, sisa_pala;

int main(){
	while(true){
		idx_knight=0,idx_head=0;
		cost=0;
		cin >> n >> m;
		sisa_pala=n;
		int head[n+1],knight[m+1];
		if(n==0 and m==0){
			break;
		}
		for(int i=0;i<n;i++){
			cin >> head[i];
		}
		for(int j=0;j<m;j++){
			cin >> knight[j];
		}
		if(m<n){
			cout << "Loowater is doomed!" << endl;
			continue;
		}
		sort(knight,knight+m);
		sort(head,head+n);
		while(idx_head<n && idx_knight<m){
			if(knight[idx_knight]>=head[idx_head]){
				cost+=knight[idx_knight];
				idx_knight++;
				idx_head++;
				sisa_pala--;
			}else{
				idx_knight++;
			}
		}
		if(sisa_pala){
			cout << "Loowater is doomed!" << endl;
			continue;
		}
		cout << cost << endl;
		
	}
}
