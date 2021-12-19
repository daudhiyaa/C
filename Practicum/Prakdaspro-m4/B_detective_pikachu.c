/*
Detektif Pikachu sudah hampir menggapai impiannya menjadi detektif proffesional. 
Sayangnya, ketika ia tinggal selangkah lagi, tiba-tiba Gengar datang dan mengacaukan barang-barang di rumahnya. 
Parahnya lagi, Gengar memasukkan barang-barang Pikachu ke laci secara random.

Tetapi, Gengar meninggalkan sebuah catatan yang berisi urutan pemasukan barang. 
Pikachu merasa, jika ia harus menghafalkan ulang urutan barang di lacinya, ia akan terlambat untuk pergi wawancara detektif.

Oleh sebab itu, Pikachu membutuhkan bantuanmu. 
Buatlah sebuah program yang bisa mencarikan di laci ke berapa barang yang sedang dicari Pikachu.

* Input Format :
Baris pertama berisi sebuah bilangan T, banyaknya testcase.
T case berikutnya:
Baris pertama berisi sebuah bilangan N, banyaknya barang yang disembunyikan.
N baris berikutnya, berisi sebuah string yang menyatakan nama barang.
Baris berikutnya berisi sebuah bilangan K, banyaknya barang yang dicari Pikachu.
K baris berikutnya, berisi sebuah string yang menyatakan barang yang dicari.
Urutan pemasukan barang menunjukkan barang tersebut dimasukkan di laci ke berapa.

* Constraints :
1 <= T <= 5
1 <= N <= 100
1 <= K <= 100
1 <= strlen <= 100

* Output Format :
Untuk setiap barang yang dicari, outputkan :
"Yay ada di laci ke-i (/^^)/", dengan \n dan tanpa tanda petik bila barang ditemukan.
"Ga ketemuu (--;)", dengan \n dan tanpa tanda petik bila barang tidak ditemukan.

Sample Input 0
1
4
kacamata
bola
handuk
cempedak
3
cempedak
bdiqz
sepatu

Sample Output 0
Yay ada di laci ke-4 (/^^)/
Ga ketemuu (--;)
Ga ketemuu (--;)

Sample Input 1
1
4
sepatu kiri
sepatu kanan
ayam betina
ayam jantan
4
ayam kampung
ayam jantan
sepatu kanan
laci

Sample Output 1
Ga ketemuu (--;)
Yay ada di laci ke-4 (/^^)/
Yay ada di laci ke-2 (/^^)/
Ga ketemuu (--;)
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int t, i, j, k;
    scanf("%d", &t);
	
	struct Brg{
	char macam[100];
	}barang[100];
	
	struct BrgCari{
	char macam[100];
	}barang_dicari[100];

    for (i=0;i<t;i++)
    {
        int n[100], m[100];
		char awal;
		
        scanf("%d", &n[i]);
        scanf("%c", &awal);
        for (j=0; j<n[i]; j++)
        {
            fgets(barang[j].macam, 100, stdin);
        }

        scanf("%d", &m[i]);
        scanf("%c", &awal);
        for (j=0; j<m[i]; j++)
        {
            fgets(barang_dicari[j].macam, 100, stdin);
        }

        int tanda = 0;
        for(j=0;j<m[i]; j++)
        {
            for(k=0;k<n[i];k++)
            {
                if (strcmp(barang[k].macam, barang_dicari[j].macam) == 0)
                {
                    printf("Yay ada di laci ke-%d (/^^)/\n", k+1);
                    tanda=1;
                }
            }
            if (tanda!=1)
            {
                printf("Ga ketemuu (--;)\n");
            }
            tanda=0;
        }
    }
}
