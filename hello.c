/*
 * hello.c - Standalone Hello World for x86 / BIOS
 *
 * author: luke8086
 * license: GPL-2
 */

#include "bios.h"
#include "util.h"

void ENTRY_POINT
main(void)
{
    for(;;) {
        put_string("Hello World!\n");
    }
}

