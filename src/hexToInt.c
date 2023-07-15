/***************************************************
 * @file hexToInt.c
 * @author Ajit Singh
 * @date 2022-07-26
 ***************************************************/

#include "../headers/hexToInt.h"
#include <math.h>

/**
 * @brief given an array hexadecimal numbers as an array
 * and number of digits. This function will convert the
 * hexadecimal numbers to decimals.
 *
 * @param h
 * @param ndigits
 * @return long
 */
long hexToInt(char h[], int ndigits)
{
      long decimalEquivalent = 0;
      int length = ndigits;

      for (int i = 0; i <= length; i++)
      {
            char current = h[i];
            if (current >= 'A' && current <= 'F')
            {
                  decimalEquivalent += computeValues((current - ASCII_CHARACTER), --ndigits);
            }
            else if (current >= '0' && current <= '9')
            {
                  decimalEquivalent += computeValues((current - ASCII_INTEGER), --ndigits);
            }
      }

      return decimalEquivalent;
}

/**
 * @brief given a value and a power, this function will use
 * BASE value of 16 and use the formula value * BASE^power to
 * compute the conversion form hex to decimal.
 *
 * @param value
 * @param power
 * @return long
 */
long computeValues(int value, int power)
{
      long valueToReturn = 0;
      valueToReturn = (value * (pow(BASE, power)));
      return valueToReturn;
}