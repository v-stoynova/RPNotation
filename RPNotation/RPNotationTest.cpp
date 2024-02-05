#include "UnitTest++.h"
#include "RPNotation.h"

namespace
{

    TEST(SumTests)
    {
        int result;

        result = evaluate_rpnotation("[3, 5, '+']");
        CHECK_EQUAL(8, Result);

        result = evaluate_rpnotation("[1, 5, 10, '+', '+']");
        CHECK_EQUAL(16, Result);

        result = evaluate_rpnotation("[1, 5, 10, 20, 1, 6, 6, 6, 6, '+', '+', '+', '+', '+', '+', '+', '+']");
        CHECK_EQUAL(61, Result);
    }

    TEST(MinusTests)
    {
        int result;

        result = evaluate_rpnotation("[3, 2, '-']");
        CHECK_EQUAL(1, Result);

        result = evaluate_rpnotation("[1, 5, 10, '-', '-']");
        CHECK_EQUAL(-14, Result);
    }

    TEST(MultiplyTests)
    {
        int result;

        result = evaluate_rpnotation("[7, 1, '*']");
        CHECK_EQUAL(7, Result);

        result = evaluate_rpnotation("[7, 10, 0, '*', '*']");
        CHECK_EQUAL(0, Result);

        result = evaluate_rpnotation("[2, 2, 2, 2, 2, 2, '*', '*', '*', '*', '*']");
        CHECK_EQUAL(64, Result);
    }

    TEST(DivideTests)
    {
        int result;

        result = evaluate_rpnotation("[10, 2, '/']");
        CHECK_EQUAL(5, Result);
    }

    TEST(ComplicatedExpressionTests)
    {
        int result;

        result = evaluate_rpnotation("[15, 7, 1, 1, '+', '-', '/', 3, '*', 2, 1, 1, '+', '+', '-']");
        CHECK_EQUAL(5, Result);

        result = evaluate_rpnotation("[1, 2, '+', 3, '*', 4, '+']");
        CHECK_EQUAL(13, Result);

        result = evaluate_rpnotation("[3, 10, 5, '+', '*',]");
        CHECK_EQUAL(45, Result);
    }
}
