#include <iostream>
using namespace std;

int main(){

    for (int i = 0; i <= 10; i++)
    {
        if(i == 5){
            cout << endl;
            continue;
        }
        cout << i << endl;
    }
    cout << "akhir dari program" << endl;
    

    return 0;
}