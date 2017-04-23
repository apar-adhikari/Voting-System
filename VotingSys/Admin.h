#pragma once
#include"Candidate.h"

using namespace std;

class Admin
{
protected:
	Candidate C[3];
	int CIndex;
public:
	Admin(void);
	~Admin(void);
};

