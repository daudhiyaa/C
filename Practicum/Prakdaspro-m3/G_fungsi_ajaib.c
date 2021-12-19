/*
Seperti yang telah disepakati sebelumnya oleh Kadigas dan Zhard, 
kemudian Kadigas juga membuat soal yang akan dikerjakan oleh Zhard. 
Berikut adalah soal dari Kadigas. yang akan dikerjakan oleh Zhard.

"Yabay sedang penasaran dan bermain-main dengan sebuah fungsi yang sedang dia pelajari. 
Dia memiliki fungsi g(x) = |Tx + C|. Di sini, |x| artinya nilai mutlak dari x. 
Selain itu, Yabay juga memiliki sebuah bilangan N. Dia pun penasaran, apa hasil dari g(g(...g(x)...)) ?
Hasilnya adalah fungsi g yang diaplikasikan pada x sebanyak N kali. 
Misalnya, jika N = 4, maka Yabay ingin mengetahui hasil dari g(g(g(g(x))))."

Bantulah Zhard untuk mengerjakan soal tersebut.

* Input Format
Sebuah baris berisi empat buah bilangan bulat T, C, N, dan x.

* Constraints :
-15 <= T, C, x <= 15
1 <= N <= 8

* Output Format :
Sebuah baris berisi sebuah bilangan bulat yaitu hasil dari aplikasi fungsi sesuai deskripsi.

Sample Input 0
15 7 3 2
Sample Output 0
8437

Sample Input 1
-10 -8 2 3
Sample Output 1
388

*/

#include <stdio.h>
#define PR (void)printf(
#define SC (void)scanf(

void fungsi(int a, int b, int y, int z)
{
	int i, hasil;
	for(i=0;i<y;i++)
	{
		hasil = (a*z) + b;
		if(hasil<0)
		{
			hasil = hasil * -1;
		}
		z = hasil;
	}
	PR"%d", z);
}

int main()
{
	int t, c, n, x;
	SC"%d%d%d%d", &t, &c, &n, &x);
	
	fungsi(t, c, n, x);
	
	return 0;
}
