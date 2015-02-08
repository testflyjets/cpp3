/*
 * Airplane Monitoring System Project
 * 
 * Chris McCann - C/C++ 3 - CSE-40477
 *
 * ConstantSignal.h
 *
 */
#ifndef PROJECT2_CONSTANTSIGNAL_H
#define PROJECT2_CONSTANTSIGNAL_H

#include "Signal.h"
#include "Time.h"

namespace Project2
{
    //=========================================================================
    // SUMMARY
    //
    // RESOURCES
    //      
    //=========================================================================
    class ConstantSignal : public Signal
    {
    public:
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
        ConstantSignal(double valueOffset, Time timeOffset);

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
        double getVoltageAtTime(Time t) const;

    private:
        
    };
}

#endif
