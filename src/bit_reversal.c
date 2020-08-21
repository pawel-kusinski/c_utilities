/*==========================================================================================================*\
 * author: Pawel Kusinski
 * email:  pawel.kusinski@gmail.com
\*==========================================================================================================*/

#include "bit_reversal.h"
#include <stdint.h>

uint8_t reverse_bits(uint8_t input)
{
   uint8_t output = 0x00;
   uint8_t i;

   if(0x00 == input || 0xFF == input)
   {
      return input;
   }

   for(i = 0; i < 8; ++i)
   {
      if(input & 1u << i)
      {
         output |= 1u << (7u - i);
      }
   }

   return output;
}
