/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stdint.h>
#include <stdio.h>
#include "equal_checker.h"

int main(void)
{
	printf("Hello Equal! %s\n", CONFIG_BOARD_TARGET);

	const uint32_t a = 5;
	const uint32_t b = 6;
	if ( isEqual( a, b ))
	{
		printf("%d == %d", a, b);
	} else
	{
		printf("%d != %d", a, b);
	}
	return 0;
}
