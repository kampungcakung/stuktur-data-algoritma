#include <iostream>
#include <string>
using namespace std;

int main(){
	
	//deklarasi variabel
	
	int pilih[100],jumlah[100],sub_total[100],harga[100];
	string menu[100];
	int total_bayar;
	int tunai;
	int sisa;
	int i=0;
	bool selesai=false;

	//deklarasi menu dan harga
	cout<<"===========DAFTAR MENU MAKANAN & MINUMAN WARUNG SUKSES==========="<<endl;
    cout<<"1. Bakso Biasa				Rp. 18.000"<<endl;
    cout<<"2. Bakso Jumbo				Rp. 25.000"<<endl;
    cout<<"3. Nasi goreng               		Rp. 15.000"<<endl;
    cout<<"4. Ikan bakar sambal hijau   		Rp. 20.000"<<endl;
    cout<<"5. Tea (Es/panas)			Rp. 2.000"<<endl;
    cout<<"6. Jeruk (Es/panas)			Rp. 3.000"<<endl;
    cout<<"--------------------------------------------------------------"<<endl;
    
	cout<<"Tekan 0 jika selesai melakukan pemesanan"<<endl<<endl;
    
    //pilih menu dan jumlah yang dipesan
    while(selesai==false){
    	
    	cout<<"Pilih Menu : ";
    	cin>>pilih[i];
    	
    	if (pilih[i]<=6){
    		
    		if (pilih[i]==0){
    			selesai=true;
			}else {
				switch (pilih[i]){
		    		case 1 : menu[i]="Bakso Biasa     ";          harga[i]=18000; break;
		    		case 2 : menu[i]="Bakso Jumbo     ";          harga[i]=25000; break;
		    		case 3 : menu[i]="Nasi goreng  	  ";          harga[i]=15000; break;
		    		case 4 : menu[i]="Ikan bakar sambal hijau";   harga[i]=20000; break;
		    		case 5 : menu[i]="Tea (es/panas)  ";          harga[i]=2000; break;
		    		case 6 : menu[i]="Jeruk (es/panas)";          harga[i]=3000; break;
		    		default : menu[i]="";                         harga[i]=0;
				}
				
				cout<<"Jumlah Porsi "<<menu[i]<<" : ";
		    	cin>>jumlah[i];
		    	cout<<endl;
		    	
		    	//menghitung total harga
		    	sub_total[i]=jumlah[i]*harga[i];
		    	
		    	total_bayar+=sub_total[i];
	    		i++;
			}
		} else {
			cout<<"Menu yang dipilih tidak sesuai"<<endl;
			cout<<endl;
		}
    
	}
	
	//Output total harga
	cout<<endl;
	cout<<"                 INVOICE PEMBELIAN BAKSO SUKSES"<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"No	Nama Menu    	  	Harga		Jumlah        Sub Total "<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	for (int a=0;a<i;a++){
		  cout<<a+1<<"	"<<menu[a]<<"	"<<harga[a]<<"		"<<jumlah[a]<<"		"<<sub_total[a]<<endl;
	}
	{
	
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"Total Bayar = Rp."<<total_bayar<<endl;	
}

//proses pembayaran
cout<<"\n==================================================== \nmasukan nominal uang= Rp.";
cin>>tunai;

//menghitung apakah uang mencukupi atau kurang
sisa=tunai-total_bayar;
if(tunai<total_bayar){
	cout<<"maaf uang anda tidak mencukupi"<<endl;
}else{
	cout<<"uang kembalian= Rp. "<<sisa<<endl;
}

cout<<"\n================================================\n----TERIMA KASIH ATAS KUNJUNGANNYA!----\n=========================================\n";
}
