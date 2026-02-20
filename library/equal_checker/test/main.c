

#include <zephyr/ztest.h>
#include <zephyr/sys/util.h>
#include <zephyr/sys/util_utf8.h>
#include <zephyr/ztest_assert.h>
#include <zephyr/ztest_test.h>

#include "equal_checker.h"


ZTEST(equal_checker, test_isEqual)
{
    zassert_true(isEqual(1, 1), "true");
}

ZTEST(equal_checker, test_isNotEqual)
{
     zassert_false(isEqual(2, 3), "false");
}

ZTEST_SUITE(equal_checker, NULL, NULL, NULL, NULL, NULL);