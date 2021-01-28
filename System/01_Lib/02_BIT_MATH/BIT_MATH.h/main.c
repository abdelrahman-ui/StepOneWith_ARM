 /******************************************************************/

  /* Author  : Abdelrahman Magdy */
  /* Data    : 25 JAN 2021       */
  /* Version : V01               */

  /*****************************************************************/


 #ifndef BIT_MATH_H
 #define BIT_MATH_H

 #define SET_Bit (VAR, BIT)   ( VAR |= (1 << (BIT) ) )

 #define CLR_Bit (VAR, BIT)   ( VAR &=~ (1<<(BIT)) )

 #define GET_Bit (VAR, BIT)   ( (VAR >> BIT) & 1 )

 #define TOG_Bit (VAR, BIT)    ( VAR ^= (1 << (BIT) ) )


 #endif
