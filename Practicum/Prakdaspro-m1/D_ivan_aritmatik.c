/*
Ivan merupakan seorang wibu yang sangat suka menonton anime untuk belajar menjadi wibu di dunia nyata. 
aat itu dia berharap untuk masuk isekai. Pada saat itu dia tidur dan bermimpi masuk ke dalam isekai. 
Isekai adalah suatu subgenre dari sebuah game, anime, manga, dan novel ringan. 
Namun jika diterjemahkan dari bahasa Jepang, isekai memiliki arti “dunia lain”. 
Ternyata di mimpi dia sedang bermain fitur geometris, Ivan secara nggak sengaja menemukan konsep belah ketupat orde ke-n dalam kisi sel.

Sebuah belah ketupat orde 1 hanyalah sebuah hastag (#) 1x1 (yaitu hanya sebuah sel). 
Ivan ingin meminta kalian sebagai programmer handal untuk menunjukkan pola yang digunakan. Untuk lebih mengerti liat gambar berikut

		  	  #
	  #	 	 ###
 #	 ###	#####	dst..
	  #	 	 ###
		  	  #
n=1  n=2 	 n=3		  

* Input Format :
Inputan sebuah bilangan integer n

* Constraints :
(1<=n<=100)

* Output Format
keluarkan sebuah bilangan integer

Sample Input 0
1
Sample Output 0 
1

Sample Input 1
2
Sample Output 1 
5

*/
#include <stdio.h>

int main()
{
	int n, hasil;
	printf("masukkan bilangan antara 1 <= n <= 100 : ");
	scanf("%d", &n);
	hasil = n * (2 * (n-1)) + 1;

	printf("%d", hasil);

	return 0;
}


