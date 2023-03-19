//task 3 = calculate sum of 4 digits
#include<iostream>
using namespace std;

int main()
{
    int angka,a,b,c,d;

    cout<<"Masukkan 4 digit angka : ";
    cin>>angka;
//memisahkan angka
    a=(angka)/1000;
    b=(angka-(a*1000))/100;
    c=(angka-(a*1000+b*100))/10;
    d=(angka-(a*1000+b*100+c*10));

//menampilkan penambahan
    cout<<"\n\nHasil = "<<a+b+c+d<<endl;

    return 0;
}