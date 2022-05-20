
class Payment
{
private:
	int ID;
	char paymentType[10];
	int paymentAmount;

public:
	Payment(int id, char ptype, int paymentAmmount);
	void validatePayment();
	void displayPaymentDetails();
	~Payment();
};

