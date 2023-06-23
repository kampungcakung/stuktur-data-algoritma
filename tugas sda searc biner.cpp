#include<iostream>
using namespace std;
int main(){
    int len, i, arr[100], num, j, temp, first, last, middle;
    cout<<"masukan banyak data: ";
    cin>>len;
    cout<<"masukan "<<len<<" data: ";
    for(i=0; i<len; i++)
        cin>>arr[i];

    for(i=0; i<(len-1); i++)
    {
        for(j=0; j<(len-i-1); j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    cout<<"\ndata setelah diurutkan:\n";
    for(i=0; i<len; i++)
        cout<<arr[i]<<" ";
    
    cout<<"\n\nmasukan data yang ingin dicari: ";
    cin>>num;
    first = 0;
    last = (len-1);
    middle = (first+last)/2;
    while(first <= last)
    {
        if(arr[middle]<num)
            first = middle+1;
        else if(arr[middle]==num)
        {
            cout<<"\ndata "<<num<<" ditemukan di posisi "<<middle+1;
            break;
        }
        else
            last = middle-1;
        middle = (first+last)/2;
    }
    if(first>last)
        cout<<"\ndata "<<num<<" tidak ditemukan"<<endl;
    return 0;
}