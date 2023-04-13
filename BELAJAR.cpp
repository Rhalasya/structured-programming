//CSTRING, FUNGSI, POINTER, CLASS
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//// Contoh fungsi yang menerima parameter pointer
//void swap(int* x, int* y) {
//    int temp = *x;
//    *x = *y;
//    *y = temp;
//}
//
//// Contoh class yang memiliki constructor dan method
//class Person {
//    private:
//        char name[50];
//        int age;
//    public:
//        Person(const char* _name, int _age) {
//            strcpy(name, _name);
//            age = _age;
//        }
//        void printInfo() {
//            cout << "Nama: " << name << endl;
//            cout << "Umur: " << age << endl;
//        }
//};
//
//int main() {
//    int a;
//    int b;
//    cin>>a>>b;
//    cout << "Sebelum swap:" << endl;
//    cout << "a = " << a << endl;
//    cout << "b = " << b << endl;
//    swap(&a, &b);
//    cout << "Setelah swap:" << endl;
//    cout << "a = " << a << endl;
//    cout << "b = " << b << endl;
//
//    // Contoh penggunaan c string
//    char str1[10] = "Hello_";
//    char str2[10] = "World";
//    strcat(str1, str2);
//    cout << "str1 + str2 = " << str1 <<endl;
//
//    // Contoh penggunaan class
//    Person p("John Doe", 30);
//    p.printInfo();
//
//    return 0;
//}


//STRUCT
#include<iostream>
using namespace std;

struct biodata{
	string nama;
	int umur;
	char kelas;
	string alamat;
};

int main(){
	biodata via;
	biodata exo;
	
	via.nama = "Viaa Oktavia";
	via.umur = 19;
	via.kelas = 'A';
	via.alamat = "Way Kandis";
	
	cout<<"nama saya adalah "<<via.nama<<endl;
	cout<<"umur saya "<<via.umur<<endl;
	cout<<"kelas saya adalah "<<via.kelas<<endl;
	cout<<"alamat saya di "<<via.alamat<<endl;
	cout<<"========================================"<<endl;
	
	exo.nama = "EXO";
	exo.umur = 11;
	exo.kelas = 'L';
	exo.alamat = "Korea";
	
	cout<<"nama idola saya adalah "<<exo.nama<<endl;
	cout<<"umur mereka "<<exo.umur<<endl;
	cout<<"kelas mereka adalah "<<exo.kelas<<endl;
	cout<<"alamat mereka di "<<exo.alamat<<endl;
	
	
}

//LOOP
//Kasus Jika bilangan tersebut dalam interval 1-9, program mencetak representasi bahasa Inggris dalam huruf kecil.
//Jika bilangan lebih besar dari 9 dan genap, program mencetak "genap".
//Jika bilangan lebih kecil dari 9 dan ganjil, program mencetak "ganjil".
//Setiap kali program mencetak output, dilakukan juga pemanggilan fungsi endl untuk memindahkan kursor ke baris baru.
//#include <iostream>
//using namespace std;
//
//int main() {
//    int a, b;
//    cin >> a >> b;
//
//    for (int i = a; i <= b; i++) {
//        if (i >= 1 && i <= 9) {
//            string huruf[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
//            cout << huruf[i - 1] << endl;
//        }
//        else if (i > 9 && i % 2 == 0) {
//            cout << "even" << endl;
//        }
//        else {
//            cout << "odd" << endl;
//        }
//    }
//
//    return 0;
//}



//FUNCTION
// Untuk Kasus fungsi int max_of_four(int a, int b, int c, int d) yang mengembalikan maksimum empat argumen yang diterimanya.
//#include <iostream>
//using namespace std;
//
//int max_of_four(int a, int b, int c, int d) {
//    int max = a;
//    if (b > max) {
//        max = b;
//    }
//    if (c > max) {
//        max = c;
//    }
//    if (d > max) {
//        max = d;
//    }
//    return max;
//}
//
//int main() {
//    int a, b, c, d;
//    cin >> a >> b >> c >> d;
//
//    int max = max_of_four(a, b, c, d);
//    cout << max << endl;
//
//    return 0;
//}





