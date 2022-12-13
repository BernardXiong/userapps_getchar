/*
 * Copyright (c) 2006-2018, RT-Thread Development Team
 *
 * SPDX-License-Identifier: GPL-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2020-10-20     Bernard      The first version
 */

#include <stdio.h>

int main(int argc, char **argv)
{
    printf("hello rt-smart!\n");
    printf("please input a char:\n");
    char ch = getchar();

    printf("bye - %c\n", ch);

    return 0;
}
