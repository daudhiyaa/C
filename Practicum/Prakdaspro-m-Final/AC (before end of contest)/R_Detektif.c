/*
Karena Hodaka pernah bermain-main dengan string, ia ditawari untuk bergabung kedalam kepolisian. 
Kini ia bekerja sebagai seorang detektif yang sedang menangani kasus pertamanya. 
Salah satu hal yang dapat menjadi petunjuk dalam kasus yang ia tangani terdapat pada pesan yang telah ditinggalkan oleh pelaku. 
Sayangnya, pesan tersebut telah dienkripsi dengan metode caesar cipher. 
Sebagai seorang programer handal, bantulah Hodaka dengan menyusun program yang dapat mendeteksi 
apakah string s2 bisa jadi merupakan bagian dari string s1 yang telah dienkripsi atau tidak.

* Input Format :
Sebuah baris yang berisi bilangan N yang menyatakan banyaknya pasang string, 
diikuti dengan N baris yang berisi string s1 dan s2 yang dipisahkan oleh spasi. 
string s1 dan s2 dijamin hanya memiliki huruf lowercase.

* Constraints :
1 <= N <= 106
5 <= |s1|, |s2| <= 31
'a' <= s1[i], s2[i] <= 'z'

* Output Format :
N baris yang berisi string "YSTTS" jika string s2 bisa jadi merupakan bagian dari string s1 yang telah dienkripsi dan string "YNTKTS" untuk selainnya.

Sample Input 0
2
klifxfwujrwtlwfrfsmb dasarpemrograman
klifhgywujrwtlwfrfsmb dasarpemrograman

Sample Output 0
YSTTS
YNTKTS

Explanation 0
Apabila string "klifxfwujrwtlwfrfsmb" dienkripsi dengan metode caesar cipher dengan geseran sebanyak 21 kali, 
maka akan didapat string "fgdasarpemrogramanhw" yang terdapat string "dasarpemrograman" didalamnya. 
Adapun untuk string s1 selanjutnya apabila dienkripsi dengan cara yang sama, akan didapat string "fgdacbtrpemrogramanhw".
*/

#include <stdio.h>
#include <string.h>
 
int main()
{
    int t, check = 0;
    scanf("%d", &t);
    char kata_satu[32];
    char kata_dua[32];
 
    int i, j, k, panjang_kata;
 
    for(i=0;i<t;i++)
    {
        getchar();
        scanf("%s", kata_satu);
        scanf("%s", kata_dua);
        check = 0;
        panjang_kata = strlen(kata_satu);
        for(k=0;k<26;k++)
        {
            for(j=0;j<panjang_kata;j++)
            {
                if (kata_satu[j]+1>122)
                {
                    kata_satu[j]-=122;
                    kata_satu[j]+=96;
                } 
                else
                {
                  kata_satu[j]++;
                }
            }
            if(strstr(kata_satu, kata_dua)!=NULL)
            {
                check = 1;
                break;
            }
        }
        if(check == 1)
        {
            printf("YSTTS\n");
        }
        else if(check == 0)
        {
            printf("YNTKTS\n");
        }
    } 
}
