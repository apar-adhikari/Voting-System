#include "Voter.h"


Voter::Voter(void)
{
}


Voter::~Voter(void)
{
}

void Voter::givevote(Candidate C)
{
	C++;
	cout << "You have submitted your vote successfully" << endl;
}

bool Voter::Voters_page()
{
	cout << "Enter your ID" << endl;
	return 1;
}

void Voter::display(void)
{
	char z = 'z';
}

void Voter::Vlist(int i)
{
	cout << ID << "  |  ";
	cout.setf(ios::left,ios::adjustfield);
	cout.width(20);
	cout << name << " |  ";
	cout.width(5);
	cout << age << "|  ";
	cout.flush();
	cout << endl;
}

void Voter::getVdata(void)
{
	cout << "Enter Name: ";
	cin >> name;
	cout << "ID: ";
	cin >> ID;
	cout << "Age: ";
	cin >> age;
}