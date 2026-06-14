#include <iostream>
using namespace std;

int main(){
    int a,b,c,d = 0;

    while (true)
    {
        cout << "input nilai a -> "; cin >> a;
        cout << "input nilai b -> "; cin >> b;
        if ( a == b)
        {
            cout << "tidak dapat di eksekusi" << endl;
            cout << "silahkan input ulang" << endl;
        }else{
            break;
        }
    }

    do{
        a+=2;
        cout << "nilai a + " << 1 << " -> "<< a << endl;
        b ++;
        cout << "nilai b + " << 2 << " -> "<< b << endl;
        c = b % a;
        cout << "nilai modulus -> " << c << endl;
        d++;
        if(d == 5){
            cout << "nilai a -> " << a << endl;
            cout << "nilai b -> " << b << endl;
            cout << "nilai c -> " << c << endl;
            break;

        }
    }while(c != 0);
    cout << a << " % " << b << " = " << c << endl;

    return 0;
}