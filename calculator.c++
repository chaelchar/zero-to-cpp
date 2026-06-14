#include <iostream>
using namespace std;

int main(){
    float a,b, hasil;
    char aritmatika;
    cout << "Selamat datang" << endl;

    // masukan input dari user
    cout << "masukan nilai pertama -> ";
    cin >> a;

    cout << endl;

    cout << "masukan operator -> \n";
    cout << "tambah(+)\nkurang(-)\nbagi(:)\nkali(x)\nmodulus(%)\n";
    cout << " --> ";
    cin >> aritmatika;

    cout << endl;

    cout << "masukan nilai kedua -> ";
    cin >> b;

    if(aritmatika == '+'){
        hasil = a + b;
    }else if(aritmatika == '-'){
        hasil = a - b;
    }else if(aritmatika == 'x'){
        hasil = a * b;
    }else if(aritmatika == ':'){
        hasil = a / b;
    }else{
        cout << " no not number" << endl;
    }


    cout << a << " "<< aritmatika << " " << b << " = " << hasil << endl;

}
