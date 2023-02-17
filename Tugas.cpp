#include <iostream>
using namespace std;

class siswa {
    public:
    int nisn;
    string nama;
    float nilai;
    void masukkanDataMurid() {
        cout<<"Masukkan NISN Murid = ";cin>>nisn;
        cout<<"Masukkan Nama Murid = ";cin>>nama;
        cout<<"Masukkan Nilai Murid = ";cin>>nilai;
    }
    void printDataMurid () {
        cout<<"NISN = "<<nisn<<endl;
        cout<<"Nama = "<<nama<<endl;
        cout<<"Nilai = "<<nilai<<endl;
    }
};

class guru {
    public:
    int nisn;
    string nama;
    string mapel;
    void masukkanDataGuru () {
        cout<<"Masukkan NISN Guru = ";cin>>nisn;
        cout<<"Masukkan Nama Guru = ";cin>>nama;
        cout<<"Masukkan Mata Pelajaran Guru = ";cin>>mapel;
    }
    void printDataGuru () {
        cout<<"NISN = "<<nisn<<endl;
        cout<<"Nama Guru = "<<nama<<endl;
        cout<<"Mata Pelajaran Guru = "<<mapel<<endl;
    }
};
int main (){
    int angka;
    cout<<"Masukkan Angka 1 (Murid) dan 2 (Guru) = ";cin>>angka;
    if (angka == 1)
    {
        siswa testmurid;
        testmurid.masukkanDataMurid();
        testmurid.printDataMurid();
    }
    else if (angka == 2)
    {
        guru testguru;
        testguru.masukkanDataGuru();
        testguru.printDataGuru();
    }

}