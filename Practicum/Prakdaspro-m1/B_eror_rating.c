/*
Malwo, SH, dan Smeggy merupakan pembuat aplikasi handal, 
mereka membuat aplikasi memberikan rating kepada asdos yang diisi oleh seluruh mahasiswa.

Sayangnya, aplikasi mereka eror, hasil rating setiap mahasiswa terakumulasi menjadi satu. 
Yang berarti jika mahasiswa memberikan bintang 1 pada asdos , bintang 3 pada asdos , 
dan bintang 5 pada asdos , maka hasil survei hanya memberi tahu bahwa total bintangnya adalah 9 untuk 3 asdos.

Bantulah Malwo, SH, dan Smeggy dengan cara membuat program yang menerima hasil survei dari mahasiswa, 
yaitu total bintang untuk asdos, untuk mengetahui banyak asdos minimal dan maksimal yang mungkin mendapatkan bintang 5.

* Input Format :
baris pertama berupa N dan M, dimana M merupakan banyak asdos dan N merupakan banyak bintang.

* Constraints :
1 <= N,M <= 10^9

* Output Format :
Jika total bintang tidak memungkinkan untuk dibagi ke para asdos dengan range [1, 5], maka outputkan "-1 -1\n".
Jika memungkinkan, outputkan banyak asdos minimal dan maksimal yang mungkin mendapatkan bintang 5.

Sample Input 0
1 6
Sample Output 0
-1 -1

Sample Input 1
10 2
Sample Output 1
2 2

*/
#include <stdio.h>
#define ul unsigned long

int main()
{
	ul x, y, min, max;
	scanf("%lu%lu", &x, &y);
	
	max = (x-y) / 4;
	
	if (x < y || x > 5 * y)
	{
		printf("-1 -1");
	}
	else if (x == 5 * y)
	{
		min = max;
		printf("%lu %lu", min, max);
	}
	else 
	{
		if (x/y == 4){
		min = x%y;
		printf("%lu %lu", min, max);
	}
		else {
		min = 0;
		printf("%lu %lu", min, max);
		}
	}	
	return 0;
}


