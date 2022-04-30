// implementation pointer of struct

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct{
    int id;
    char *name;
    double salary;
}Employee, *Emp;

int main(){
    Employee kurapika = {1, "Goku", 67.8};
    Emp pt;
    pt = &kurapika;
    printf("%s %d %.2lf\n", (*pt).name, kurapika.id, pt->salary);
}