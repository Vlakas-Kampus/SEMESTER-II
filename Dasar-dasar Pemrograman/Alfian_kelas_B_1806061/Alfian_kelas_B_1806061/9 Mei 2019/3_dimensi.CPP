#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <iomanip.h>
main()
{
int i,j,k;
float data[2][4][3] = {
{{100,200,300},
{150,240,360},
{250,340,460},
{250,340,460}},
{{160,250,365},
{175,275,375},
{275,375,575},
{380,480,580}},
};
clrscr();
cout<<"-----------------------------------------";
cout<<endl;
cout<<"Tahun			Hasil	Tahun Penjualan	";
cout<<endl;
cout<<"Ke.		Ke.	------------------------";
cout<<endl;
cout<<"		 2002	  2003	  2004";
cout<<endl;
cout<<"-----------------------------------------";
cout<<endl;
for(i=0;i<2;i++)
{
for(j=0;j<4;j++)
{
cout<<setiosflags(ios::left)<<setw(9)<<i+1;
cout<<setiosflags(ios::left)<<setw(9)<<j+1;
for(k=0;k<3;k++)
{
cout<<setiosflags(ios::right)<<setw(5);
cout<<data[i][j][k];
cout<<"	";
}
cout<<endl;
}
cout<<endl;
}
cout<<"----------------------------------------";
cout<<endl;
getch();
}