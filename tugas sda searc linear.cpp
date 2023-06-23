#include<iostream>
using namespace std;
int main(){
	int arr[50],i,num,index;
	cout<<"masukan data:\n";
	for(i=0; i<10; i++)
	cin>>arr[i];
	
	cout<<"\nmasukan data yang ingin dicari: ";
	cin>>num;
	for(i=0; i<10; i++){
		if(arr[i]==num)
		{
		   index=i;
		   break;
}
	}
	cout<<"\ndata ditemukan pada index no."<<index<<endl;
	return 0;
	
}
