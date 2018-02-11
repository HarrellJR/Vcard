// Jereny Harrell
// ISTE1307
// Programming Problem pythagorean theorem
// Programming a virtual card to identify someone 

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	//setting up the files so they can Address the person
	string strFileName = "address.vcf";
	ofstream fileAddress;
	string strFirst = "Natalie";
	string strLast = "Salavar";
	string strSex = "female";

	fileAddress.open(strFileName);
	fileAddress << "BEGIN:VCARD" << endl;
	fileAddress << "VERSION:2.1" << endl;
	fileAddress << "N:" << strLast << ";" << strFirst << ";;" << endl;
	fileAddress << "FN:" << strFirst << " " << strLast << endl;
	fileAddress << "Sex:" << strSex << endl;
	fileAddress << "END:VCARD" << endl;
	fileAddress.close();
	cout << "Wrote " << strFileName << endl;
    return 0;
}

