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


int main()
{
    std::cout << "Hello World!\n";
}

