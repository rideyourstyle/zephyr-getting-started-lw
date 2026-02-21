/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stdint.h>
#include <stdio.h>

#include "equal_checker.h"

#include <zephyr/kernel.h>

int main( void )
{
    printf( "Hello Equal, running on %s\n", CONFIG_BOARD_TARGET );

    const uint32_t a = 5;
    const uint32_t b = 6;

    if ( isEqual( a, b ) )
    {
        printf( "%d == %d\n", a, b );
    }
    else
    {
        printf( "%d != %d\n", a, b );
    }

    printf("DONE\n");
    return 0;
}
