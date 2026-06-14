#include <iostream>
using namespace std;

int main(){ 
    // disini kita belajar tentang aritmatika, yaitu penjumlahan, pengurangan, dll

    int a = 6;
    int b = 4;
    int hasil;
    // operator [+|-|*|\|%]


    // penjumlahan
    hasil = a + b;
    cout << a << " + " << b << " = " << hasil << endl;

    // pengurangan
    hasil = a - b;
    cout << a << " - " << b << " = " << hasil << endl;
    
    // perkalian
    hasil = a * b;
    cout << a << " x " << b << " = " << hasil << endl;

    // pembagian
    hasil = a / b;
    cout << a << " : " << b << " = " << hasil << endl;

    // modulus
    hasil = a % b;
    cout << a << " % " << b << " = " << hasil << endl;

    // urutan eksekusi
    // kukabataku (kurung, kali, bagi, tambah, kurang)
    hasil = (a + b) * a;
    cout << "( " << a << " + " << b << ")" << " x " << a << " = "<< hasil << endl;
    return 0;
}