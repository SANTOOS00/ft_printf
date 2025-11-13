#include <stdio.h>

int	main(void)
{
	int i = 9;
	int *n  = &i;
    int j; 
	j = printf("%d", *n);
	printf ("\n%p", n );

}
// #include <stdio.h>
// #include <stdlib.h>

// char *to_hex(int *p)
// {
// 	unsigned long addr = (unsigned long)p;
//     char *base = "0123456789abcdef";
//     char buffer[17]; // enough for 64-bit address (16 digits)
//     char *str;
//     int i = 0;

//     if (addr == 0)
//         return strdup("0x0");

//     while (addr > 0)
//     {
//         buffer[i++] = base[addr % 16];
//         addr /= 16;
//     }

//     str = malloc(i + 3); // "0x" + digits + '\0'
//     str[0] = '0';
//     str[1] = 'x';
//     int j = 2;
//     while (i-- > 0)
//         str[j++] = buffer[i];
//     str[j] = '\0';
//     return str;
// }

// int main()
// {
//     int x = 42;
//     char *addr_str = to_hex(&x);
//     printf("Address: %s\n", addr_str);
//     free(addr_str);
//     return 0;
// }
