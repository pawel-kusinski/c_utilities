/*==========================================================================================================*\
 * author: Pawel Kusinski
 * email:  pawel.kusinski@gmail.com
\*==========================================================================================================*/

#include <stdio.h>
#include <stdint.h>
#include "bit_reversal.h"

int main()
{
   /* reverse_bits test begin */

   uint8_t input = 0x00;
   uint8_t expected_output = 0x00;
   uint8_t output = reverse_bits(input);

   if(output!= expected_output)
   {
      printf("reverse_bits failed. Expected output: 0x%02X, actual: 0x%02X.\n", expected_output, output);
   }

   input = 0xFF;
   expected_output = 0xFF;
   output = reverse_bits(input);

   if(output!= expected_output)
   {
      printf("reverse_bits failed. Expected output: 0x%02X, actual: 0x%02X.\n", expected_output, output);
   }

   input = 0x37;
   expected_output = 0xEC;
   output = reverse_bits(input);

   if(output!= expected_output)
   {
      printf("reverse_bits failed. Expected output: 0x%02X, actual: 0x%02X.\n", expected_output, output);
   }

   input = 0xAA;
   expected_output = 0x55;
   output = reverse_bits(input);

   if(output!= expected_output)
   {
      printf("reverse_bits failed. Expected output: 0x%02X, actual: 0x%02X.\n", expected_output, output);
   }

   input = 0x59;
   expected_output = 0x9A;
   output = reverse_bits(input);

   if(output!= expected_output)
   {
      printf("reverse_bits failed. Expected output: 0x%02X, actual: 0x%02X.\n", expected_output, output);
   }

   /* reverse_bits test end */

   puts("Test done.\n");
   return 0;
}
