#ifndef PAYMENT_H
#define PAYMENT_H
#include <iostream>
using namespace std;

class Payment {
public:
	Payment();
	Payment(float amount);
	~Payment();
	float getAmount();
	void setAmount(float newAmount);
	void paymentDetails();
private:
	float amount;
};

#endif