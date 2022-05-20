#include "RegisteredMember.h"
#include "Payment.h"


#define size 2
#define size1 2
class JobSeeker : public RegisteredMember
{
private:
	int SId;
	int NIC;
	Feedback* feedback[size];
	Payment* pay[size1];
public:
	JobSeeker();
	void applyJob();
	void payFee();
	void displayDetails();
	~JobSeeker();

};

