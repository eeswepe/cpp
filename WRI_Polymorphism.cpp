#include <bits/stdc++.h>
using namespace std;

class Payment{
	public:
		virtual void pay() = 0;
};

class PayPal: public Payment{
	public:
		void pay(){
			cout << "Paid using PayPal";
		}
};


class CreditCard: public Payment{
	public:
		void pay(){
			cout << "Paid using CreditCard";
		}
};


class BankTransfer: public Payment{
	public:
		void pay(){
			cout << "Paid using BankTransfer";
		}
};

int main(){
	
	BankTransfer payment;
	payment.pay();
	
}
