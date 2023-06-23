#include <stdio.h>
#include <stdbool.h>
#define MAX 50 // Menentukan variabel MAX sebesar 50
int data[MAX], jumlah;

void input(){ //Untuk Proses penginputan data
	int i;
	printf(" Masukkan banyak data : "); scanf("%d", &jumlah);
	for (i = 0; i<jumlah; i++){
		printf(" Data [%d] : ", i+1); scanf("%d", &data[i]);
	}
}
void printline(int count){ //Untuk menampilkan garis pembatas
	int i;
	for (i = 0; i <count - 1; i++) {
		printf("=");
	}
	printf("=\n");
}

void display() { //Untuk menampilkan array berisi inputan
	int i;
	printf(" [");
	for (i = 0; i<jumlah; i++) {
		printf("%d ", data[i]);
	}
	printf("]\n");
}
void tukar(int num1, int num2) { //Untuk proses penukaran
	int temp = data[num1];
	data[num1] = data[num2];
	data[num2] = temp;
}

int partisi(int kiri, int kanan, int pivot) { //Untuk partisi proses pengurutan data array
	int pointerKiri = kiri - 1; //pointerkiri => kotak biru
	int pointerKanan = kanan; // pointerkanan => kotak merah
	while (true) {
		while (data[++pointerKiri] < pivot) { // Melakukan proses seleksi dari kiri ke kanan selama kondisinya true
		}	
		
		while (pointerKanan > 0 && data[--pointerKanan] > pivot) { // Melakukan proses seleksi dari kanan ke kiri selama kondisinya true
		}
		
		if (pointerKiri >= pointerKanan) { // Membandingkan index kotak biru dengan kotak merah
			break;
		}else{
			printf(" Tukar Isi :%d dengan %d\n",
			data[pointerKiri], data[pointerKanan]);
			tukar(pointerKiri, pointerKanan);
		}
	}
	
	printf(" Tukar Pivot :%d dengan %d\n", data[pointerKiri], data[kanan]);
	tukar(pointerKiri, kanan);
	printf(" Update Array: ");
	display();
	puts("--------------------------");
	return pointerKiri;
}
void quickSort(int kiri, int kanan) { //Proses pengurutan dengan quicksort
	if (kanan - kiri <= 0) { //Jika index lebih kecil atau sama dengan 0 
		return;
	}else{
		int pivot = data[kanan];
		int partitionPoint = partisi(kiri, kanan, pivot);
		quickSort(kiri, partitionPoint - 1);
		quickSort(partitionPoint + 1, kanan);
	}
}

main() {
	printf("Input Array: \n\n");
	input(); //Fungsi untuk menginput data
	puts("");
	printf(" Data tak terurut : "); 
	display(); //Fungsi menampilkan inputan data
	printline(50); //Fungsi menampilkan garis
	quickSort(0, jumlah - 1); //Fungsi mengurutkan data
	printline(50); //Fungsi menampilkan garis
	puts("");
	printf(" Data terurut: ");
	display(); //Fungsi menampilkan inputan data
}

