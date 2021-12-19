/*
TCenayang once again wouldn't give up, he would create messages by sorting them, 
and he would insert symbols into his program as well. make a program that means TCenayang.

* Input Format :
S text in string.
Repeat the string until "exit" statement.

* Constraints :
SORTING ALGORITHM.
1 < S < 1000

* Output Format :
String in acending order.
Whitespace " " doesn't count.

Sample Input 0
Selamat datang di Final Praktikum 
Final praktikum ini sampai 26-11-2021
yaitu hari Jum'at
semangat semuanya
Love You! <3
exit

Sample Output 0
FPSaaaaaaddegiiikkllmmnnrtttu
--01112226Faaaaiiiiikklmmnnpprstu
'Jaaahiimrttuuy
aaaaeegmmnnsstuy
!3<LYeoouv

*/

#include <stdio.h>
#include <string.h>

int zstring_search_chr(char *token, char s)
{
    if (!token || s=='\0')
        return 0;

    for (;*token; token++)
        if (*token == s)
            return 1;

    return 0;
}

char *zstring_remove_chr(char *str,const char *bad) {
    char *src = str , *dst = str;

    /* validate input */
    if (!(str && bad))
        return NULL;

    while(*src)
        if(zstring_search_chr(bad,*src))
            src++;
        else
            *dst++ = *src++;  /* assign first, then incement */

    *dst='\0';
    return str;
}

int main()
{
    char kalimat[225],temp[1];
    int jum_kalimat;
    char *d=" ";
    char s[]="exit";
    
    int a;
    for(a=0;a>=0;a++)
    {
        gets(kalimat);
        if(strcmp(kalimat, s)==0)
        {
            return 0;
        }
    
        jum_kalimat=strlen(kalimat);
        
        int i, j;
        for(i=1;i<jum_kalimat;i++)
        {
            for(j=0;j<jum_kalimat;j++)
            {
                if(kalimat[i]<kalimat[j])
                {
                    temp[0]=kalimat[i];
                    kalimat[i]=kalimat[j];
                    kalimat[j]=temp[0];
                }
                
            }
        }
        
        zstring_remove_chr(kalimat,d);
        
        printf("%s\n", kalimat);
    }    
}
