/*
 * Airplane Monitoring System Project
 * 
 * Chris McCann - C/C++ 3 - CSE-40477
 *
 * Signal.h
 *
 */
#ifndef PROJECT2_SIGNAL_H
#define PROJECT2_SIGNAL_H

#include "Time.h"

namespace Project2
{
//=========================================================================
    // SUMMARY
    //
    // RESOURCES
    //      
    //=========================================================================
    class Signal
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
        Signal(double valueOffset, Time timeOffset);

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
        double getVoltageAtTimeT(Time t);

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
        Time getTimeOffset() const;

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
        double getVoltageOffset() const;

    private:
       double voltageOffset;
       Time timeOffset;
    };
}

#endif