#include <iostream>
using namespace std;

int main(){
    int f,x,y,n;
    cout << "input nilai n -> "; cin >> n;

    x = 1;
    y = 0;
    for (int i = 0; i < n; i++)
    {
        f = x + y;
        y = x;
        x = f;
        cout << f << endl;
    }
    

    return 0;
}