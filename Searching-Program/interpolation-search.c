// interpolation search program in C

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	int n = 9, 
		d = 9; // data yg dicari
	int data[9] = {3,9,11,12,15,17,23,31,35};
   	int low = 0, 
	    high =  n-1,
		pos;
	bool flag = false;
	float pos1;
	
	do{
		pos1 = (float) (d-data[low])/(data[high]-data[low]) * (high-low) + low;
		pos = floor(pos1);
		if(data[pos] == d){
			flag=true;
			break;
		}
		if(data[pos] > d)
			high = pos-1;
		else 
			if(data[pos] < d)
				low = pos+1;
	} while(d >= data[low] && d <= data[high]);
		
	if(!flag)	printf("data tidak ada\n");
	else printf("data ada\n");
	
	return 0;
}
