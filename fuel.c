/* MUNGUFENI GILBERT */
/* 25/U/BIO/01398/PD */

#include <stdio.h>
  int main(){

        // declaring variables
       float distance_travelled,fuel_used,fuel_efficiency;

       // assigning variables

       printf("Enter distance travelled:");
       scanf("%f", &distance_travelled);

       printf("Enter fuel used:");
       scanf("%f", &fuel_used);

       //performing calculations
       if(fuel_used > 0){
       fuel_efficiency = (distance_travelled/fuel_used);
       }else{
           fuel_efficiency = 0; // avoid division by zero
       }

       //Output of results
       printf("The fuel efficiency is: %.2f km/l\n", fuel_efficiency);











     return 0;

  }
