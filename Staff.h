#include "Vacancy.h"
#define SIZE 2
class Staff
{
private:
	int stID;
	char name[30];
	char address[50];
	int phoneNo;
	Vacancy* vaca[SIZE];

public:
	Staff(int Sid, const char name[], const char address[],int spNo);
	void deleteVacancy();
	void updateVacancy();
	void confirmDetails();
	~Staff();
};