//POINTER
//Fungsi dideklarasikan dengan tipe pengembalian batal, sehingga tidak ada nilai untuk dikembalikan. Ubah nilai dalam memori sehingga berisi jumlah dan perbedaan absolutnya.
//a' = a + b
//b' = |a-b|
//#include <iostream>
//#include <cstdlib> // digunakan untuk fungsi abs()
//using namespace std;
//
//void update(int *a, int *b) {
//    int temp = *a; // simpan nilai awal a
//    *a += *b;
//    *b = abs(temp - *b); // hitung selisih dan ambil nilai absolutnya
//}
//
//int main() {
//    int a, b;
//    cin >> a >> b;
//
//    update(&a, &b);
//
//    cout << a << endl;
//    cout << b << endl;
//
//    return 0;
//}



//#include <iostream>
//#include <cstring> // digunakan untuk CString
//using namespace std;
//
//// definisikan struct Mahasiswa
//struct Mahasiswa {
//    char nama[50];
//    int nim;
//};
//
//// fungsi untuk menampilkan data mahasiswa dari pointer ke struct Mahasiswa
//void tampilkanMahasiswa(Mahasiswa *mhs) {
//    cout << "Nama: " << mhs->nama << endl;
//    cout << "NIM: " << mhs->nim << endl;
//}
//
//// fungsi untuk mengubah nama mahasiswa dengan menggunakan pointer ke CString
//void ubahNama(Mahasiswa *mhs, const char *namaBaru) {
//    strcpy(mhs->nama, namaBaru);
//}
//
//int main() {
//    // membuat objek dari struct Mahasiswa
//    Mahasiswa mhs1;
//    // mengisi data ke objek
//    strcpy(mhs1.nama, "Andi");
//    mhs1.nim = 12345;
//
//    // menampilkan data mahasiswa menggunakan fungsi tampilkanMahasiswa
//    tampilkanMahasiswa(&mhs1);
//
//    // mengubah nama mahasiswa menggunakan fungsi ubahNama
//    const char *namaBaru = "Budi";
//    ubahNama(&mhs1, namaBaru);
//
//    // menampilkan data mahasiswa setelah diubah nama menggunakan fungsi tampilkanMahasiswa
//    tampilkanMahasiswa(&mhs1);
//
//    return 0;
//}



//#include <iostream>
//#include <cstring>
//using namespace std;
//
//// definisi class Mahasiswa
//class Mahasiswa {
//public:
//    char *nama;
//    int nim;
//public:
//    // constructor
//    Mahasiswa(const char *n, int ni) {
//        nama = new char[strlen(n)+1];
//        strcpy(nama, n);
//        nim = ni;
//    }
//    // destructor
//    ~Mahasiswa() {
//        delete[] nama;
//    }
//    // getter nama
//    char* getNama() {
//        return nama;
//    }
//    // getter nim
//    int getNIM() {
//        return nim;
//    }
//};
//
//// fungsi untuk menampilkan data mahasiswa dari objek Mahasiswa
//void tampilkanMahasiswa(Mahasiswa &mhs) {
//    cout << "Nama: " << mhs.getNama() << endl;
//    cout << "NIM: " << mhs.getNIM() << endl;
//}
//
//// fungsi untuk mengubah nama mahasiswa menggunakan pointer ke CString
//void ubahNama(Mahasiswa &mhs, const char *namaBaru) {
//    char *temp = new char[strlen(namaBaru)+1];
//    strcpy(temp, namaBaru);
//    delete[] mhs.getNama();
//    mhs.nama = temp;
//}
//
//int main() {
//    // membuat objek Mahasiswa
//    Mahasiswa mhs1("Andi", 12345);
//
//    // menampilkan data mahasiswa menggunakan fungsi tampilkanMahasiswa
//    tampilkanMahasiswa(mhs1);
//
//    // mengubah nama mahasiswa menggunakan fungsi ubahNama
//    const char *namaBaru = "Budi";
//    ubahNama(mhs1, namaBaru);
//
//    // menampilkan data mahasiswa setelah diubah nama menggunakan fungsi tampilkanMahasiswa
//    tampilkanMahasiswa(mhs1);
//
//    return 0;
//}








