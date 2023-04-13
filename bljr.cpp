//Buatlah sebuah program yang menerima sebuah array bilangan bulat dan sebuah bilangan bulat k sebagai input, dan mengembalikan nilai boolean 
//yang menunjukkan apakah ada dua bilangan bulat yang berbeda dalam array tersebut yang jumlahnya sama dengan k.

//Sign Fungsi:
//bool hasTwoSum(int nums[], int n, int k);
//Input:
//Panjang array dengan panjang n.
//Sebuah array bilangan bulat nums
//Sebuah bilangan bulat k.
//Output:
//Nilai boolean yang menunjukkan apakah ada dua bilangan bulat yang berbeda dalam array tersebut yang jumlahnya sama dengan k.
//Jika bernilai benar nama hasil output 1. Jika bernilai salah maka 0.

//#include<iostream>
//using namespace std;
//
//bool hasTwoSum(int nums[], int n, int k){
//	for(int i = 0; i < n; i++){
//		for(int j = i +1; j < n; j++){
//			if (nums[i]+nums[j] == k){
//				return true;
//			}
//		}
//	}
//	return false;
//}
//
//int main(){
//	int n, k;
//	cout<<"Masukkan panjang array: ";
//	cin>>n;
//	int nums[n];
//	cout<<"Masukkan elemen array : ";
//	for(int i = 0; i < n; i++){
//		cin>>nums[i];
//	}
//	cout<<"Masukkan nilai k :";
//	cin>>k;
//	if (hasTwoSum(nums, n, k)){
//		cout<<"1"<<endl;
//	} else{
//		cout<<"0"<<endl;
//	}
//	return 0;
//}



//Buatlah sebuah program menghitung baris dan deret aritmatika menggunakan prosedur. Program memiliki dua buah prosedur dengan masing-masing memiliki 
//tiga parameter yaitu nilai awal, selisih, dan jumlah suku. Bilangan dalam baris merupakan bilangan positif. 
//Apabila terdapat bilangan negatif (kurang dari nol) dalam baris, program akan menampilkan “Not Found” lalu berhenti.
//Input :
//	- Input dapat berupa bilangan integer bernilai apa saja

//Output :
//	- baris pertama menampilkan baris aritmatika dipisahkan spasi
//	- baris kedua menampilkan deret aritmatika

//For example:
//
//Test	Input	Result
//baris(4, 2, 8);
//4 6 8 10 12 14 16 18
//88
//baris(-3, 4, 9);
//Not Found
//deret(0, -4, 6);
//0 Not Found

//#include<iostream>
//using namespace std;
//void deret(int a, int d, int n){
//	int has = (n*(2 * a + (n-1)*d))/2;
//	cout<<has;
//}
//void baris(int a, int d, int n){
//	int temp = 0;
//	for (int i = 1; i <= n; i++){
//		temp = a + (i - 1)*d;
//		if (temp >= 0){
//			cout<<temp<<" ";
//		}
//		else {
//			cout<<"Not Found";
//			exit(0);
//		}
//	}
//}
//
//int main(){
//	int a, d, n;
//	cout<<"Masukkan bilangan : ";
//	cin>>a>>d>>n;
//	baris(a, d, n);
//	cout<<endl;
//	deret(a, d, n);
//	
//	return 0;
//	
//}




//Buatlah sebuah program menghitung perkalian 2 matriks. Program harus bisa mengkalikan 2 matriks dengan kondisi kolom matriks ke-1 
//harus sama dengan baris matriks ke-2. Apabila kondisi tersebut tidak memenuhi maka akan mengeluarkan “Perkalian matriks tidak dapat dilakukan”.
//Input: 
//• Bilangan Integer apa saja 
//Output: 
//• Menampilkan hasil perkalian 2 matriks




//Buatlah sebuah fungsi dengan nama vPtr. Fungsi ini memiliki 2 parameter:
//1. Parameter pertama berupa void pointer yang nantinya akan diisi nilai integer ataupun char.
//2. Parameter kedua adalah sebuah variabel char yang akan diisi dengan tipe perintah.
//
//Ketentuan:
//1. Parameter char pada fungsi ini hanya akan diisi dengan huruf i atau c
//2. Jika char berisi huruf "i" maka pointer akan berisi sebuah integer, maka tampilkan 'ing' sebanyak nilai dalam pointer.
//3. Jika char berisi hurf "c" maka pointer akan berisi sebuah char, maka tampilkan 'ceng' diikuti karakter yang ada pada pointer dipisahkan dengan spasi


#include <iostream>

using namespace std;

void vPtr(void* ptr, char command) {
    if (command == 'i') {
        int* intPtr = (int*) ptr;
        for (int i = 0; i < *intPtr; i++) {
            cout << "ing ";
        }
        cout << endl;
    } else if (command == 'c') {
        char* charPtr = (char*) ptr;
        cout << "ceng " << *charPtr << endl;
    } else {
        cout << "Command tidak valid." << endl;
    }
}

int main() {
    int intVal;
    cin>>intVal;
    char charVal;
    cout<<charVal
    void* ptr = &intVal;
    vPtr(ptr, 'i');
    ptr = &charVal;
    vPtr(ptr, 'c');
    return 0;
}


//#include<iostream>
//using namespace std;
//void vPtr(void* p, char type){
//	if (type == 'i'){
//		for (int i = 0; i < *(int *)p; i++){
//			cout<<"ing"<<endl;
//		}
//	}
//	else if (type == 'c'){
//		cout<<"ceng"<< *(char*)p<<endl;
//	}
//}
//int main(){
//  int p;
//  cin>>p;
//  char type;
//  cin.get(type); 
//  vPtr(p, type);
//}

