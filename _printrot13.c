#include "main.h"
/**
*printrot_13 - main function
*@val: String pointer
*Return: return *s
*/
int printrot_13(va_list val)
{


char *s = va_arg(val, char*);
int k;
int r;

char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (k = 0; s[k] != '\0'; k++)
{
for (r = 0; r < 52; r++)
{
if (s[k] == data1[r])
{
s[k] = datarot[r];
break;
}
}
}
return (s);
}
