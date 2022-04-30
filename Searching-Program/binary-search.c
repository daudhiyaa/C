// binary search program in C

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, i;
	scanf("%d", &n);
	
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	
   	int a = 0,
	   	b = n-1,
		c;
	int cari,
		flag = 0;
	scanf("%d", &cari);
	
	printf("\n");
	while(a<=b && flag==0){
		c = (a+b)/2;
		printf("data tengah : %d\n", arr[c]);
		if(arr[c] == cari) 
			flag=1;
		else if(cari < arr[c]){
			printf("cari dikiri\n\n");
			b = c-1;
		}
		else{
			a = c+1;
			printf("cari dikanan\n\n");
		}
	}
	
	if(flag>0)
		printf("data ada\n");
	else
		printf("data tidak ada\n");
}
