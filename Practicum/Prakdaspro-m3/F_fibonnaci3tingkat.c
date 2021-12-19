/*
Zoom yang diikuti oleh Kadigas telah usai. Setelah itu, dia iseng melihat media sosial 
dan kemudian menemukan salah satu postingan dari Himpunan Mahasiswa jurusannya. 
Ternyata isinya adalah tentang lomba pemrograman yang akan diadakan oleh Himpunan Mahasiswa tersebut. 
Karena hadiahnya cukup menarik, Kadigas pun akhirnya memutuskan untuk mengikuti lomba tersebut. 
Kemudian, dia juga tak lupa mengajak Zhard untuk mengikuti lomba tersebut. 
Setelah itu, Zhard pun juga akhirnya memutuskan untuk mengikuti lomba tersebut.

Namun, mereka merasa membutuhkan latihan tentang pemrograman sebelum mengikuti lomba tersebut. 
Dan akhirnya mereka sepakat bahwa mereka akan bersama-sama membuat soal dan akan menyerahkan 
soal tersebut satu sama lain kemudian mengerjakannya sebagai latihan. Berikut adalah soal dari Zhard yang akan dikerjakan oleh Kadigas.

0 0 1 1 2 4 7 .. .. .. 68 112 180 292 472 ...

Buatlah sebuah program yang mengimplementasikan fungsi rekursif untuk menentukan bilangan ke-n dari pola tersebut. 
Bantulah Kadigas untuk mengerjakan soal tersebut.

* Input Format :
Baris pertama memuat sebuah bilangan T yang menyatakan jumlah testcase yang akan dijalankan.
T baris berikutnya masing - masing memuat sebuah bilangan N, dimana N adalah panjang barisan.

* Constraints :
1 <= T <= 50
N selalu muat untuk tipe data int

* Output Format :
Untuk tiap testcase, outputkan jawaban pada barisan ke-N dari petunjuk yang ada dalam soal.

Sample Input 0
1
4
Sample Output 0
1

Sample Input 1
3
2
7
12

Sample Output 1
0
7
112

*/

#include <stdio.h>
#define PR (void)printf(
#define SC (void)scanf(

//0 0 1 1 2 4 7 .. .. .. 68 112 180 292 472 ...
int fibo(int x)
{
	if(x==1 || x==2){
		return 0;
	}
	else if(x==3){
		return 1;
	}
	else if(x<11){
		return fibo(x-1) + fibo(x-2) + fibo(x-3);	
	}
	else{
		return fibo(x-1) + fibo(x-2);
	}
}

int main()
{
	int t, arr[50], i;
	SC"%d", &t); //jumlah testcase
	 
    for(i=0;i<t;i++)
    {	
    	SC"%d", &arr[i]);
	}
	for(i=0;i<t;i++)
    {	
    	PR"%d\n", fibo(arr[i]));
	}		
}
