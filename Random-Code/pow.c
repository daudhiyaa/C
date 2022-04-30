// pow implementation without math.h library but using function

#include <stdio.h>

int pangkat(int num, int pow){
    int i = 0, hasil = 1;
    if(num==0)
        return 0;
    if(pow==0)
        return 1;
        
    while(i!=pow){
        hasil *= num;
        i++;
    }
    return hasil;
}

int main(){
    int num, pow;
    scanf("%d%d", &num, &pow);
    if(num == 0 && pow == 0)
        printf("Tidak Terdefinisi\n");
    else
        printf("%d\n", pangkat(num, pow));
}