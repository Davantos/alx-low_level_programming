#include "main.h"
#include <stdio.h>

/**
* infinite_add - adds two numbers
* @n1: number one.
* @n2: number two.
* @r: buffer that the function will use to store the result.
* @size_r: buffer size:
* Return: the pointer to dest.
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int c1 = 0, c2 = 0, op, bg, dr1, dr2, add = 0;

while (*(n1 + c1) != '\0')
c1++;
while (*(n2 + c2) != '\0')
c2++;
if (c1 >= c2)
bg = c1;
else
bg = c2;
if (size_r <= bg + 1)
return (0);
r[bg + 1] = '\0';
c1--, c2--, size_r--;
dr1 = *(n1 + c1) - 48, dr2 = *(n2 + c2) - 48;
while (bg >= 0)
{#include "main.h"
#include <stdio.h>
int isPrintableASCII(int n)
{
return (n >= 32 && n <= 126);
}
void printHexes(char *b, int start, int end)
{
int i = 0;

while (i < 10)
{
if (i < end)
printf("%02x", *(b + start + i));
else
printf("  ");
if (i % 2)
printf(" ");
i++;
}
}
void printASCII(char *b, int start, int end)
{
int ch, i = 0;

while (i < end)
{
ch = *(b + i + start);
if (!isPrintableASCII(ch))
ch = 46;
printf("%c", ch);
i++;
}
}
void print_buffer(char *b, int size)
{
int start, end;

if (size > 0)
{
for (start = 0; start < size; start += 10)
{
end = (size - start < 10) ? size - start : 10;
printf("%08x: ", start);
printHexes(b, start, end);
printASCII(b, start, end);
printf("\n");
}
}
else
printf("\n");
}
op = dr1 + dr2 + add;
if (op >= 10)
add = op / 10;
else
add = 0;
if (op > 0)
*(r + bg) = (op % 10) + 48;
else
*(r + bg) = '0';
if (c1 > 0)
c1--, dr1 = *(n1 + c1) - 48;
else
dr1 = 0;
if (c2 > 0)
c2--, dr2 = *(n2 + c2) - 48;
else
dr2 = 0;
bg--, size_r--;
}
if (*(r) == '0')
return (r + 1);
else
return (r);
}
