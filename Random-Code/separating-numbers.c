/*
Sum the number tens of thousand until units

Sample Input :
14537

Sample Output :
20

Explanation :
1 + 4 + 5 + 3 + 7 = 20
*/

#include <stdio.h>

int main() {
    int n, puluhanRibu, ribuan, ratusan, puluhan, satuan, sum;
    scanf("%d", &n);
    
    puluhanRibu = n/10000;
    ribuan = (n/1000)%10;
    ratusan = (((n/100)%100)%10);
    puluhan = ((((n/10)%1000)%100)%10);
    satuan = ((((n%10000)%1000)%100)%10);
    
    sum = puluhanRibu + ribuan + ratusan + puluhan + satuan;
    printf("%d", sum);
    return 0;
}
