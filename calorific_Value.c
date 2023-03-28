#include <stdio.h>

int main()
{
    float value=0;
    float rise=0;
    float water_Equivalent=0;
    float mass_Of_Fuel=0;
    printf("enter the water equivalent of the process\n");
    scanf("%f,&water_Equivalent");
    printf("Mass of the fuel: ");
    scanf("%f,&mass_Of_Fuel");
    for(int i=1;i<20;i++){
       printf("Enter the Temperature rise: ");
       scanf("%f",&rise);
       value=((water_Equivalent*rise)+30)/mass_Of_Fuel;
       printf("%f\n",value);
    }
    return 0;
}