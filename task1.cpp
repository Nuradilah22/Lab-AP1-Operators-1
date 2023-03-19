//task1 = add 8 to 4 digit number then div 3, mod 5, multiply 5
#include <iostream>
using namespace std;
int main() {
int o,p,q,r,s;
cout<<"masukkan 4 digit angka : ";
cin>>o;

p=0+8;
cout<<"\nAdd 8 to "<<o<<"="<<p;

q=p/3;
cout<<"\nDivide it by 3 = "<<q;

r=q%5;
cout<<"\n\nModulus that number with 5 = "<<r;

s=r*5;
cout<<"\nMultiply it with 5 = "<<s;
cout<<"\n\nHasil = "<<s;
    return 0;
}
