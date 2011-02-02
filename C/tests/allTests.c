/*
 * Copyright (C) 2006-2011 by Benedict Paten (benedictpaten@gmail.com)
 *
 * Released under the MIT license, see LICENSE.txt
 */

#include "sonLibGlobalsTest.h"

CuSuite *sonLibETreeTestSuite(void);
CuSuite *sonLibStringTestSuite(void);
CuSuite *sonLibHashTestSuite(void);
CuSuite *sonLibSortedSetTestSuite(void);
CuSuite *sonLib_stListTestSuite(void);
CuSuite *sonLib_stCommonTestSuite(void);
CuSuite* sonLib_stTuplesTestSuite(void);
CuSuite* sonLib_stExceptTestSuite(void);
CuSuite* sonLib_stRandomTestSuite(void);
CuSuite* sonLib_stCompressionTestSuite(void);
CuSuite* sonLibFileTestSuite(void);

int sonLibRunAllTests(void) {
    CuString *output = CuStringNew();
    CuSuite* suite = CuSuiteNew();
    CuSuiteAddSuite(suite, sonLib_stCommonTestSuite());
    CuSuiteAddSuite(suite, sonLibETreeTestSuite());
    CuSuiteAddSuite(suite, sonLibStringTestSuite());
    CuSuiteAddSuite(suite, sonLib_stTuplesTestSuite());
    CuSuiteAddSuite(suite, sonLibHashTestSuite());
    CuSuiteAddSuite(suite, sonLib_stListTestSuite());
    CuSuiteAddSuite(suite, sonLibSortedSetTestSuite());
    CuSuiteAddSuite(suite, sonLib_stExceptTestSuite());
    CuSuiteAddSuite(suite, sonLib_stRandomTestSuite());
    CuSuiteAddSuite(suite, sonLib_stCompressionTestSuite());
    CuSuiteAddSuite(suite, sonLibFileTestSuite());

    CuSuiteRun(suite);
    CuSuiteSummary(suite, output);
    CuSuiteDetails(suite, output);
    printf("%s\n", output->buffer);
    return suite->failCount > 0;
}

int main(void) {
    return sonLibRunAllTests();
}
