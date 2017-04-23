#pragma once
#include"Person.h"

class Candidate:private Person
{
private:
	int vote_recieved;
	char party[10];

public:
	Candidate(void);
	~Candidate(void);

	void operator ++(int);
	void display(void);
	void list(int);
	void getdata(void);
};

