

#include <zephyr/ztest.h>
#include <zephyr/ztest_assert.h>
#include <zephyr/ztest_test.h>

#include "equal_checker.h"


ZTEST(test_equal_checker, test_isEqual)
{
    zassert_true(isEqual(1, 1), "true");
}

ZTEST(test_equal_checker, test_isNotEqual)
{
     zassert_false(isEqual(2, 3), "false");
}

ZTEST(test_equal_checker, test_equalLoop)
{
    for (uint32_t i = 0; i < 10; i++) {
        if (i==2) {
            continue;
        }
        zassert_false(isEqual(2, i), "false");
    }
}

ZTEST(test_equal_checker, test_craxyWork) {
    const int32_t a = 2;

    printf("a: %d\n", a);
    const int32_t b = doSomeCrazyWork(a);
    printf("b: %d\n", b);

    zassert_equal(a, b + 1, "true");
}

ZTEST(test_equal_checker, test_craxy) {

    printSomeText(2);
    printSomeText(1);
}

ZTEST_SUITE(test_equal_checker, NULL, NULL, NULL, NULL, NULL);