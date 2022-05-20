#include "RegisteredMember.h"
#include "Feedback.h"
#include "Vacancy.h"
#include "Payment.h"

#define size1 2
#define size2 2
#define SIZE3 2

class Client :
    public RegisteredMember
{
private:
    int CId;
    char companyName[50];
    Vacancy* vac[size1];
    Feedback* feedback[size2];
    Payment* pay[SIZE3];

public:
    Client();
    void addVacancy();
    void payFee();
    void displayDetails();
    ~Client();
};

