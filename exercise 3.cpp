/*
Author		: Salma Alifia Shafira
NPM			: 140810180058
Deskripsi	: exercise-03
Tahun		: 2019
*/

#include <iostream>
#include <string.h>
using namespace std;

#include <iostream>

using namespace std;

struct data{
	string NIP;
	string nama;
	int gol;
	int gaji;
};

data pegawai[20],val;

void banyakData(int &n){
	cout<<"Masukkan jumlah pegawai : ";
	cin>>n;cout<<"-------------------------------"<<endl;
}
void dataPegawai(data pegawai[],int &n){
	for (int i=0; i<n;i++){
		cout<<"Masukkan Nama Pegawai : ";
		cin.ignore(100,'\n');
		getline(cin,pegawai[i].nama);
		cout<<"Masukkan NIP Pegawai : ";cin>>pegawai[i].NIP;
		cout<<"Masukkan golongan Pegawai : ";cin>>pegawai[i].gol;
		cout<<"-------------------------------"<<endl;
	}
}

void sortingGol(data pegawai[], int &n){
	int i,index;
	for(i=1; i<n; i++){
        val = pegawai[i];
        index = i;
        while(index>0 && pegawai[index-1].gol>val.gol){
            pegawai[index]= pegawai[index-1];
            index = index-1;
        }
        pegawai[index]= val;
    }
}
void sortingNIP(data pegawai[], int &n){
	int i,index;
	for(i=1; i<n; i++){
        val = pegawai[i];
        index = i;
        while(index>0 && pegawai[index-1].NIP>val.NIP){
            pegawai[index] = pegawai[index-1];
            index = index-1;
        }
        pegawai[index]= val;
    }
    cout<<"Urutan pegawai berdasarkan NIP (Ascending)\n";
 	for (i=0; i<n;i++){
 		cout<<i+1<<". "<<pegawai[i].nama<<endl;
	 }
}
void gajiTertinggi (data pegawai[], int &n){
		cout<<"Pegawai dengan gaji tertinggi : "<<pegawai[n-1].nama<<endl;
	}
void gajiTerendah (data pegawai[], int &n){
		cout<<"Pegawai dengan gaji terendah : "<<pegawai[0].nama<<endl;
}

void daftarGaji (data pegawai[], int &n){
	for (int i=0; i<n; i++){
		if (pegawai[i].gol==1){
			pegawai[i].gaji=2000000;
		}
		else if (pegawai [i].gol==2){
			pegawai[i].gaji=3000000;
		}
		else if (pegawai [i].gol==3){
			pegawai[i].gaji=5000000;
		}
		else if (pegawai [i].gol==4){
			pegawai [i].gaji=8000000;
		}
	}
	
}

void rataRata (data pegawai [], int &n){
	int gajiTotal=0,rataGaji;
	for (int i=0 ; i<n ; i++){
		gajiTotal= gajiTotal+pegawai[i].gaji;
	}
	rataGaji=gajiTotal/n;
	cout<<"\nRata-rata gaji karyawan : "<<rataGaji<<endl;
	
}

int main(){
	int n;
	banyakData(n);
	dataPegawai(pegawai,n);
	daftarGaji(pegawai,n);
	rataRata(pegawai,n);
	sortingGol(pegawai,n);
	gajiTertinggi(pegawai,n);
	gajiTerendah(pegawai,n);
	sortingNIP(pegawai,n);
	
}
