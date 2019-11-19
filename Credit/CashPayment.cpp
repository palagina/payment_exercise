#include <iostream>
using namespace std;
#include "CashPayment.h"

CashPayment::CashPayment() :Payment() {};
CashPayment::CashPayment(const float& amount) :Payment(amount) {};
CashPayment::~CashPayment() {};

void CashPayment::paymentDetails() {
	cout << "The cash payment amount is " << getAmount() << endl;
}