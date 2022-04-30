#include <stdio.h>
//continue implementation
int main(){
    for (int i = 1; i <= 6; i++) {
        if (i == 4)	// if i = 4, ignore the printf command
            continue;
        printf("%d\n",i);
    }
    return 0;
}
