#include <iostream>
using namespace std;
#include <string>
#include "CreditCardPayment.h"

CreditCardPayment::CreditCardPayment() :Payment(), name(""), date(""), number("") {};
CreditCardPayment::CreditCardPayment(const float& amount, string name, string date, string number) 
	:Payment(amount), 
	name(name), date(date), number(number){};
CreditCardPayment::~CreditCardPayment() {};

string CreditCardPayment::getName() { return name; };
string CreditCardPayment::getNumber() { return number; };
string CreditCardPayment::getDate() { return date; };
void CreditCardPayment::setName(string newName) { date = newName; };
void CreditCardPayment::setNumber(string newNumber) { date = newNumber; };
void CreditCardPayment::setDate(string newDate) { date = newDate; };

void CreditCardPayment::paymentDetails() {
	cout << "The credit card payment amount is " << getAmount() << endl;
	cout << "The name on the card is: " << getName() << endl;
	cout << "The expiration date is: " << getDate() << endl;
	cout << "The credit card number is: " << getNumber() << endl;
}