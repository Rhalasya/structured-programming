#include<iostream>
using namespace std;

int main() {
	
	string nama, kelas;
	string nilai;
	int jumlah;
	
	getline(cin, nama);
	jumlah = nama.length();
	cin >> kelas;
	cin >> nilai;
	
	cout << "Izin memperkenalkan diri nama saya " <<nama<< " dengan jumlah huruf " <<jumlah<< ". Saya mahasiswa S1 Ilmu Komputer dari kelas " <<kelas<< ". Nilai DDP saya adalah " <<nilai<< ".";
	
	return 0;  
}
