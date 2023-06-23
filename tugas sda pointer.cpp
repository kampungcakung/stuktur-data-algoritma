#include<stdio.h>

typedef struct{

	char nama[100];
	int nim;
	int usia;
}mahasiswa;

int main(){
//mendefinisikan variabel mhs sebagai struct mahasiswa dan memberikan nilai
mahasiswa mhs ={"Ragil",22040 , 19}; 
mahasiswa *ptr= &mhs; //mendefinisikan pointer ptr yang menunjuk ke variabel mhs 

    printf("nama mahsiswa: %s\n",mhs.nama);//mencetak nama mahasiswa
	printf("nim mahasiswa: %d\n", mhs.nim);//mencetak nim mahasiswa
	printf("usia mahasiswa: %d\n",mhs.usia);//mencetak usia mahasiswa
	
	printf("alamat memori variabel mhs: %p\n", &mhs);//mencetak alamat memori variabel mahasiswa
	printf("nilai yang ditunjuk oleh ptr: %s\n",ptr->nama);//mencetak nama mahasiswa yang ditunjuk oleh pointer ptr
	printf("alamat memori yang ditunjuk oleh ptr: %p\n",ptr);//mencetak alamat memori yang ditunjuk oleh pointer ptr
	printf("alamat memori dari prt: %p\n",&ptr);//mencetak alamat memori dari pointer ptr
	
	return 0;
}