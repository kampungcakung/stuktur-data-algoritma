#include <iostream>
using namespace std;
void merge(int arr[], int left, int middle, int right, bool ascending) {
int i, j, k;
    int n1 = middle - left + 1;
    int n2 = right - middle;

// Buat array sementara untuk penyimpanan sementara
    int L[n1], R[n2];
// Salin data ke array sementara L dan R
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[middle + 1 + j];
// Gabungkan array sementara ke array utama berdasarkan urutan
    i = 0;  // Indeks awal subarray kiri
    j = 0;  // Indeks awal subarray kanan
    k = left;  // Indeks awal subarray gabungan
while (i < n1 && j < n2) {
	if ((ascending && L[i] <= R[j]) || (!ascending && L[i] >= R[j])) {
arr[k] = L[i];
          	  i++;
     	   } else {
          	  arr[k] = R[j];
           	 j++;
      	  }
       	 k++;
   	 }



// Salin elemen yang tersisa dari array L jika ada
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
// Salin elemen yang tersisa dari array R jika ada
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int left, int right, bool ascending) {
    if (left < right) {
        int middle = left + (right - left) / 2;
// Panggil rekursif mergeSort untuk subarray kiri dan kanan
        mergeSort(arr, left, middle, ascending);
        mergeSort(arr, middle + 1, right, ascending);
// Gabungkan subarray yang sudah terurut
        merge(arr, left, middle, right, ascending);
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}



int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    int choice;
    bool ascending = true;

    cout << "Pilih urutan: " << endl;
    cout << "1. Menaik (Ascending)" << endl;
    cout << "2. Menurun (Descending)" << endl;
    cout << "Masukkan pilihan: ";
    cin >> choice;



















switch (choice) {
        case 1:
            ascending = true;
            break;
        case 2:
            ascending = false;
            break;
        default:
            cout << "Pilihan tidak valid. Mengurutkan secara menaik secara default." << endl;
            break;
    }

    cout << "Array sebelum diurutkan: ";
    printArray(arr, size);

    mergeSort(arr, 0, size - 1, ascending);

    cout << "Array setelah diurutkan: ";
    printArray(arr, size);

    return 0;
}
