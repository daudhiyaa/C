/*
At Kenjeran Crossroad there is a traffic light with below specifications:
Red light will be turned on for 20s
Yellow light for 5s, after red light
Green light for 60s, after yellow light

You are at the street, with M cars to your front and N cars behind you. 
To fill time, you create a program that can tell you whether or not you're able to pass the traffic light 
and how many cars are left at the road after T seconds. 
For every 5s in green light, one car is able to pass the traffic light.

* Input Format :
There are three integers M, N, and T, as explained in the problem statement.

* Constraints :
1 <= M, N, T <= 100 

* Output Format :
Display "YES!" if you are able to pass the traffic light, "NO!" otherwise.
Display the number of cars left behind on the same line. If all cars pass the traffic light, display 0 instead.

Sample Input 0
45 12 200

Sample Output 0
NO! 33

Sample Input 1
45 48 630

Sample Output 1
YES! 8

Sample Input 2
12 12 200

Sample Output 2
YES! 0

*/

#include <stdio.h>
    
int main()
{
    int mobildepan, mobilbelakang, t;
    scanf("%d %d %d", &mobildepan, &mobilbelakang, &t);
    
    int totalMobil = mobildepan + 1 + mobilbelakang;
    int totalWaktu = 85;
    
    int bagi = t/totalWaktu;
    int sisaWaktu = t%totalWaktu;
    
    int mobil = bagi * 12;

    if(sisaWaktu>=25)
    {
        mobil = mobil + ((sisaWaktu-25)/5);
    }
    
    if(mobil>=mobildepan+1)
    {
        printf("YES! ");
        if(mobil>totalMobil)
        {
            printf("0");
        }
        else
        {
            printf("%d", totalMobil - mobil);
        }
    }
    else
    {
        printf("NO! ");
        if(mobil>totalMobil)
        {
            printf("0");
        }
        else
        {
            printf("%d", totalMobil - mobil);
        }
    }
}

