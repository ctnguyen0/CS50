#include <cs50.h>
#include <stdio.h>

int main(void)
{
int h;
do
{
    printf("Height: ");
    h = get_int();
}
while (h < 0 || h > 23);

for (int r = 0; r < h; r++)
{
    for (int s = r; s < h - 1; s++)
    {
        printf(" ");
    }
    for (int a = 0; a < r + 1; a++)
    {
        printf("#");
    }
    {
        printf("  ");
    }
    for (int aa = 0; aa < r + 1; aa++)
    {
        printf("#");
    }
    printf("\n");
}
}


