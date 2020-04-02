#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
    public:
        string nama;
        string NPM;
        string jurusan;
        double IPK;
};

int main(int argc, char const *argv[])
{
    Mahasiswa data1;
    data1.nama = "Andre Prasetya";
    data1.NPM = "16117463";
    data1.jurusan = "SISTEM INFORMASI";
    data1.IPK = 3.1;
    Mahasiswa data2;
    data2.nama = "Ahmad Abdul";
    data2.NPM = "16127464";
    data2.jurusan = "SISTEM INFORMASI";
    data2.IPK = 3.5;
    cout << "nama dari data1: " << data1.nama << endl;
    cout << "NPM dari data1 : " << data1.NPM << endl;
    cout << "jurusan dari data1: " << data1.jurusan << endl;
    cout << "IPK dari data1: " << data1.IPK << endl;
    cout << "\n" << endl;
    cout << "nama dari data2: " << data2.nama << endl;
    cout << "NPM dari data2 : " << data2.NPM << endl;
    cout << "jurusan dari data2: " << data2.jurusan << endl;
    cout << "IPK dari data2: " << data2.IPK << endl;
    return 0;
}
