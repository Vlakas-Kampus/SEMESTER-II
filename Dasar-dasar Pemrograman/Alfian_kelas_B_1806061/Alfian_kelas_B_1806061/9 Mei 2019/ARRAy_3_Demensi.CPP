//Array Dimensi 3
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <iomanip.h>

int main()
{
int i,j,k;
int data_jual[2][3][2];
clrscr();
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
for(k=0;k<2;k++)
{
cout<<"Data Tahun Ke -"<<i<<endl;
cout<<"Data Ke -"<<j<<" "<<k<<endl;
cout<<"Jumlah Penjualan :";
cin>>data_jual[i][j][k];
}
cout<<endl;
}
cout<<endl;
}
cout<<endl;
cout<<"Data Penjualan Pertahun"<<endl;
cout<<"--------------------------------------------";cout<<endl;
cout<<"Tahun	Hasil	  Tahun Penjualan Ke.";cout<<endl;
cout<<"Ke.		Ke.	-------------------";cout<<endl;
cout<<"					  1	 2	 ";cout<<endl;
cout<<"------------------------------------";cout<<endl;
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
cout<<setiosflags(ios::left)<<setw(11)<<i+1;
cout<<setiosflags(ios::left)<<setw(9)<<j+1;
for(k=0;k<2;k++)
{
cout<<setiosflags(ios::right)<<setw(5);
cout<<data_jual[i][j][k];
cout<<"		";
}
cout<<endl;
}
cout<<endl;
}
cout<<"--------------------------------------";
cout<<endl;
getch();
}
