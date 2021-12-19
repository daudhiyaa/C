#include <stdio.h>
#include <string.h>

int main()
{
	int n, a, b, c;
	scanf("%d", &n); //banyak sandi
	
	char str[50];
	
	for(a=0;a<n;a++)
	{
		scanf("%s", str);
		
		for(b=0;b<strlen(str);b++)
		{
			if(str[b] == 'A')
			{
				str[b] = 'A' + 33;
			}
			else if(str[b] == 'B')
			{
				str[b] = 'B' + 35;
			}
			else if(str[b] == 'C')
			{
				str[b] = 'C' + 37;
			}
			else if(str[b] == 'D')
			{
				str[b] = 'D' + 39;
			}
			else if(str[b] == 'E')
			{
				str[b] = 'E' + 41;
			}
			else if(str[b] == 'F')
			{
				str[b] = 'F' + 43;
			}
			else if(str[b] == 'G')
			{
				str[b] = 'G' + 45;
			}
			else if(str[b] == 'H')
			{
				str[b] = 'H' + 47;
			}
			else if(str[b] == 'I')
			{
				str[b] = 'I' + 49;
			}
		
			else if(str[b] == 'S')
			{
				str[b] = 'S' - 14;
			}
			else if(str[b] == 'T')
			{
				str[b] = 'T' - 13;
			}
			else if(str[b] == 'U')
			{
				str[b] = 'U' - 12;
			}
			else if(str[b] == 'V')
			{
				str[b] = 'V' - 11;
			}
			else if(str[b] == 'W')
			{
				str[b] = 'W' - 10;
			}
			else if(str[b] == 'X')
			{
				str[b] = 'X' - 9;
			}
			else if(str[b] == 'Y')
			{
				str[b] = 'Y' - 8;
			}
			else if(str[b] == 'Z')
			{
				str[b] = 'Z' - 7;
			}
		}
		printf("%s\n", str);
	}
	
	return 0;
}
