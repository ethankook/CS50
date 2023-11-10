#include <stdio.h>

int main(void)
{
    int height;
    printf("Give me a height for the pyramid.");
    scanf("%i", &height);
    while (height < 1 || height > 8)
    {
        printf("Give me height for the pyramid that is a positive integer between 1 and 9.");
        scanf("%i", &height);
    }

    for (int currentHeight = 1; currentHeight <= height; currentHeight++)
    {
        int spaces = height - currentHeight;
        int spaceCounter = 0;
        int hashCounter = 0;
        while (spaceCounter < spaces)
        {
            printf(" ");
            spaceCounter++;
        }

        while (hashCounter < currentHeight)
        {
            printf("#");
            hashCounter++;
        }
        hashCounter = 0;
        printf("  ");
        while (hashCounter < currentHeight)
        {
            printf("#");
            hashCounter++;
        }
        printf("\n");
    }
}
