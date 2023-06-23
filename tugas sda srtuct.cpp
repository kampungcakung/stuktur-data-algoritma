#include<iostream>
#include<string>
using namespace std;

struct mahasiswa{
	string nama;      //proses pembuatan tipe data struct
	string jurusan;   //proses pembuatan tipe data struct
	string kampus;    //proses pembuatan tipe data struct
	string lulusan;   //proses pembuatan tipe data struct
	
};

int main(){ 
	mahasiswa mhs;   //nama tipe data struct
	mhs.nama="Ragil hidayat";                              //nama variabel dari data struct
	mhs.jurusan="teknik informatika";                      //nama variabel dari data struct
	mhs.kampus="universitas muhammadiyah jakarta";         //nama variabel dari data struct
	mhs.lulusan="smk dinamika pembangunan 1 jakarta";      //nama variabel dari data struct
	
	cout<<"DATA MAHASISWA"<<endl;                         //proses pengisian data
	cout<<"------------------------"<<endl;              //proses pengisian data
	cout<<"nama : "<<mhs.nama<<endl;                     //proses pengisian data
	cout<<"jurusan : "<<mhs.jurusan<<endl;               //proses pengisian data
	cout<<"kampus : "<<mhs.kampus<<endl;                //proses pengisian data
	cout<<"lulusan : "<<mhs.lulusan<<endl;             //proses pengisian data 
	
	return 0;
}