#include <iostream>
#include <cstring>

using namespace std;

class Mahasiswa {
private:
    char* nama;
    char* jurusan;
    char* nim;
    int angkatan;
public:
    Mahasiswa() {
        nama = new char[50];
        jurusan = new char[30];
        nim = new char[15];
        angkatan = 0;
    }
    ~Mahasiswa() {
        delete[] nama;
        delete[] jurusan;
        delete[] nim;
    }
    void input() {
        cout << "Masukkan nama lengkap: ";
        cin.getline(nama, 50);
        cout << "Masukkan jurusan: ";
        cin.getline(jurusan, 30);
        cout << "Masukkan NIM: ";
        cin.getline(nim, 15);
        cout << "Masukkan angkatan: ";
        cin >> angkatan;
    }
    void output() {
        cout << endl;
        cout << "---------------------" << endl;
        cout << "BIODATA MAHASISWA" << endl;
        cout << "---------------------" << endl;
        cout << "Nama lengkap: " << nama << endl;
        cout << "Jurusan: " << jurusan << endl;
        cout << "NIM: " << nim << endl;
        cout << "Angkatan: " << angkatan << endl;
    }
};

int main() {
    Mahasiswa *mhs;
    mhs = new Mahasiswa();
    mhs->input();
    mhs->output();
    delete mhs;

}

