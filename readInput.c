#include <stdio.h>


/* computes the dimensional weight of a box
provided by the user */

int main(void)
{
    int height, width, length, volume, weight;

    printf("Enter height of box: ");
    scanf("%d", &height);
    printf("Enter width of box: ");
    scanf("%d", &width);
    printf("Enter length of box: ");
    scanf("%d", &length);

    volume = length * width * height;
    weight = (volume + 165) / 166;

    printf("Volume: %d\n", volume);
    printf("Dimensional weight: %d\n", weight);

    return 0;
}