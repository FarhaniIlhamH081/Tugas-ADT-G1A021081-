#include<iostream>
using namespace std;

int main ()
{
    int v,t;

    cout <<"Program Penghitung Jarak Tempuh \n";
    cout <<"=============================== \n";

    cout <<"Masukkan Kecepatan = ";
    cin >> v;

    cout <<"Masukkan Waktu     = ";
    cin >> t;

    int JarakTempuh = v*t;

    cout <<"Jarak Tempuhnya Adalah = " << JarakTempuh;
    return 0;
}
