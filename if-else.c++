#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "masukan nilai a -> ";
    cin >> a;

    if (a < 5)
    {
        cout << "lebih kecil dari 5" << endl;
    }else if(a == 5){
        cout << "sama dengan 5 " << endl;
    }else{
        cout << "lebih besar dari 5" << endl;
    }

    cout << "selesai" << endl;
    

    return 0;
}