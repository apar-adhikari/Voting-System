#pragma once
#include"Admin.h"
#include"Voter.h"

class Administrator:protected Admin 
{
private:
	Voter V[10];
	string username,password;
	int VIndex;
public:
	Administrator(void);
	~Administrator(void);

	void admin_page(void);
	bool admin_menu(void);
	void publish_result(void);
	void cand_list(void);
	void voter_list(void);
	void add_voter(void);
	void add_candidate(void);
};

