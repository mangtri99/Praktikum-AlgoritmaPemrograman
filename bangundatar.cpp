#include <iostream>
#include <limits>
#include <math.h>
#include <sstream>
#include <string>
using namespace std;
const float pi =3.14;
float luas, kel, a, b, c, r, t, s, x, z;
int PersegiPanjang();
int segitigasembarang();
int lingkaran();
int trapesium();
int jajargenjang();

int main(int argc, char *argv[])
{
        int menu;
        cout << "========= PRAKTIKUM ALPROG =========" << endl;
        cout << "=========== KELOMPOK 26 ============" << endl;
        cout<< "Hitung Luas dan Keliling Bangun Datar"<<endl;
        cout<< "1. Persegei Panjang"<<endl;
        cout<< "2. Segitiga Sembarang"<<endl;
        cout<< "3. Lingkaran"<<endl;
        cout<< "4. Trapesium" << endl;
        cout<< "5. Jajargenjang" << endl;
        cout<< "6. Keluar"<<endl;
        cout<< "Pilih = ";

string  line;
    while(getline(cin, line))
    {
        stringstream linestream(line);
        if (!(linestream >> menu))
        {
        cout<< "Input salah, masukkan lagi!"<<endl;
        cout<< "1. Persegei Panjang"<<endl;
        cout<< "2. Segitiga Sembarang"<<endl;
        cout<< "3. Lingkaran"<<endl;
        cout<< "4. Trapesium" << endl;
        cout<< "5. Jajargenjang" << endl;
        cout<< "6. Keluar"<<endl;
        cout<< "Pilih (1-6) = ";
        continue;
        }
        if ((menu < 1) || (menu > 6))
        {
        cout<< "Input salah, masukkan lagi!"<<endl;
        cout<< "1. Persegei Panjang"<<endl;
        cout<< "2. Segitiga Sembarang"<<endl;
        cout<< "3. Lingkaran"<<endl;
        cout<< "4. Trapesium" << endl;
        cout<< "5. Jajargenjang" << endl;
        cout<< "6. Keluar"<<endl;
        cout<< "Pilih (1-6) = ";
             continue;
        }
        char errorTest;
        if (linestream >> errorTest)
        {
        cout<< "Input salah, masukkan lagi!"<<endl;
        cout<< "1. Persegei Panjang"<<endl;
        cout<< "2. Segitiga Sembarang"<<endl;
        cout<< "3. Lingkaran"<<endl;
        cout<< "4. Trapesium" << endl;
        cout<< "5. Jajargenjang" << endl;
        cout<< "6. Keluar"<<endl;
        cout<< "Pilih (1-6) = ";
             continue;
        }
        switch(menu){
        case 1 :PersegiPanjang();break;
        case 2 :segitigasembarang();break;
        case 3 :lingkaran();break;
        case 4 :trapesium();break;
        case 5 :jajargenjang();break;
        case 6 :cout<<"exit";return 0;
    }
}
}
int PersegiPanjang(){
    cout<<endl<<"Program Persegi Panjang"<<endl;
    cout<<"Masukkan panjang : ";
    string  line;
    while(getline(cin, line))
    {
        stringstream linestream(line);
        if (!(linestream >> a))
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
        if (a < 0)
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
        char errorTest;
        if (linestream >> errorTest)
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
    cout <<"Masukkan lebar: ";
    string  line;
    while(getline(cin, line))
    {
        stringstream linestream(line);
        if (!(linestream >> b))
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
        if (b < 0)
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
        char errorTest;
        if (linestream >> errorTest)
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
    luas=a*b;
    kel =2*(a+b);
    cout<<endl<<"Luas persegi panjang = " << luas <<endl;
    cout<<endl<<"Keliling persegi panjang = "<<kel<<endl<<endl;
    cout<< "Hitung Luas dan Keliling Bangun Datar"<<endl;
    cout<< "1. Persegei Panjang"<<endl;
    cout<< "2. Segitiga Sembarang"<<endl;
    cout<< "3. Lingkaran"<<endl;
    cout<< "4. Trapesium" << endl;
    cout<< "5. Jajargenjang" << endl;
    cout<< "6. Keluar"<<endl;
    cout<< "Pilih = ";
    return 0;
}}}
int segitigasembarang(){
    cout<<"Program Segitiga Sembarang"<<endl;
    cout<<"Masukkan sisi a : ";
    string  line;
    while(getline(cin, line))
    {
        stringstream linestream(line);
        if (!(linestream >> a))
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
        if (a < 0)
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
        char errorTest;
        if (linestream >> errorTest)
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
    cout <<"Masukkan sisi b: ";
    string  line;
    while(getline(cin, line))
    {
        stringstream linestream(line);
        if (!(linestream >> b))
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
        if (b < 0)
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
        char errorTest;
        if (linestream >> errorTest)
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
        cout <<"Masukkan sisi c: ";
    string  line;
    while(getline(cin, line))
    {
        stringstream linestream(line);
        if (!(linestream >> c))
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
        if (c < 0)
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
        char errorTest;
        if (linestream >> errorTest)
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
    s = 0.5*(a+b+c);
    luas = sqrt(s*(s-a)*(s-b)*(s-c));
    kel = a + b + c;
    cout<<endl<<"Luas segitiga sembarang = " << luas <<endl;
    cout<<endl<<"Keliling segitiga sembarang = "<< kel <<endl<<endl;
    cout<< "Hitung Luas dan Keliling Bangun Datar"<<endl;
    cout<< "1. Persegei Panjang"<<endl;
    cout<< "2. Segitiga Sembarang"<<endl;
    cout<< "3. Lingkaran"<<endl;
    cout<< "4. Trapesium" << endl;
    cout<< "5. Jajargenjang" << endl;
    cout<< "6. Keluar"<<endl;
    cout<< "Pilih = ";
    return 0;
}}}}
int lingkaran(){
cout <<"Masukkan jari jari : ";
    string  line;
    while(getline(cin, line))
    {
        stringstream linestream(line);
        if (!(linestream >> r))
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
        if (r < 0)
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
        char errorTest;
        if (linestream >> errorTest)
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
    luas=pi*r*r;
    kel=2*pi*r;
    cout<<endl<<"Luas lingkaran = " << luas <<endl;
    cout<<endl<<"Keliling lingkaran = "<< kel <<endl<<endl;
    cout<< "Hitung Luas dan Keliling Bangun Datar"<<endl;
    cout<< "1. Persegei Panjang"<<endl;
    cout<< "2. Segitiga Sembarang"<<endl;
    cout<< "3. Lingkaran"<<endl;
    cout<< "4. Trapesium" << endl;
    cout<< "5. Jajargenjang" << endl;
    cout<< "6. Keluar"<<endl;
    cout<< "Pilih = ";
    return 0;
    }}
