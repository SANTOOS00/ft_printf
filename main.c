#include "libftprintf.h"
#include "stdio.h"





#include <stdio.h>

int main(void)
{
    int ret;
    char c = 'A';
    char *str = "Hello";
    char *null_str = NULL;
    int n = -42;
    unsigned int u = 424242;
    void *ptr = str;
    void *null_ptr = NULL;

    ft_printf("---- RETURN TEST START ----\n");


    ret = ft_printf("Char: %c\n", c);
    ft_printf("Return value: %d\n\n", ret);


    ret = ft_printf("String: %s\n", str);
    ft_printf("Return value: %d\n\n", ret);


    ret = ft_printf("String NULL: %s\n", null_str);
    ft_printf("Return value: %d\n\n", ret);


    ret = ft_printf("Pointer: %p\n", ptr);
    ft_printf("Return value: %d\n\n", ret);


    ret = ft_printf("Pointer NULL: %p\n", null_ptr);
    ft_printf("Return value: %d\n\n", ret);


    ret = ft_printf("Signed int %%d: %d\n", n);
    ft_printf("Return value: %d\n\n", ret);

    ret = ft_printf("Signed int %%i: %i\n", n);
    ft_printf("Return value: %d\n\n", ret);


    ret = ft_printf("Unsigned int: %u\n", u);
    ft_printf("Return value: %d\n\n", ret);


    ret = ft_printf("Hex lowercase %%x: %x\n", u);
    ft_printf("Return value: %d\n\n", ret);

    ret = ft_printf("Hex uppercase %%X: %X\n", u);
    ft_printf("Return value: %d\n\n", ret);

    ret = ft_printf("Percent: %%\n");
    ft_printf("Return value: %d\n\n", ret);

    ft_printf("---- RETURN TEST END ----\n");
    return 0;
}
/*

---- RETURN TEST START ----
Char: A
Return value: 8

String: Hello
Return value: 13

String NULL: (null)
Return value: 19

Pointer: 0x402004
Return value: 18

Pointer NULL: (nil)
Return value: 19

Signed int %d: -42
Return value: 16

Signed int %i: -42
Return value: 16

Unsigned int: 424242
Return value: 21

Hex lowercase %x: 67932
Return value: 23

Hex uppercase %X: 67932
Return value: 23

Percent: %
Return value: 12

---- RETURN TEST END ----
*/



