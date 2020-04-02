#include <iostream>

using namespace std;

int main()
{
    char nama [20];
    double TPT, SO, MSI;
    cout << "NILAI MAHASISWA" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Nama Mahasiswa :"; cin>> nama;
    cout << endl;
    cout << "Nilai Teknik Pemrog. Terstruktur 2 :"; cin>> TPT;
    cout << "Nilai Sistem Operasi :"; cin>> SO;
    cout << "Matematika Sistem Informasi :"; cin>> MSI;
    cout << "----------------------------------------" << endl;
    cout << "Hasil Nilai Mahasiswa" << endl;
    cout << endl;
    cout << "Nilai Teknik Pemrog. Terstruktur 2 :"<<TPT<<endl;
    cout << "Nilai Sistem Operasi :"<<SO<<endl;
    cout << "Matematika Sistem Informasi :"<<MSI<<endl;
    cout << "----------------------------------------" << endl;
    double rata;
    rata = (TPT+SO+MSI)/3;
    cout << "Nilai Rata-rata Mahasiswa :"<<rata<<endl;

    return 0;
}
