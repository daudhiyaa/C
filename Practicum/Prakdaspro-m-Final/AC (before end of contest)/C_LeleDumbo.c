/*
Lele Dumbo adalah seekor lele yang pandai menghitung bilangan prima. Suatu hari, ia memikirkan sebuah problem sebagai berikut:

Jika A dan B adalah bilangan prima, apakah AB (A ditempelkan dengan B) juga prima? 
Bisa ya bisa tidak. Jika A = 2 dan B = 3, maka 23 juga prima. Namun jika A = 2 dan B = 5, maka 25 bukan prima.

Diberikan dua buah bilangan bulat, M dan N, Anda diminta membantu Lele Dumbo untuk mencari 
pasangan-pasangan bilangan-bilangan prima A dan B (M = A, B = N) sehingga AB (A ditempelkan dengan B) juga prima.

* Input Format :
Baris pertama berisi dua buah bilangan bulat M dan N.

* Constraints :
2 <= M <= N <= 10.000
N-M <= 50

* Output Format :
Keluarkan pasangan-pasangan bilangan prima yang memenuhi syarat di atas, satu pasang setiap baris 
dengan kedua bilangan prima dipisahkan sebuah spasi. Jika tidak ada pasangan yang memenuhi, keluarkan TIDAK ADA. 
Urutkan pasangan-pasangan tersebut, sehingga bilangan pertama terurut menaik, dan untuk bilangan pertama yang sama, bilangan kedua terurut menaik.

Sample Input 0
2 10

Sample Output 0
2 3
3 7
5 3
7 3

*/

#include <stdio.h>
#include <math.h>
    
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    
    int check = 0;
    int i, j, k;
    for(i=m;i<=n;++i)
    {
        for(j=m;j<=n;++j)
        {
            int check_m = 0, check_n = 0, check_gabungan = 0;
            int gabungan = 0;
            for(k=2;k<=sqrt(i);++k)
            {
                if (i%k == 0){
                    check_n = 1;
                    break;
                } 
            }
            
            if(j<10)
            {
                gabungan=(i*10)+j;
            }
            else if(j<100)
            {
                gabungan=(i*100)+j;
            }
            else if(j<1000)
            {
                gabungan=(i*1000)+j;
            }
            else if(j<10000)
            {
                gabungan=(i*10000)+j;
            }
            
            if(check_n == 1)
            {
                continue;
            }
            
            for(k=2;k<=sqrt(j);++k)
            {
                if (j%k == 0){
                    check_gabungan = 1;
                    break;
                } 
            }
            
            if(check_gabungan == 1)
            {
                continue;
            }
            
            for(k=2;k<=sqrt(gabungan);++k)
            {
                if (gabungan%k == 0){
                    check_m = 1;
                    break;
                } 
            }
            
            if(check_m == 1)
            {
                continue;
            }
            
            if (check_m ==0 && check_n==0 && check_gabungan==0)
            {
                printf("%d %d\n", i,j);
                check = 1;
            } 
        } 
    }
    if(check==0)
    {
        printf("TIDAK ADA\n");
    }
}
