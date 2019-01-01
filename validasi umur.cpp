#include <iostream>
using namespace std;

int main ()
{
	int usia, lahir;
	
	cout <<"====================="<<endl;
	cout <<"PROGRAM VALIDASI UMUR"<<endl;
	cout <<"====================="<<endl;
	cout <<endl;
	
	cout <<"SILAHKAN MASUKKAN TAHUN KELAHIRAN ANDA = ";
	cin >>lahir;
	cout <<endl;
	
	usia = 2018 - lahir;
	if (usia<100)
	cout <<"USIA ANDA SAAT INI ADALAH = "<<usia<<"TAHUN"<<endl;
	else
	cout <<"MAAF, USIA ANDA TERLALU TUA :( "<<endl;
	
	return 0;
}
