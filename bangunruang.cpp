#include <iostream>
#include <limits>
#include <math.h>
#include <sstream>
#include <string>
using namespace std;

const float pi =3.14;

float luas, vol, alas, alasB, alasC, t, t2, sisi, p, l, r, lp;
int balok();
int bola();
int limas();
int prisma();
int tabung();

int main(int argc, char *argv[])
{
    int menu;
        cout << "============= PRAKTIKUM ALPROG =================" << endl;
        cout << "================= KELOMPOK 26 ==================" << endl;
        cout<< "Menghitung Volume dan Luas Permukaan Bangun Datar"<<endl;
        cout<< "================================================="<<endl;
        cout<< "Pilihlah salah satu menu yang ingin di hitung : "<<endl;
        cout<< "1. Balok"<<endl;
        cout<< "2. Bola"<<endl;
        cout<< "3. Limas Segitiga"<<endl;
        cout<< "4. Prisma Segitiga" << endl;
        cout<< "5. Tabung" << endl;
        cout<< "6. Keluar" << endl;
        cout<< "Pilih = ";

        string  line;
    while(getline(cin, line))
    {
        stringstream linestream(line);
        if (!(linestream >> menu))
        {
        cout << "inputan salah, silahkan inputkan lagi :" << endl;
        cout << "1. Balok" << endl
             << "2. Bola" << endl
             << "3. Limas Segitiga" << endl
             << "4. Prisma Segitiga" << endl
             << "5. Tabung" << endl
             << "6. Keluar" << endl <<endl;
        cout <<"Pilih (1-6): ";
             continue;
        }
        if ((menu < 1) || (menu > 6))
        {
        cout << "inputan salah, silahkan inputkan lagi :" << endl;
        cout << "1. Balok" << endl
             << "2. Bola" << endl
             << "3. Limas" << endl
             << "4. Prisma" << endl
             << "5. Tabung" << endl
             << "6. Keluar "<< endl<<endl;
         cout<<"Pilih(1-6): ";
             continue;
        }
        char errorTest;
        if (linestream >> errorTest)
        {
        cout << "inputan salah, silahkan inputkan lagi :" << endl;
        cout << "1. Balok" << endl
             << "2. Bola" << endl
             << "3. Limas segitiga" << endl
             << "4. Prisma segitiga" << endl
             << "5. Tabung" << endl
             << "6. Keluar" << endl<<endl;
         cout<<"Pilih (1-6): ";
             continue;
        }
        switch(menu){
        case 1 :balok();break;
        case 2 :bola();break;
        case 3 :limas();break;
        case 4 :prisma();break;
        case 5 :tabung();break;
        case 6 :cout<<"exit";return 0;
    }
}
}
int balok(){
    cout<<endl<<"Program Volume Balok"<<endl;
    cout<<"Masukkan Panjang Balok: ";
    string  line;
    while(getline(cin, line))
    {
        stringstream linestream(line);
        if (!(linestream >> p))
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
        if (p < 0)
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
    cout<<"Masukkan Lebar Balok: ";
    string  line;
    while(getline(std::cin, line))
    {
        stringstream linestream(line);
        if (!(linestream >> l))
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
        if (l < 0)
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
    cout<<"Masukkan Tinggi Balok: ";
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
    lp = 2*(p*l + p*t + l*t);
    vol=p*l*t;
    cout<<endl<<"Luas Permukaan Balok= "<<lp<<endl;
    cout<<endl<<"Volume Balok= "<<vol<<endl<<endl;
  cout<< "Pilihlah salah satu menu yang ingin di hitung : "<<endl;
        cout<< "1. Balok"<<endl;
        cout<< "2. Bola"<<endl;
        cout<< "3. Limas Segitiga"<<endl;
        cout<< "4. Prisma Segitiga" << endl;
        cout<< "5. Tabung" << endl;
        cout<< "6. Keluar" << endl;
        cout<< "Pilih = ";
    cout<<"Masukkan pilihan anda(1-6): ";
    return 0;
}}}}

int bola(){
    cout<<endl<<"Program Volume Bola"<<endl;
    cout<<"Masukkan Jari-jari Bola: ";
    string  line;
    while(getline(cin, line))
    {
        stringstream linestream(line);
        if (!(linestream >> r))
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
        if (r < 1)
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
    lp=4*pi*r*r;
    vol=pi*r*r*r*4/3;
    cout<<endl<<"Luas Permukaan Bola= "<<lp<<endl;
    cout<<endl<<"Volume Bola= "<<vol<<endl;
    cout<< "Pilihlah salah satu menu yang ingin di hitung : "<<endl;
    cout<< "1. Balok"<<endl;
    cout<< "2. Bola"<<endl;
    cout<< "3. Limas Segitiga"<<endl;
    cout<< "4. Prisma Segitiga" << endl;
    cout<< "5. Tabung" << endl;
    cout<< "6. Keluar" << endl;
    cout<< "Pilih = ";
    return 0;
}}

