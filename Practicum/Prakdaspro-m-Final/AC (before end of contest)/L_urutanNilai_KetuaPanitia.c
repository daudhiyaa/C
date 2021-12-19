/*
Kini Taki menjadi ketua pelaksana pada kegiatan lomba di sekolahnya. 
Untuk membantu pembuat papan skor, urutkanlah data skor peserta sesuai 
dengan urutan sebagai berikut: total skor, skor cabang perlombaan A, B, C, nama tim.

* Input Format :
Sebuah baris yang berisi bilangan N yang menyatakan banyak tim. 
Diikuti dengan N baris yang berisi string nama dan 3 bilangan bulat 
yang menyatakan skor tiap-tiap cabang perlombaan A, B, C. 
Nama tim dijamin tidak memiliki spasi.

* Constraints :
2 <= N <= 100
5 <= |nama tim| <= 31
0 <= A, B, C <= 20.000

* Output Format :
N baris yang berisi string nama tim, skor cabang perlombaan A, B, C dan total skor.

Sample Input 0
3
bangJago 900 1000 900
doaIbu 1000 1050 1000
semogaJuara 950 1100 800

Sample Output 0
doaIbu 1000 1050 1000 3050
semogaJuara 950 1100 800 2850
bangJago 900 1000 900 2800

Sample Input 1
4
timSatu 400 300 400
timDua 400 400 300
timTiga 300 400 400
timEmpat 400 400 400

Sample Output 1
timEmpat 400 400 400 1200
timDua 400 400 300 1100
timSatu 400 300 400 1100
timTiga 300 400 400 1100

*/

#include <stdio.h>
#include <string.h>

struct{
    char nama[32];
    int A;
    int B;
    int C;
    int total;
}kelompok[100000];

int main()
{
    int n, i, j;
    scanf("%d", &n);
    
    char tempnama[32];
    int tempA, tempB, tempC;
    int temptotal;
    
    for(i=0;i<n;i++)
    {
        scanf("%s", kelompok[i].nama);
        scanf("%d", &kelompok[i].A);
        scanf("%d", &kelompok[i].B);
        scanf("%d", &kelompok[i].C);
        
        kelompok[i].total = kelompok[i].A + kelompok[i].B + kelompok[i].C;
        
    }
    
    for(i=0;i<n*5;i++)
    {
        for(j=i+1;j<(n*5)-1;j++)
        {
            if(kelompok[i].total<kelompok[j].total)
            {
                strcpy(tempnama, kelompok[i].nama);
                strcpy(kelompok[i].nama, kelompok[j].nama);
                strcpy(kelompok[j].nama, tempnama);
                                
                tempA = kelompok[i].A;
                kelompok[i].A = kelompok[j].A;
                kelompok[j].A = tempA;
                                
                tempB = kelompok[i].B;
                kelompok[i].B = kelompok[j].B;
                kelompok[j].B = tempB;
                                
                tempC = kelompok[i].C;
                kelompok[i].C = kelompok[j].C;
                kelompok[j].C = tempC;
                                
                temptotal = kelompok[i].total;
                kelompok[i].total = kelompok[j].total;
                kelompok[j].total = temptotal;
            }
            else if(kelompok[i].total==kelompok[j].total)
            {
                if(kelompok[i].A<kelompok[j].A)
                {
                    strcpy(tempnama, kelompok[i].nama);
                    strcpy(kelompok[i].nama, kelompok[j].nama);
                    strcpy(kelompok[j].nama, tempnama);
                                
                    tempA = kelompok[i].A;
                    kelompok[i].A = kelompok[j].A;
                    kelompok[j].A = tempA;
                                
                    tempB = kelompok[i].B;
                    kelompok[i].B = kelompok[j].B;
                    kelompok[j].B = tempB;
                                
                    tempC = kelompok[i].C;
                    kelompok[i].C = kelompok[j].C;
                    kelompok[j].C = tempC;
                                
                    temptotal = kelompok[i].total;
                    kelompok[i].total = kelompok[j].total;
                    kelompok[j].total = temptotal;
                }
                else if(kelompok[i].A==kelompok[j].A)
                {
                    if(kelompok[i].B<kelompok[j].B)
                    {
                        strcpy(tempnama, kelompok[i].nama);
                        strcpy(kelompok[i].nama, kelompok[j].nama);
                        strcpy(kelompok[j].nama, tempnama);
                                
                        tempA = kelompok[i].A;
                        kelompok[i].A = kelompok[j].A;
                        kelompok[j].A = tempA;
                                
                        tempB = kelompok[i].B;
                        kelompok[i].B = kelompok[j].B;
                        kelompok[j].B = tempB;
                                
                        tempC = kelompok[i].C;
                        kelompok[i].C = kelompok[j].C;
                        kelompok[j].C = tempC;
                                
                        temptotal = kelompok[i].total;
                        kelompok[i].total = kelompok[j].total;
                        kelompok[j].total = temptotal;
                    }
                    else if(kelompok[i].B==kelompok[j].B)
                    {
                        if(kelompok[i].C<kelompok[j].C)
                        {
                            strcpy(tempnama, kelompok[i].nama);
                            strcpy(kelompok[i].nama, kelompok[j].nama);
                            strcpy(kelompok[j].nama, tempnama);
                                
                            tempA = kelompok[i].A;
                            kelompok[i].A = kelompok[j].A;
                            kelompok[j].A = tempA;
                                
                            tempB = kelompok[i].B;
                            kelompok[i].B = kelompok[j].B;
                            kelompok[j].B = tempB;
                                
                            tempC = kelompok[i].C;
                            kelompok[i].C = kelompok[j].C;
                            kelompok[j].C = tempC;
                                
                            temptotal = kelompok[i].total;
                            kelompok[i].total = kelompok[j].total;
                            kelompok[j].total = temptotal;
                        }
                        else if(kelompok[i].C==kelompok[j].C)
                        {
                            if(strcmp(kelompok[i].nama, kelompok[j].nama)>0)
                            {
                                if(kelompok[i].nama<kelompok[j].nama)
                                {
                                    strcpy(tempnama, kelompok[i].nama);
                                    strcpy(kelompok[i].nama, kelompok[j].nama);
                                    strcpy(kelompok[j].nama, tempnama);
                                    
                                    tempA = kelompok[i].A;
                                    kelompok[i].A = kelompok[j].A;
                                    kelompok[j].A = tempA;
                                    
                                    tempB = kelompok[i].B;
                                    kelompok[i].B = kelompok[j].B;
                                    kelompok[j].B = tempB;
                                    
                                    tempC = kelompok[i].C;
                                    kelompok[i].C = kelompok[j].C;
                                    kelompok[j].C = tempC;
                                    
                                    temptotal = kelompok[i].total;
                                    kelompok[i].total = kelompok[j].total;
                                    kelompok[j].total = temptotal;
                                }
                            }
                        }
                    }
                }
            }
        }   
    }
    
    for(i=0;i<n;i++)
    {
        printf("%s %d %d %d %d\n", kelompok[i].nama, kelompok[i].A, kelompok[i].B, kelompok[i].C, kelompok[i].total);
    }

}
