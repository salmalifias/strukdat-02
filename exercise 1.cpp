/*
Author		: Salma Alifia Shafira
NPM			: 140810180058
Deskripsi	: exercise-01
Tahun		: 2019
*/

#include <iostream>
#include <string.h>
using namespace std;

struct Orang {
	char nama[30];
	int umur;
	char goldar[2];
	char jk[1];
};
int main (){
	Orang orang;
	strcpy(orang.nama, "Fahmi");
	orang.umur = 10;
	strcpy(orang.goldar, "O");
	strcpy(orang.jk, "L");
	
	cout<<orang.nama<<endl;
	cout<<orang.umur<<endl;
	cout<<orang.goldar<<endl;
	cout<<orang.jk<<endl;
};
