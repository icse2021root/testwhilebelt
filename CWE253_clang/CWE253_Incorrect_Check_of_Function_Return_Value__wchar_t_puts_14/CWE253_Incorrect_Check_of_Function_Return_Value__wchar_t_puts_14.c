/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE253_Incorrect_Check_of_Function_Return_Value__wchar_t_puts_14.c
Label Definition File: CWE253_Incorrect_Check_of_Function_Return_Value.label.xml
Template File: point-flaw-14.tmpl.c
*/
/*
 * @description
 * CWE: 253 Incorrect Check of Return Value
 * Sinks: puts
 *    GoodSink: Correctly check if puts() failed
 *    BadSink : Incorrectly check if puts() failed
 * Flow Variant: 14 Control flow: if(globalFive==5) and if(globalFive!=5)
 *
 * */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

#ifdef _WIN32
#define PUTS _putws
#else
#define PUTS puts
#endif

#ifndef OMITBAD

void CWE253_Incorrect_Check_of_Function_Return_Value__wchar_t_puts_14_bad()
{
    if(globalFive==5)
    {
        /* FLAW: putws() might fail, in which case the return value will be WEOF (-1), but
         * we are checking to see if the return value is 0 */
        if (PUTS(L"string") == 0)
        {
            printLine("puts failed!");
        }
    }
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* good1() uses if(globalFive!=5) instead of if(globalFive==5) */
static void good1()
{
    if(globalFive!=5)
    {
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
    }
    else
    {
        /* FIX: check for the correct return value */
        if (PUTS(L"string") == WEOF)
        {
            printLine("puts failed!");
        }
    }
}

/* good2() reverses the bodies in the if statement */
static void good2()
{
    if(globalFive==5)
    {
        /* FIX: check for the correct return value */
        if (PUTS(L"string") == WEOF)
        {
            printLine("puts failed!");
        }
    }
}

void CWE253_Incorrect_Check_of_Function_Return_Value__wchar_t_puts_14_good()
{
    good1();
    good2();
}

#endif /* OMITGOOD */

/* Below is the main(). It is only used when building this testcase on
   its own for testing or for building a binary to use in testing binary
   analysis tools. It is not used when compiling all the testcases as one
   application, which is how source code analysis tools are tested. */

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    /* seed randomness */
    srand( (unsigned)time(NULL) );
#ifndef OMITGOOD
    printLine("Calling good()...");
    CWE253_Incorrect_Check_of_Function_Return_Value__wchar_t_puts_14_good();
    printLine("Finished good()");
#endif /* OMITGOOD */
#ifndef OMITBAD
    printLine("Calling bad()...");
    CWE253_Incorrect_Check_of_Function_Return_Value__wchar_t_puts_14_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
