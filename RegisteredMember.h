#include "Guest.h"

#define size 2
class RegisteredMember
{
protected:
	char name[20];
	int phoneNo;
	char Email[30];
	char Address[50];
	char username[25];
	char password[30];
	Guest* guests[size];

public:
	RegisteredMember();
	void login();
	void displayDetails();
	void logout();
	~RegisteredMember();
};

