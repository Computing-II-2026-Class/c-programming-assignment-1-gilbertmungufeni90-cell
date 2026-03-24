/* MUNGUFENI GILBERT */
/* 25/U/BIO/01398/PD */
#include <stdio.h>
  int main (){

      float amount_to_send,transaction_fee,amount_fee,total_amount_deducted;

      //a) assigning variables
       printf("Enter amount to send:");
       scanf("%f", &amount_to_send);

       printf("Enter transaction fee: ");
       scanf("%f", &transaction_fee);

       //b) performing calculations
       amount_fee =(transaction_fee/100) * amount_to_send;
       total_amount_deducted = (amount_fee + amount_to_send);

       //c) output of results
       printf("The fee amount is: %.2f UGX\n" , amount_fee);
       printf("The total amount deducted is: %.2f UGX\n", total_amount_deducted);


       return 0;


  }










