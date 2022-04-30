//check a number or word that palindrome or not

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main (){
	char input[50];
	int a, i, j, limit, wordlength;
	
/*
var a, for loop
var input menyimpan masukan user
var i , counter dari depan
var j, counter dari belakang
var status , jika status bernilai 1 maka dinyatakan bukan palindrom . Di awal di set menjadi 0
var limit , batas cek didapat dari tengah-tengah pada suatu kata ataupun angka
var wordlength , banyak huruf atau digit angka pada masukan user
*/
	
	for(a=0;a>=0;a++) { // infinite loop
		printf("enter the word or number : ");
		scanf("%s", input);
		
		wordlength = strlen(input);
		limit = wordlength/2;
		bool status = true;

/*
i, counter dari depan maka i = 0 , karena array dimulai dari 0
j, counter dari belakang, karena array dimulai dari 0 maka j = wordlength - 1

pada proses perulangan akan terus mengecek setiap huruf / digit angka apakah sama dengan cerminannya , 
jika suatu ketika ternyata tidak cocok maka status di set 1 yang menyatakan bukan palindrom, 
counter i akan terus berjalan sampai tengah kata atau angka.
*/

		i = 0;
		j = wordlength-1;
	    while (status == 0 && i < limit) {
	        if(input[i]==input[j]) {
	            i++; j--;
	        }
	        else status = false;
	    }
	
	    /*show result*/
	    if (!status)
	        printf("not a palindrome\n");
	    else
	        printf("palindrome\n");
	}
	
	return 0;
}
