#include <bits/stdc++.h>
using namespace std;

class Creature {
	public:
		string name;
		int power;
	Creature(string _name, int _power){
		name = _name;
		power = _power;
	}
};


class Beast: public Creature{
	public: 
		Beast(string name, int power): Creature(name, power) {}
	
		void road(){
			cout << "rawrr";
		}
};

class Birds: public Creature{
	public:
		Birds(string name, int power): Creature(name, power) {}
	
		void fly(){
			cout << "fly me to the moon";
		}
};

int main(){
	
	Birds Eagle = Birds("Eagle", 80);
	Eagle.fly();
	
}
