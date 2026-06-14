#include <iostream>
using namespace std;

int main (){
    // assignment (=)
    int a = 10;
    // kita dapat melakukan manipulasi terhadap variabel
    a = a + 3;
    cout << a << endl; 
    
    a = a - 2;
    cout << a << endl; 
    
    a = a / 2;
    cout << a << endl; 
    
    a = a * 5;
    cout << a << endl; 
    
    a = a % 2;
    cout << a << endl; 

    cout << endl;

    int b = 20;
    b += 3;
    cout << b << endl;
    
    b -= 2;
    cout << b << endl;
    
    b /= 2;
    cout << b << endl;
    
    b *= 5;
    cout << b << endl;
    
    b %= 5;
    cout << b << endl;

    return 0;
}