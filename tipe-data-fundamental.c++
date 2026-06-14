#include <iostream>
#include <limits>
using namespace std;

int main(){
    // disini kita belajar tipe data, maks/min kapasitas tipe data, ukuran tipe data, cara cek nya juga 

    int a = 1;
    // kita ingin tau bagaimana dibelakang nilai variabel ini
    // apakah punya nilai maksimum ?? atau nilai minimum ??

    cout << a << endl;
    // cara ngeceknya besar variabel
    cout << "tipe data int :" << sizeof(a) <<" byte" << endl;

    /*
    1 byte   = 8-bit
    int      = 4 byte
    int      = 32-bit
    int      = +/- 31-bit 
            dari sini kita bisa lihat max nya
    2^31- 1 = + 2147483647 [maks] 
             = - 2147483648 [min]
    */

    cout << "Nilai maksimum int: "<<numeric_limits<int>::max() << endl;
    cout << "Nilai minimum  int: "<<numeric_limits<int>::min() << endl;

    
    long b = 1;
    cout << "tipe data long   : "<<sizeof(b) << " byte"<< endl;
    // ini masi 4 byte karena c++ kita masi kuno

    short c = 1;
    cout << "tipe data short   : " << sizeof(c) << " byte" << endl;
    // hasilnya = 2 byte -> 16-bit

    float d = 1;
    cout << "tipe data float   : " << sizeof(d) << " byte" << endl;

    char f = 'a';
    cout << "tipe data char    : " << sizeof(f) << " byte" << endl;
    
    bool g = true;
    cout << "tipe data boolean : " << sizeof(g) << " byte" << endl;


    return 0;
}