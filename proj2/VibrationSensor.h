/*
 * Airplane Monitoring System Project
 *
 * Chris McCann - C/C++ 3 - CSE-40477
 *
 * VibrationSensor.h
 *
 */
#ifndef PROJECT2_VIBRATIONSENSOR_H
#define PROJECT2_VIBRATIONSENSOR_H

namespace Project2
{
   //=========================================================================
   // SUMMARY
   //
   // RESOURCES
   //      
   //=========================================================================
   class VibrationSensor
   {
   public:
      //---------------------------------------------------------------------
      // Types of coins.  The enumerator's numeric value is the coin's value
      // in cents.
      //---------------------------------------------------------------------

      //---------------------------------------------------------------------
      // SUMMARY
      //      Constructor.  Initializes the coin's denomination to the given
      //      type.
      //
      // RESOURCES
      //      None
      //
      // PARAMETERS
      //      denomination
      //          The coin's denomination.
      //
      // RETURNS
      //      Nothing
      //---------------------------------------------------------------------
      VibrationSensor();

      //---------------------------------------------------------------------
      // SUMMARY
      //      Returns the type of this coin.
      //
      // RESOURCES
      //      None
      //
      // PARAMETERS
      //      None
      //
      // RETURNS
      //      The type of this coin.
      //---------------------------------------------------------------------
      //CoinType getDenomination() const;

      //---------------------------------------------------------------------
      // SUMMARY
      //      Returns the value of the coin in cents.
      //
      // RESOURCES
      //      None
      //
      // PARAMETERS
      //      None
      //
      // RETURNS
      //      The value of the coin in cents.
      //---------------------------------------------------------------------
      unsigned getValueCents() const;

   private:
      
   };
}

#endif
