#include <iostream>
#include <limits>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int tambah();
int kurang();
int kali();
int bagi();
int mod();


int main(int argc, char *argv[]){
    int menu;
        cout << "========= PRAKTIKUM ALPROG =========" << endl;
        cout << "=========== KELOMPOK 26 ============" << endl;
        cout << "======== K A L K U L A T O R =======" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5. Sisa hasil bagi" << endl;
        cout << "6. Exit" <<endl;
        cout << "Pilihan > ";
        std::string  line;
    while(std::getline(std::cin, line))
    {
        std::stringstream linestream(line);
        if (!(linestream >> menu))
        {
        cout << "inputan salah, silahkan inputkan lagi : " << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5. Sisa hasil bagi" << endl;
        cout << "6. Exit" <<endl;
        cout << "Pilihan > ";
             continue;
        }
        if ((menu < 1) || (menu > 6))
        {

        cout << "inputan salah, silahkan inputkan lagi : " <<endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5. Sisa hasil bagi" << endl;
        cout << "6. Exit" <<endl;
        cout << "Pilihan > ";

             continue;
        }
        char errorTest;
        if (linestream >> errorTest)
        {

        cout << "inputan salah, silahkan inputkan lagi : "<<endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5. Sisa hasil bagi" << endl;
        cout << "6. Exit" <<endl;
        cout << "Pilihan > ";
             continue;
        }
        switch(menu){

        case 1 :tambah();break;
        case 2 :kurang();break;
        case 3 :kali();break;
        case 4 :bagi();break;
        case 5 :mod();break;
        case 6 :cout<<"exit";return 0;
    }}}


int tambah(){
    float a,b,c;
    cout<<"angka pertama: ";
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
    cout<<"angka kedua: ";
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
    c=a+b;
    cout<<"Hasilnya adalah= "<<c<<endl;
    cout << "======== K A L K U L A T O R =======" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5. Sisa hasil bagi" << endl;
        cout << "6. Exit" <<endl;
        cout << "Pilihan > ";
    return 0;
}}}
int kurang(){
    float a,b,c;
    cout<<"Angka pertama: ";
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
    cout<<"Angka kedua: ";
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
    c=a-b;
    cout<<"Hasilnya adalah= " << c << endl;
     cout << "======== K A L K U L A T O R =======" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5. Sisa hasil bagi" << endl;
        cout << "6. Exit" <<endl;
        cout << "Pilihan > ";
        return 0;
}}}
int kali(){
    float a,b,c;
    cout<<"Angka pertama: ";
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
   cout<<"Angka kedua: ";
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
    c=a*b;
    cout<<"Hasilnya adalah= " << c << endl;
     cout << "======== K A L K U L A T O R =======" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5. Sisa hasil bagi" << endl;
        cout << "6. Exit" <<endl;
        cout << "Pilihan > ";
        return 0;
}}}
int bagi(){
    float a,b,c;
    cout<<"Angka pertama: ";
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
    cout<<"angka kedua: ";
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
    c=a/b;
    cout<<"Hasilnya adalah= " << c << endl;
     cout << "======== K A L K U L A T O R =======" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5. Sisa hasil bagi" << endl;
        cout << "6. Exit" <<endl;
        cout << "Pilihan > ";
        return 0;
}}}
int mod(){
    int c,a,b;

    cout<<"angka pertama: ";
   string  line;
    while(getline(std::cin, line))
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
    cout<<"Angka kedua: ";
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
    c=a%b;
    cout<<"Hasilnya adalah= " << c << endl;
     cout << "======== K A L K U L A T O R =======" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5. Sisa hasil bagi" << endl;
        cout << "6. Exit" <<endl;
        cout << "Pilihan > ";
        return 0;
}}}
