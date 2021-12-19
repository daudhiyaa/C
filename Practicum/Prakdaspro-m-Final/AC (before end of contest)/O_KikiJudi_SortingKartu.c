/*
Kiki sedang berada di casino untuk bermain judi kartu, sekarang di sedang memegang N kartu yang tidak urut.
Ia ingin mengurutkan kartu dari angka terkecil hingga terbesar. Ia akan melakukan pertukaran posisi 2 kartu 
di tangannya agar kartunya urut. Tentukan berapa minimal pertukaran yang dapat dilakukan.

note : bisa aja ada kartu yang angkanya sama..

* Input Format :
Baris pertama berisi N
Baris berikutnya berisi kartu di tangan Kiki belum urut
input berhenti jika N = 0

* Constraints :
N <= 1000

* Output Format :
baris berisi "minimal pertukaran : x"

Sample Input 0
3
1 2 3
3
2 3 1
0

Sample Output 0
minimal pertukaran : 0
minimal pertukaran : 2
*/

#include <stdio.h>

int main()
{
    int n, i, j, k, temp;
    
    for(i=0;i>=0;i++)
    {
        scanf("%d", &n);
        int kartu[n];
        
        if(n==0)
        {
            return 0;
        }
        
        else
        {
            for(j=0;j<n;j++)
            {
                scanf("%d", &kartu[j]);
            }
            int x = 0;    
            for(j=0;j<n-1;j++)
            {
                for(k=0;k<n-j-1;k++)
                {
                    if(kartu[k]>kartu[k+1])
                    {
                        temp = kartu[k];
                        kartu[k] = kartu[k+1];
                        kartu[k+1] = temp;
                        x++;
                    }
                }
            }
            printf("minimal pertukaran : %d\n", x);
        }
            
    }
}
