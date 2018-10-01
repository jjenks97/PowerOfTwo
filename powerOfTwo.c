#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool powerOfTwo (int x)
{
    if (x == 0)
    {
        return 0;
    }
    while (x > 1)
    {
        if(x % 2 != 0)
        {
            return 0;
        }
        x = x/2;
    }
    return 1;
}

int main()
{
    int x = 57;
    int y = 128;
    powerOfTwo(x)? printf("%i is a power of two.\n", x): printf("%i is not a power of two.\n", x);
    powerOfTwo(y)? printf("%i is a power of two.\n", y): printf("%i is not a power of two.\n", y);
    return 0;
}