/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE191_Integer_Underflow__short_min_sub_81.h
Label Definition File: CWE191_Integer_Underflow.label.xml
Template File: sources-sinks-81.tmpl.h
*/
/*
 * @description
 * CWE: 191 Integer Underflow
 * BadSource: min Set data to the min value for short
 * GoodSource: Set data to a small, non-zero number (negative two)
 * Sinks: sub
 *    GoodSink: Ensure there will not be an underflow before subtracting 1 from data
 *    BadSink : Subtract 1 from data, which can cause an Underflow
 * Flow Variant: 81 Data flow: data passed in a parameter to an virtual method called via a reference
 *
 * */

#include "std_testcase.h"

namespace CWE191_Integer_Underflow__short_min_sub_81
{

class CWE191_Integer_Underflow__short_min_sub_81_base
{
public:
    /* pure virtual function */
    virtual void action(short data) const = 0;
};

#ifndef OMITBAD

class CWE191_Integer_Underflow__short_min_sub_81_bad : public CWE191_Integer_Underflow__short_min_sub_81_base
{
public:
    void action(short data) const;
};

#endif /* OMITBAD */

#ifndef OMITGOOD

class CWE191_Integer_Underflow__short_min_sub_81_goodG2B : public CWE191_Integer_Underflow__short_min_sub_81_base
{
public:
    void action(short data) const;
};

class CWE191_Integer_Underflow__short_min_sub_81_goodB2G : public CWE191_Integer_Underflow__short_min_sub_81_base
{
public:
    void action(short data) const;
};

#endif /* OMITGOOD */

}
