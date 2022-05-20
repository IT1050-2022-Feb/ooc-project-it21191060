#include "Payment.h"
#define SIZE 2
class Report
{
private:
	Payment* pay[SIZE];
public:
	Report();
	void displayJobSeekerDetails();
	void displayClientDetails();
	void displayPaymentDetails();
	~Report();
};

