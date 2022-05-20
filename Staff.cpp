#include "Staff.h"

Staff::Staff(int Sid, const char sname[], const char sAddress[], int spNo)
{
	stID = sid;
	strcpy(sname,name);
	strcpy(sAddress,address);
	phoneNo=spNo;
}

void Staff::deleteVacancy()
{
}

void Staff::updateVacancy()
{
}

void Staff::confirmDetails()
{
}

Staff::~Staff()
{
}
