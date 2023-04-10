#include <iostream> 
using namespace std; 

class Mahasiswa {
public:
    string nim;
    string nama; 
public: void cetak() { 
    cout << "\nNIM = " << nim;
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
        cout << "\n\nMasukan Kode Matakuliah : ";
        cin >> kode;
        cout << "Masukan Matakuliah : ";
        cin >> namaM;
        cout << "Jumlah SKS : ";
        cin >> sks;
    }
    void tampil() {
        cout << "\nKode Matakuliah : " << kode;
        cout << "\nNama Matakuliah : " << namaM;
        cout << "\nSKS : " << sks;
    }
};

int main()
{
    Mahasiswa mhs1;
    Matakuliah mk;

    cout << "Masukan NIM : ";
    cin >> mhs1.nim;
    cout << "Masukan Nama : "; 
    cin >> mhs1.nama;
    mhs1.cetak();

    mk.input();
    mk.tampil();
} 