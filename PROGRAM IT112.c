Rosalyn Jala
Angelica Villarta
Ryan Paden
BSIT-1A



#include<stdio.h>
main()
{

     int vec1, vec2, veh1, veh2;
     int choice, thour,tminute;
     float tc;
     char ch, vehicle;

     printf("\t\t\t\t****************************************************************************************\n");
     printf("\t\t\t\t****************************************************************************************\n");
     printf("\t\t\t\t******************* *                                  * *******************************\n");
     printf("\t\t\t\t******************* *  JPV's Parking Lot and Services  * *******************************\n");
     printf("\t\t\t\t******************* *                                  * *******************************\n");
     printf("\t\t\t\t****************************************************************************************\n");
     printf("\t\t\t\t* * *  Type  * * * * * * * * * * First Rate * * * * *  * * * * * *  Second Rate * *  * *\n");
     printf("\t\t\t\t*                  *                                   *                               *\n");
     printf("\t\t\t\t*     [1] CAR      *      Php  12.00/hr first 3 hour   * Php 25.00/hr after the 3 hours*\n");
     printf("\t\t\t\t*                  *                                   *                               *\n");
     printf("\t\t\t\t*     [2] TRUCK    *      Php  25.00/hr first 2 hour   * Php 50.00/hr after the 2 hours*\n");
     printf("\t\t\t\t*                  *                                   *                               *\n");
     printf("\t\t\t\t*     [3] BUS      *      Php  15.00/hr first 3 hour   * Php 30.00/hr after the 2 hours*\n");
     printf("\t\t\t\t*                  *                                   *                               *\n");
     printf("\t\t\t\t*     [4] EXIT     *                                   *                               *\n");
     printf("\t\t\t\t****************************************************************************************\n");
     printf("\t\t\t\t****************************************************************************************\n");
     printf("\n\n\tEnter type of vehicle           :  ");
     scanf("%d",&choice);
     printf("\n\n\tHour  entered lot (0-24)        :  ");
     scanf("%d",&vec1);
     printf("\n\n\tMinute  entered lot (0-60)      : ");
     scanf("%d",&vec2);
     printf("\n\n\tHour  left lot(0-24)            : ");
     scanf("%d",&veh1);
     printf("\n\n\tMinute  left lot (0-60)         : ");
     scanf("%d",&veh2);



     if( choice == 1){
         printf("\n\n\tThe car entered at %d:%d and left at %d:%d.", vec1, vec2, veh1, veh2);
          thour= veh1-vec1;
          tminute= veh2-vec2;
          printf("\n\n\tYou have %d:%d hours parking",thour,tminute);
          if(thour<=3)
            printf("\n\n\tThe total charge is: 12.00");
        else
            printf("\n\n\tThe total charge is: 25.00");

          }
     else if( choice == 2)
         {printf("\n\n\tThe truck entered at %d:%d and left at %d:%d.", vec1, vec2, veh1, veh2);
         thour= veh1-vec1;
          printf("\n\n\tYou have %d hours parking",thour,tminute);
          if(thour<=3)
            printf("\n\n\tThe total charge is: 20.00");
        else
            printf("\n\n\tThe total charge is: 50.00");}
     else if( choice == 3)
         {printf("\n\n\tThe bus entered at %d:%d and left at %d:%d.", vec1, vec2, veh1, veh2);
         thour= veh1-vec1;
          printf("\n\n\tYou have %d hours parking",thour,tminute);
          if(thour<=3)
            printf("\n\n\tThe total charge is: 15.00");
        else
            printf("\n\n\tThe total charge is: 30.00");}
     else if( choice == 4)
         {("exit");}





      else
         {printf("\n\n\tInvalid input!!!!!! Better Luck Next Time....Try Again...and Again..and Again....Thank you");}



       printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

          getchar();
          return 0;

}
