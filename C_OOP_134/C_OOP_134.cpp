#include <iostream> 
using namespace std; 

class Mahasiswa {
public:
    string nim;
    string nama; 
public: void cetak() { 
    cout << "NIM = " << nim;
    cout << "\nNama = " << nama;
    }
};

class Matakuliah {
private:
    string kode;
    string namaM;
    int sks;
public:
    void input() { 
        cout << "Masukan Kode Matakuliah : ";
        cin >> kode;
        cout << "Masukan Nama Matakuliah : ";
        cin >> namaM;
        cout << "Jumlah SKS : ";
        cin >> sks;
    }
    void tampil() {
        cout << "Kode Matakuliah : " << kode;
        cout << "Nama Matakuliah : " << namaM;
        cout << "SKS : " << sks;
    }
};

int main()
{
    Mahasiswa mhs1;
    Matakuliah mk;

    cout << "Masukan NIM : ";
    cout << mhs1.nim;
    cout << "Masukan Nama : ";
    cin >> mhs1.nama;
    mhs1.cetak();

    mk.input();
    mk.tampil();
}