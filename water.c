#include <cs50.h>
#include <stdio.h>

int main(void)
{
int i;
do
{
    printf("Minutes: ");
    i = get_int();
    int y = 12;
    printf("Bottles: %i\n", i * y);
}
while (i < 0);
}
