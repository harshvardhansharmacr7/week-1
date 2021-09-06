#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // TODO: Prompt for start size
    int start, end, years = 0;
    do
    {
        start = get_int("enter a positive integer : ");
    }
    while(start < 1);

    // TODO: Prompt for end size
     do
    {
        end = get_int("enter a positive integer greater than start : ");
    }
    while(end < start);

    // TODO: Calculate number of years until we reach threshold
    while(start < end)
    {
        double born = 0, death = 0 ;
        born = start/3.0;
        death = start/4.0;
        start = start + (round(born) - round(death));
        years += 1;
    }
    printf("It will take %i years.", years);

    // TODO: Print number of years
}
