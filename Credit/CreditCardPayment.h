#ifndef CREDITCARDPAYMENT_H
#define CREDITCARDPAYMENT_H
#include <string>
#include "Payment.h"
#include <iostream>
using namespace std;

class CreditCardPayment : public Payment {
public:
	CreditCardPayment();
	CreditCardPayment(const float& amount, string name, string date, string number);
	~CreditCardPayment();
	void paymentDetails();

	string getName();
	string getNumber();
	string getDate();
	void setName(string name);
	void setNumber(string number);
	void setDate(string date);

private:
	string name;
	string date;
	string number;
};
#endif
