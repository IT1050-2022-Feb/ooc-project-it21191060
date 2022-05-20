#include "Payment.h"
Payment::Payment(int id,char ptype,int paymentAmmount)
{
	pID=id;
	strcpy(ptype,paymentType);
	pAmmount=paymentAmount;
}

void Payment::validatePayment()
{
}

void Payment::displayPaymentDetails()
{
	cout << "payment id- " << id << "/n";
	cout << "Payment type is- " << paymentType << "/n";
	cout << "Payment ammount- " << paymentAmount;
}

Payment::~Payment()
{
}
