/*
Potter adalah seorang matematikawan jenius. Ia dapat menjadi semangat apabila ia diberi angka cantik. 
Angka cantik adalah angka yang dapat dibentuk dari empat bilangan kuadrat.

Tugas anda adalah menentukan, dari N angka yang akan disodorkan kepada Potter, angka-angka mana yang dapat membuat potter semangat.

* Input Format :
Baris pertama berisi sebuah bilangan N yang menyatakan jumlah angka. N baris berikutnya berisi Ai, angka yang akan ditawarkan pada Potter.

* Constraints
1<=N<=10^6 1<=Ai<=10^6

*Output Format
Untuk setiap angka yang ditawarkan, apabila angka tersebut angka cantik outputkan "POTTER SEMANGAT" tanpa tanda petik.
Apabila bukan angka cantik, outputkan "POTTER LEMES" tanpa tanda petik.

Sample Input 0
3
4
14
18

Sample Output 0
POTTER SEMANGAT
POTTER SEMANGAT
POTTER SEMANGAT

* Explanation 0 :
Pada case 1, 4 dapat disusun dari 1^2 + 1^2 + 1^2 + 1^2
Pada case 2, 14 dapat disusun dari 3^2 + 2^2 + 1^2 + 0^2
Pada case 3, 18 dapat disusun dari 3^2 + 3^2 + 0^2 + 0^2 Dapat dilihat bahwa untuk keempat bilangan penyusun, boleh sama
*/
#include <stdio.h>

int main()
{
	int n, b, c;
	scanf("%d", &n);
	
	int A[n];
	
	for(b=0;b<n;b++)
	{
		scanf("%d", &A[b]);
	}
	
	for(b=0;b<n;b++)
	{
		printf("POTTER SEMANGAT\n");
	}
	return 0;
}


