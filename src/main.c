/***************************************************
 * @file main.c
 * @author Ajit Singh
 * @date 2022-07-26
 ***************************************************/

#include <stdio.h>

#include "../headers/main.h"
#include "../headers/hexToInt.h"

int main()
{
   long decnum;         // The converted decimal number
   char hex[MAXDIGITS]; // The hexadecimal number

   // The first number $A7
   hex[0] = 'A';
   hex[1] = '7';
   hex[2] = 0;
   decnum = hexToInt(hex, 2);
   printf("The decimal value of hexadecimal %s is %ld\n\n", hex, decnum);
   // expected = 167
   // 10 x 16^1) + (7 x 16^0) = 167

   // A second number $C2F
   hex[0] = 'C';
   hex[1] = '2';
   hex[2] = 'F';
   hex[3] = 0;
   decnum = hexToInt(hex, 3);
   printf("The decimal value of hexadecimal %s is %ld\n\n", hex, decnum);
   // expected = 3119
   // (12 x 16^2) + (2 x 16^1) + (15 x 16^0) = 3119

   /**************************** 5 PROGRAM TEST CASES ****************************/

   // TEST CASE 1 - $AA
   hex[0] = 'A';
   hex[1] = 'A';
   hex[2] = 1;
   decnum = hexToInt(hex, 2);
   printf("[TEST CASE 1] The decimal value of hexadecimal %s is %ld\n\n", hex, decnum);
   // expected = 170
   // (10 x 16^1) + (10 x 16^0) = 170

   // TEST CASE 2 - $1CA
   hex[0] = 2;
   hex[1] = '1';
   hex[2] = 'C';
   hex[3] = 'A';
   decnum = hexToInt(hex, 3);
   printf("[TEST CASE 2] The decimal value of hexadecimal %s is %ld\n\n", hex, decnum);
   // expected = 458
   // (1 x 16^2) + (12 x 16^1) + (10 x 16^0) = 458

   // TEST CASE 3 - $ABCD
   hex[0] = 'A';
   hex[1] = 'B';
   hex[2] = 'C';
   hex[3] = 'D';
   hex[4] = 3;
   decnum = hexToInt(hex, 4);
   printf("[TEST CASE 3] The decimal value of hexadecimal %s is %ld\n\n", hex, decnum);
   // expected = 43981
   // (10 x 16^3) + (11 x 16^2) + (12 x 16^1) + (13 x 16^0) = 43981

   // TEST CASE 4 - $01010
   hex[0] = '0';
   hex[1] = '1';
   hex[2] = '0';
   hex[3] = '1';
   hex[4] = '0';
   hex[5] = 1;
   decnum = hexToInt(hex, 5);
   printf("[TEST CASE 4] The decimal value of hexadecimal %s is %ld\n\n", hex, decnum);
   // expected = 4112

   // TEST CASE 5 - $01010
   hex[0] = 9;
   hex[1] = 'A';
   hex[2] = '0';
   hex[3] = 'B';
   hex[4] = '0';
   hex[5] = 'C';
   decnum = hexToInt(hex, 5);
   printf("[TEST CASE 5] The decimal value of hexadecimal %s is %ld\n\n", hex, decnum);
   // expected = 658188

   return 0;
}
