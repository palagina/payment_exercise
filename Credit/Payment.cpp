#include <iostream>
#include <string>
using namespace std;
#include "Payment.h"

Payment::Payment() : amount(0) {};
Payment::Payment(float newAmount) : amount(newAmount) {};
Payment::~Payment() {};

float Payment::getAmount() { return amount; };
void Payment::setAmount(float newAmount) { amount = newAmount; };

void Payment::paymentDetails() {
	cout << "The amount of payment is: " << getAmount() << endl;
};