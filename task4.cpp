//task4 
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int waktu,jam,menit,detik;

    cout<<"masukkan waktu dalam detik : ";
    cin>>waktu;

    jam=waktu/3600; 
    menit=waktu/60-(jam*60); 
    detik=waktu/1-(jam*3600)-(menit*60);

    to_string(jam);(menit);(detik);
    cout<<"Waktu dengan format HH:MM:SS adalah ="<<setw(2)<<setfill('0')<<jam<<":"<<setw(2)<<setfill('0')<<menit<<":"<<setw(2)<<setfill('0')<<detik;


    
    return 0;
}
