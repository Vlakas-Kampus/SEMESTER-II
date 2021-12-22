//-------------------//
//contoh bubble sorting
//-------------------//
#include <stdio.h>
#include <stdlib.h>
#define TUKAR(a,b)	{ int t; t=a; a=b; b=t; }
#define INDEX 8

void bubble_sort(int a[], int n);

int main(void)
{
int i;
int array[INDEX] = {12, 9, 4, 99, 120, 1, 3, 10};
printf("Sebelum di Urutkan :\n");
for(i = 0; i < INDEX; i++)
printf("%d", array[i]);
printf("\n");
bubble_sort(array, INDEX);	//mengurutkan array
printf("\nSetelah di Urutkan :\n");
for(i = 0; i < INDEX; i++)
printf("%d", array[i]);
printf("\n\n");
system("PAUSE");	//Menghentikan tampilan
return 0;
}

/****************
Fungsi Bubble Sort
******************/
void bubble_sort( int a[], int n )
{
int i, j;
for(i =0; i < n; i++)
{
for(j =0; j < (n-i); j++)
{
if(a[j-1] > a[j])
TUKAR(a[j-1],a[j]);
}
}
}
