#include <iostream>
using namespace std;
#include "Payment.h"
#include "CashPayment.h"
#include "CreditCardPayment.h"

int main() {
	cout << "Create objects...\n\n";
	CashPayment cash1(50.5), cash2(20.45);
	CreditCardPayment credit1(10.5, "Fred", "10/5/2010", "12345");
	CreditCardPayment credit2(100, "Barney", "11/15/2009", "98765");
	cout << "Cash 1 details:" << endl;
	cash1.paymentDetails();
	cout << endl;
	cout << "Cash 2 details:" << endl;
	cash2.paymentDetails();
	cout << endl;
	cout << "Credit 1 details:" << endl;
	credit1.paymentDetails();
	cout << endl;
	cout << "Credit 2 details:" << endl;
	credit2.paymentDetails();
	cout << endl;

	return 0;
}