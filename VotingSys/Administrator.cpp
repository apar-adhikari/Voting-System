#include "Administrator.h"
#include<fstream>
#include<conio.h>
#include<cstring>


Administrator::Administrator(void)
{
	username = "bct2070";
	password = "vote123";

	ifstream ifile;
	ifile.open("Voters.txt",ios::binary);
	ifile.seekg(0,ios::end);
	VIndex = ifile.tellg()/sizeof(V[0]);
	ifile.seekg(0,ios::beg);
	for (int i=0;i<VIndex;i++)
	{
		ifile.read(reinterpret_cast<char*>(&C[i]),sizeof(C[i]));
	}
	ifile.close();
	cout << VIndex << endl;

}


Administrator::~Administrator(void)
{
}

void Administrator::admin_page()
{
	//system("cls");
	string uname,pass;
	cout << "\n\n\n\t\t\t\tUsername: ";
	cin >> uname;
	cout << endl << "\t\t\t\tPassword: ";
	cin >> pass;
	if (uname == username && pass == password)
	{
		bool am = admin_menu();
	}
}

bool Administrator::admin_menu(void)
{
	top:
	system("cls");
	cout << "\n\n\n\n\t\t\t";
	cout << "1-> View Candidate List" << endl << "\t\t\t";
	cout << "2-> View Voters' list" << endl << "\t\t\t";
	cout << "3-> View Result" << endl << "\t\t\t";
	cout << "4-> Add Voter" << endl;
	int ch;
	cin >> ch;
	switch(ch)
	{
	case 1: {cand_list();}
		break;
	case 2: {voter_list();}
		break;
	case 3: {publish_result();}
		break;
	case 4: {add_voter();}
		break;
	default: 
		{
			system("cls");
			cout << "\n\n\n\t\t\t\t\t!!!Invalid Choice!!!" << endl;
			cout << "\n\t\t\t\tPress Esc to exit the Admin Menu or press any other key to Re-enter the choice";
			char x = getch();
			if (x == 27)
				return 1;
			else
				goto top;
		}
	}
}

void Administrator::cand_list(void)
{
	system("cls");
	cout << "\t*********************" << endl;
	cout << "\t    Candidate List   " << endl;
	cout << "\t*********************" << endl << endl;
	cout << "SN" << " |  ";
	cout.setf(ios::left,ios::adjustfield);
	cout.width(20);
	cout << "Candidate Name" << " |  ";
	cout.width(5);
	cout << "Age" << "|  ";
	cout.flush();
	cout << "Party" << endl;
	for (int j=0;j<43;j++) {cout << "-";}
	cout << endl;
	for (int i=0;i<CIndex;i++)
		C[i].list(i);
	cout << endl << "Press Esc to go back" << endl;
	loop:
	char c = getch();
	if (c == 27)
	{}
	else
		goto loop;
}

void Administrator::voter_list(void)
{
	system("cls");
	cout << "\t*********************" << endl;
	cout << "\t      Voter List     " << endl;
	cout << "\t*********************" << endl << endl;
	cout << "ID" << " |  ";
	cout.setf(ios::left,ios::adjustfield);
	cout.width(20);
	cout << "Voter's Name" << " |  ";
	cout.width(5);
	cout << "Age";
	cout.flush();
	cout << endl;
	for (int j=0;j<37;j++) {cout << "-";}
	cout << endl;
	for (int i=0;i<10;i++)
		V[i].Vlist(i);
	cout << endl << "Press Esc to go back" << endl;
	loop:
	char c = getch();
	if (c == 27)
	{}
	else
		goto loop;
}

void Administrator::add_voter(void)
{
	ofstream ofile("Voters.txt",ios::binary);
	ofile.seekp(0,ios::end);
	for (int i=0;i<10;i++)
	{
		V[i].getVdata();
		ofile.write(reinterpret_cast<char*>(&V[i]),sizeof(V[i]));
	}
	ofile.close();
	ifstream ifile("Voters.txt",ios::binary);
	ifile.seekg(0,ios::end);
	VIndex = ifile.tellg()/sizeof(V[0]);
	cout << VIndex << endl;
}

void Administrator::add_candidate(void)
{

}

void Administrator::publish_result(void)
{

}