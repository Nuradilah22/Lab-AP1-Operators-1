//task 2 = input 6 digit each digit plus with two
#include<iostream>
using namespace std;

int main(){
    int angka,h,i,j,k,l,m,n,o,p,q,r,s;
    cout<<"masukkan 6 digit angka : ";
    cin>>angka;

    h=angka%10;
    i=(angka/10)%10;
    j=(angka/100)%10;
    k=(angka/1000)%10;
    l=(angka/10000)%10;
    m=(angka/100000)%10;

   //menambahkan tiap angka dengan 2 
    n=m+2;if (m>=10){m=m%10;};
    o=l+2;if (l>=10){l=l%10;};
    p=k+2;if (k>=10){k=k%10;};
    q=j+2;if (j>=10){j=j%10;};
    r=i+2;if (i>=10){i=i%10;};
    s=h+2;if (h>=10){h=h%10;};

    cout<<"hasil setelah menambahkan 2 ke setiap angka : " <<n<<o<<p<<q<<r<<s;

    return 0;
}
