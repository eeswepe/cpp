#inlcude <iostream>
using namespace std;

int main(){
	char field[3][3];
	int x=0, o=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(field[i][j]=='x'){
				x++;
			}else {
				o++;
			}
		}
	}
	if(x==o or x>o){
		cout << "yes";
	}
}
