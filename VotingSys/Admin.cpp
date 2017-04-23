#include "Admin.h"
#include<fstream>

Admin::Admin(void)
{
		ifstream ifile;
		ifile.open("Test.txt",ios::binary);
		ifile.seekg(0,ios::end);
		CIndex = ifile.tellg()/sizeof(C[0]);
		ifile.seekg(0,ios::beg);
		for (int i=0;i<CIndex;i++)
		{
			ifile.read(reinterpret_cast<char*>(&C[i]),sizeof(C[i]));
		}
		ifile.close();
		cout << CIndex << endl;

}


Admin::~Admin(void)
{
}




