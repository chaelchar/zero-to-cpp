#include <iostream>
using namespace std;

int main(){
    // disini operator logika: not, and, or
    
    int a = 3;
    int b = 2;
    bool hasil;

    hasil = (a==b);
    cout << a << " == "<< b << " = " << hasil << endl;

    // not
    hasil = !(a==b);
    cout << a << " == "<< b << " != " << hasil << endl;
    
    // and
    hasil = (a == 3) and (b == 2);
    cout << "true  and true" <<  " -> "<< hasil << endl;
    hasil = (a == 2) and (b == 2);
    cout << "false and true" <<  " -> "<< hasil << endl;
    hasil = (a == 3) && (b == 3);
    cout << "true  and false" << " -> "<< hasil << endl;
    hasil = (a == 2) && (b == 3);
    cout << "false and false" << " -> "<< hasil << endl;

    cout << endl;
    // or
    hasil = (a == 3) or (b == 2);
    cout << "true  or true" <<  " -> "<< hasil << endl;
    hasil = (a == 2) or (b == 2);
    cout << "false or true" <<  " -> "<< hasil << endl;
    hasil = (a == 3) || (b == 3);
    cout << "true  or false" << " -> "<< hasil << endl;
    hasil = (a == 2) || (b == 3);
    cout << "false or false" << " -> "<< hasil << endl;
    return 0;
}