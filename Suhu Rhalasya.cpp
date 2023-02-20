#include<iostream>
using namespace std;

int main (){
	double celcius, kelvin, reamur, fahr;
	
	cin >> celcius;
	kelvin = celcius+273;
	reamur = celcius*0.8;
	fahr = (celcius*1.8) + 32;
	
	cout << "Celcius : " << celcius;
	cout << endl;
	cout << "Reamur : " << reamur;
	cout << endl;
	cout << "Fahrenhait : " << fahr;
	cout << endl;
	cout << "Kelvin : " << kelvin;
	
	return 0;
}
