/*
Kenyang sudah cupang makan di dapur polisi. Sekarang, cupang akan melanjutkan prosesi kabur dari penjaranya. 
Cupang melewati beberapa penjaga hingga akhirnya sampai ke gerbang penjara. 
Gerbangnya terkunci, sehingga ia harus memanjat gerbang tersebut.

Tetapi, ketika Cupang baru saja mau memanjat, datanglah seorang tahanan lain yang ternyata juga berhasil kabur, 
namanya Tongkol. Tongkol. Tongkol. Tongkol. Tongkol.

Artinya, sekarang ada dua orang tahanan yang akan kabur. Namun, mereka berdua sadar, bahwa di luar gerbang, 
hanya ada satu sepeda pancal yang bisa digunakan untuk bisa kabur dengan cepat. Tentunya, Cupang dan Tongkol menginginkan sepeda tersebut.

Akhirnya, Tongkol menantang Cupang dalam sebuah permainan bernama "Tebak Langkah Ke". 
Permainan ini mengimplementasikan permainan Tower of Hanoi.

Tongkol akan memberikan beberapa pertanyaan dengan jumlah piringan yang berbeda-beda dan langkah ke- yang berbeda-beda. 
Cupang harus bisa menjawab, pada langkah ke-i, piringan ke berapa yang dipindah dan dari tiang mana ke tiang mana piringan tersebut dipindahkan. 
(Diasumsikan bahwa penyelesaian Tower of Hanoinya sendiri menggunakan langkah tercepat)

Untuk penamaan tiangnya sendiri, tiang pertama diberi nama A, kedua B, dan ketiga C. 
Berikut ilustrasi Tower of Hanoi. Kemudian, untuk urutan piring, piring pertama yang paling atas disebut sebagai piringan ke-1. 
Begitu seterusnya hingga piringan terakhir.

* Input Format :
Baris pertama berisi bilangan N dan L.
N menyatakan banyaknya piringan yang dimainkan dan L menyatakan langkah ke berapa yang ditanyakan.

* Constraints :
1 <= N <= 8
1 <= L <= (2^N)-1

* Output Format
P : S => D
P adalah piringan ke berapa yang dipindahkan
S adalah source, asal piringan yang dipindahkan
D adalah destination, tujuan piringan yang dipindahkan

Sample Input 0
3 1

Sample Output 0
1 : A => C

*/
#include <stdio.h>
#define PR (void)printf(
#define SC (void)scanf(

void genap(int b, char i, char j, char k)
{
	if(b%2==1) {PR"1 : ");}
	
	if(b==1 || b%6==1) {PR"%c => %c\n", i, j);}
	else if(b==2 || b%12==2) {PR"2 : %c => %c\n", i, k);}
	else if(b==3 || b%6==3) {PR"%c => %c\n", j, k);}
	//3 piringan
	else if(b==4 || b%24==4) {PR"3 : %c => %c\n", i, j);}
	else if(b==5 || b%6==5) {PR"%c => %c\n", k, i);}
	else if(b==6 || b%12==6) {PR"2 : %c => %c\n", k, j);}
	//4 piringan
	else if(b==8 || b%48==8) {PR"4 : %c => %c\n", i, k);}
	else if(b==10 || b%12==10) {PR"2 : %c => %c\n", j, i);}
	else if(b==12 || b%24==12) {PR"3 : %c => %c\n", j, k);}
	//5 piringan
	else if(b==16 || b%96==16) {PR"5 : %c => %c\n", i, j);}
	else if(b==20 || b%24==20) {PR"3 : %c => %c\n", k, i);}
	else if(b==24 || b%48==24) {PR"4 : %c => %c\n", k, j);}
	//6 piringan
	else if(b==32) {PR"6 : %c => %c\n", i, k);}
	else if(b==40 || b%48==40) {PR"4 : %c => %c\n", j, i);}
	else if(b==48 || b%96==48) {PR"5 : %c => %c\n", j, k);}
	//7 piringan
	else if(b==64 ) {PR"7 : %c => %c\n", i, j);}
	else if(b==80 || b%96==80) {PR"5 : %c => %c\n", k, i);}
	else if(b==96) {PR"6 : %c => %c\n", k, j);}
	//8 piringan
	else if(b==128) {PR"8 : %c => %c\n", i, k);}	
	else if(b==160) {PR"6 : %c => %c\n", j, i);}
	else if(b==192) {PR"7 : %c => %c\n", j, k);}	
	else if(b==224) {PR"6 : %c => %c\n", i, k);}
}

void hanoi(int m, int k, char x, char y, char z)
{      
	if(m==1) {PR"%d : %c => %c\n",m, x, z);}  
	else if(m%2==0) {genap(k, x, y, z);}
    else if(m%2==1 && m>1) {genap(k, x, z, y);}
}

int main(int argc, char *argv[])
{
	int n, l;
    SC"%d%d",&n, &l);
	hanoi(n, l,'A','B','C');
	return 0;
}