int limas(){
    cout<<endl<<"Program Volume Limas Segitiga"<<endl;
    cout<<"Masukkan Alas Segitiga: ";
    string  line;
    while(getline(cin, line))
    {
        stringstream linestream(line);
        if (!(linestream >> alas))
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
        if (alas < 0)
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
    cout<<"Masukkan Tinggi Segitiga: ";
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
    cout<<"Masukkan Tinggi Limas: ";
    string  line;
    while(getline(cin, line))
    {
        stringstream linestream(line);
        if (!(linestream >> t2))
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
        if (t2 < 0)
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
    lp=4*(0.5*alas*t);
    vol=((0.5*alas*t)*t2)/3.0;
    cout<<endl<<"Luas Permukaan Limas Segitiga = "<<lp<<endl;
    cout<<endl<<"Volume Limas Segitiga = "<<vol<<endl<<endl;
    cout<< "Pilihlah salah satu menu yang ingin di hitung : "<<endl;
    cout<< "1. Balok"<<endl;
    cout<< "2. Bola"<<endl;
    cout<< "3. Limas Segitiga"<<endl;
    cout<< "4. Prisma Segitiga" << endl;
    cout<< "5. Tabung" << endl;
    cout<< "6. Keluar" << endl;
    cout<< "Pilih = ";
    return 0;
}}}}

int prisma(){
    cout<<endl<<"Program Volume Prisma Segitiga"<<endl;
    cout<<"Masukkan Alas Segitiga: ";
    string  line;
    while(getline(cin, line))
    {
        stringstream linestream(line);
        if (!(linestream >> alas))
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
        if (alas < 0)
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
    cout<<"Masukkan Sisi Segitiga B: ";
    string  line;
    while(getline(cin, line))
    {
        stringstream linestream(line);
        if (!(linestream >> alasB))
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
        if (alasB < 0)
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
    cout<<"Masukkan Sisi Segitiga C: ";
    string  line;
    while(getline(cin, line))
    {
        stringstream linestream(line);
        if (!(linestream >> alasC))
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
        if (alasC < 0)
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
    cout<<"Masukkan Tinggi Segitiga: ";
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
    cout<<"Masukkan Tinggi Prisma: ";
    string  line;
    while(getline(cin, line))
    {
        stringstream linestream(line);
        if (!(linestream >> t2))
        {
    cout << "inputan salah, silahkan inputkan lagi : " ;
             continue;
        }
        if (t2 < 0)
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
    lp=((2*(0.5*alas*t))+((alas+alasB+alasC)*t2));
    vol=((0.5*alas*t)*t2);
    cout<<endl<<"Luas Permukaan Prisma Segitiga= "<<lp<<endl;
    cout<<endl<<"Volume Prisma Segitiga= "<<vol<<endl;
    cout<< "Pilihlah salah satu menu yang ingin di hitung : "<<endl;
    cout<< "1. Balok"<<endl;
    cout<< "2. Bola"<<endl;
    cout<< "3. Limas Segitiga"<<endl;
    cout<< "4. Prisma Segitiga" << endl;
    cout<< "5. Tabung" << endl;
    cout<< "6. Keluar" << endl;
    cout<< "Pilih = ";
    return 0;

}}}}}}

int tabung(){
    cout<<endl<<"Program Volume Tabung"<<endl;
    cout<<"Jari-Jari Alas: ";
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
    cout<<"Tinggi Tabung: ";
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
    lp=2*pi*r*(r+t);
    vol=pi*(r*r)*t;
    cout<<endl<<"Luas Permukaan Tabung= "<<lp<<endl;
    cout<<endl<<"Volume Tabung= "<<vol<<endl;
    cout<< "Pilihlah salah satu menu yang ingin di hitung : "<<endl;
    cout<< "1. Balok"<<endl;
    cout<< "2. Bola"<<endl;
    cout<< "3. Limas Segitiga"<<endl;
    cout<< "4. Prisma Segitiga" << endl;
    cout<< "5. Tabung" << endl;
    cout<< "6. Keluar" << endl;
    cout<< "Pilih = ";
    return 0;
}}}


