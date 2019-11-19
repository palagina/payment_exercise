#ifndef CASHPAYMENT_H
#define CASHPAYMENT_H
#include "Payment.h"
#include <iostream>
using namespace std;

class CashPayment : public Payment {
public:
	CashPayment();
	CashPayment(const float& amount);
	void paymentDetails();
	~CashPayment();
};
#endif