int trapesium(){
cout <<"Masukkan sisi a: ";
    string  line;
    while(getline(cin, line))
    {
        stringstream linestream(line);
        if (!(linestream >> a))
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
        if (a < 0)
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
        char errorTest;
        if (linestream >> errorTest)
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
    cout <<"Masukkan sisi b: ";
    string  line;
    while(getline(cin, line))
    {
        stringstream linestream(line);
        if (!(linestream >> b))
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
        if (b < 0)
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
        char errorTest;
        if (linestream >> errorTest)
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
        cout <<"Masukkan sisi tinggi: ";
    string  line;
    while(getline(cin, line))
    {
        stringstream linestream(line);
        if (!(linestream >> t))
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
        if (t < 0)
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
        char errorTest;
        if (linestream >> errorTest)
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
    luas =((a+b)*t)/2;
    x = (b-a)/2;
    z = sqrt(x*x + t*t);
    kel = a + b + (2*z);
    cout<<endl<<"Luas trapesium = " << luas <<endl;
    cout<<endl<<"Keliling trapesium = "<< kel <<endl<<endl;
    cout<< "Hitung Luas dan Keliling Bangun Datar"<<endl;
    cout<< "1. Persegei Panjang"<<endl;
    cout<< "2. Segitiga Sembarang"<<endl;
    cout<< "3. Lingkaran"<<endl;
    cout<< "4. Trapesium" << endl;
    cout<< "5. Jajargenjang" << endl;
    cout<< "6. Keluar"<<endl;
    cout<< "Pilih = ";
    return 0;
    }}}}
int jajargenjang(){
cout <<"Masukkan sisi a: ";
    string  line;
    while(getline(cin, line))
    {
        stringstream linestream(line);
        if (!(linestream >> a))
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
        if (a < 0)
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
        char errorTest;
        if (linestream >> errorTest)
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
        cout <<"Masukkan sisi b: ";
    string  line;
    while(getline(cin, line))
    {
        stringstream linestream(line);
        if (!(linestream >> b))
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
        if (b < 0)
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
        char errorTest;
        if (linestream >> errorTest)
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
        cout <<"Masukkan tinggi: ";
    string  line;
    while(getline(cin, line))
    {
        stringstream linestream(line);
        if (!(linestream >> t))
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
        if (t < 0)
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
        char errorTest;
        if (linestream >> errorTest)
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
        luas = a*t;
        kel = 2 * (a+b);
    cout<<endl<<"Luas jajargenjang = " << luas <<endl;
    cout<<endl<<"Keliling jajargenjang = "<< kel <<endl<<endl;
    cout<< "Hitung Luas dan Keliling Bangun Datar"<<endl;
    cout<< "1. Persegei Panjang"<<endl;
    cout<< "2. Segitiga Sembarang"<<endl;
    cout<< "3. Lingkaran"<<endl;
    cout<< "4. Trapesium" << endl;
    cout<< "5. Jajargenjang" << endl;
    cout<< "6. Keluar"<<endl;
    cout<< "Pilih = ";
    return 0;
    }}}}
