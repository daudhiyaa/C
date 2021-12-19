/*
Kali ini L membuat sebuah permainan dimana pemain harus mencari angka yang hilang 
dari deret pertama jika di bandingkan deret ke dua, kalian di tantang untuk menyelesaikan game tersebut.
Angka dipastikan urut, deret pertama sepanjang n-1 dan deret kedua sepanjang n

* Input Format :
baris pertama berupa sebuah bilangan yang menyatakan banyak kasus(i)
> pada setiap kasus ada 3 baris input :
baris pertama kasus merupakan panjang deret (n)
baris kedua terdapat n-1 angka(k) yang merupakan data deret pertama
baris ketiga terdapat n angka yang merukapan data deret kedua

* Constraints :
0 < i <= 100
0 <= n, k <= 10000

* Output Format :
outputkan angka yang hilang untuk setiap tescase

Sample Input 0
1
10
1 2 3 4 5 6 7 8 10
1 2 3 4 5 6 7 8 9 10

Sample Output 0
9
*/

#include <stdio.h>
    
int main()
{
    int a;
    scanf("%d", &a);
    
    int i, j, k, n, hasil;
    
    for(i=0;i<a;i++)
    {
        scanf("%d", &n);
        
        int barisAwal[n-1], barisAkhir[n];
        int sumAwal = 0, sumAkhir = 0;
        
        for(j=0;j<n-1;j++)
        {
            scanf("%d", &barisAwal[j]);
            sumAwal += barisAwal[j];
        }
    
        for(k=0;k<n;k++)
        {
            scanf("%d", &barisAkhir[k]);
            sumAkhir += barisAkhir[k];
        }
        
        hasil = sumAkhir - sumAwal;
        printf("%d\n", hasil);
        
    }
    
}
