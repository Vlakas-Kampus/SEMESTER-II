#include <conio.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int jumlah_mahasiswa[70][120][90];
	int sum_mahasiswa[120];
	int jmlsekolah;
	int jmlkelas[120];
	int mahasiswa;
	cout << "Masukkan Jumlah Universitas : "; cin>>jmlsekolah;
	for(int sklh = 1;sklh <= jmlsekolah; sklh++)
	{
		cout << "Universitas Ke : " << sklh << endl;
		cout << "Masukkan Jumlah Kelas : "; cin >> jmlkelas[sklh];
		for(int kls = 1; kls <= jmlkelas[sklh]; kls++)
		{
			cout << "Input Jumlah Mahasiswa Di Kelas Ke : " << kls <<" ";
			mahasiswa = 1;
			cin >> jumlah_mahasiswa[sklh][kls][mahasiswa];
			sum_mahasiswa[sklh] += jumlah_mahasiswa[sklh][kls][mahasiswa];
			mahasiswa++;
		}
	}
	cout << "\n===================================\n";
	for(int sklh = 1;sklh <= jmlsekolah; sklh++)
	{
		cout << "Data Dari Sekolah Ke : " << sklh << endl;
		cout << "Dengan Jumlah Kelas : " << jmlkelas[sklh] << endl;
		cout << "Dan Jumlah Seluruh Mahasiswa : " << sum_mahasiswa[sklh] << endl;
  	}
	getch();
	return 0;
}