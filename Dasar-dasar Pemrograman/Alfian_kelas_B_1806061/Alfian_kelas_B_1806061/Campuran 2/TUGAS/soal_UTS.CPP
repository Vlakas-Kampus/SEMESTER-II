#include <stdio.h>
#include <conio.h>
#include <iostream.h>


int main(){
	char Nama_Mahasiswa_i[10][30];
	char NPM[10][8];
	float Nilai_absen[10];
	float Nilai_tugas[10];
	float Nilai_uts[10];
	float Nilai_uas[10];
	float Nilai_akhir[10];

	char Nilai_mutu[6];
	int nomor =1;
	cout << "===========================================\n" <<endl;
	for(int a=0; a<2; a++){
		cout <<" Penilaian Ke :" << nomor <<endl;
		nomor++;
		cout << " Nama Mahasiswa/i :"; cin >> Nama_Mahasiswa_i[a];
		cout << " NPM :"; cin >> NPM[a];
		cout << " Nilai Absen :"; cin >> Nilai_absen[a];
		cout << " Nilai Tugas :"; cin >> Nilai_tugas[a];
		cout << " Nilai UTS :"; cin >> Nilai_uts[a];
		cout << " Nilai UAS :"; cin >> Nilai_uas[a];
		Nilai_akhir[a] = (0.10 * Nilai_absen[a])+(0.25 * Nilai_tugas[a])+(0.30 * Nilai_uts[a])+(0.35 * Nilai_uas[a]);
		cout << "===========================================\n" <<endl;
	}
 	clrscr;
 	cout << "===========================================\n" <<endl;
 	for (int a=0; a<2; a++){
 		nomor =1;
 		cout << "Penilaian Ke :" << nomor <<endl;
 		nomor++;
 		cout << " Nama Mahasiswa/i :" << Nama_Mahasiswa_i[a] << endl;
 		cout << " NPM :" << NPM[a] <<endl;
 		cout << " Nilai Akhir :" << Nilai_akhir[a] <<endl;
 		if(Nilai_akhir[a]>=80 && Nilai_akhir[a] <=100) Nilai_mutu[a] ='A';
 		else if (Nilai_akhir[a]>=70 && Nilai_akhir[a] <=79) Nilai_mutu[a] ='B';
 		else if (Nilai_akhir[a]>=60 && Nilai_akhir[a] <=69) Nilai_mutu[a] ='C';
 		else if (Nilai_akhir[a]>=40 && Nilai_akhir[a] <=59) Nilai_mutu[a] ='D';
 		else if (Nilai_akhir[a]>=0 && Nilai_akhir[a] <=39) Nilai_mutu[a] ='E';
 		cout << " Nilai Mutu :" << Nilai_mutu[a] <<endl;
 		cout << " Keterangan Akhir :";
 		if(Nilai_akhir[a]>=60 && Nilai_akhir[a]<=100) cout <<"SELAMAT ANDA LULUS";
 		else if(Nilai_akhir[a]>=0 && Nilai_akhir[a]<=59) cout <<"MAAF ANDA TIDAK LULUS";

 	}
   getch();
	return 0;
}
