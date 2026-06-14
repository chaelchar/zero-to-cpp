#include <iostream>
using namespace std;

int main(){
    // disini kita belajar 
    /*
        ==
        !=
        >=
        <=
        >
        <
    */


    int a = 2;
    int b = 2;
    
    bool hasil1, hasil2;
    // komparasi, relation expression

    // sebanding
    hasil1 = (a == b);
    cout << a << " == " << b << " = " << hasil1 << endl;

    // tidak sebanding
    hasil1 = (a != b);
    cout << a << " != " << b << " = " << hasil1 << endl;

    // kurang dari 
    hasil1 = (a < b);
    cout << a << " < " << b << " = " << hasil1 << endl;

    // lebih dari 
    hasil1 = (a > b);
    cout << a << " > " << b << " = " << hasil1 << endl;

    // kurang dari sama dengan 
    hasil1 = (a <= b);
    cout << a << " <= " << b << " = " << hasil1 << endl;

    // lebih dari sama dengan 
    hasil1 = (a >= b);
    cout << a << " >= " << b << " = " << hasil1 << endl;

    return 0;
}