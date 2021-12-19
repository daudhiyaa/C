/*
Ragilion merupakan seorang petualang yang berasal dari jerman. Dia sangat suka untuk menghitung. 
Apalagi menghitung uang yang ada di dompetnya. Ragilion merupakan seorang istri dia dikarunia 
seorang anak yang berasal dari dunia isekai. Anaknya hanya butuh beberapa minggu untuk tumbuh besar menjadi anak SMA. 
Nama anaknya adalah udin. Udin bertanya kepada mamanya Ragilion sebuah soal berikut :

Misalkan terdapat dua buah matriks A dan B. Matriks pertama berukuran N x M, 
sedangkan matriks kedua berukuran M x P. Perkalian dari dua buah matriks tersebut akan menghasilkan suatu matriks C 
yang berukuran N x P. Elemen ke-(i, j) dari matriks C = AB ini didefinisikan sebagai:

Cij = Ai1 B1j + Ai2 B2j + ... + AiM BMj

Pak Dengklek memberikan dua buah matriks tersebut. Kalikan kedua matriks tersebut lalu cetak hasilnya.

* Hint : Gunakan Pointer!!!!

* Input Format :
Baris pertama berisi tiga buah bilangan bulat N, M, dan P.
N baris berikutnya masing-masing berisi M buah bilangan bulat, yang menyatakan elemen-elemen matriks A.
M baris berikutnya masing-masing berisi P buah bilangan bulat, yang menyatakan elemen-elemen matriks B.

* Constraints :
1 <= N
M, P <= 100
1 <= (setiap elemen matriks) <= 100

* Output Format :
Sebuah matris berukuran N × P dengan format seperti masukan yang merupakan matriks yang sudah diputar.

Sample Input 0
2 3 4
1 2 5
6 7 8
6 7 3 1
3 5 2 1
6 3 5 1

Sample Output 0
42 32 32 8
105 101 72 21

*/

#include <stdio.h>

void matrix(int x, int y, int z, int arr1[10][10], int arr2[10][10], int *sum, int result[10][10])
{
    int i, j, k;
    for(i = 0; i < x; i++)
    {
      for(j = 0; j < z; j++)
      {
        for(k = 0; k < y; k++)
        {
            *sum = *sum + arr1[i][k] * arr2[k][j];
        }
        result[i][j] = *sum;
        *sum = 0;
      }
    }
}

int main() 
{
    int matriks1[10][10], matriks2[10][10], hasil[10][10];
    int i, j, m, n, q, jumlah = 0;
    scanf("%d", &m);
    scanf("%d", &n);
    scanf("%d", &q);
  

    for(i = 0; i < m; i++)
    {
      for(j = 0; j < n; j++)
      {
        scanf("%d", &matriks1[i][j]);
      }
    }

    for(i = 0; i < n; i++)
    {
      for(j = 0; j < q; j++)
      {
        scanf("%d", &matriks2[i][j]);
      }
    }
    
    matrix(m, n, q, matriks1, matriks2, &jumlah, hasil);

    for(i = 0; i < m; i++)
    {
          for(j = 0; j < q; j++)
          {
               printf("%d ", hasil[i][j]);
          }
          printf("\n");
    }
  
  return 0;
}
