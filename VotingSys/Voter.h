#pragma once
#include"Person.h"
#include"Admin.h"

class Voter:private Person, private Admin
{
private:
	char ID[4];
public:
	Voter(void);
	~Voter(void);

	void display(void);
	void Vlist(int);
	void getVdata(void);
	void givevote(Candidate);
	bool Voters_page(void);
};

