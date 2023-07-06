#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Ask for your name and where live
    string name = get_string("What is your name? ");
    string location = get_string("Where do you live? ");

    // Say hello with supplied name
    printf("Hello, %s, from %s!\n", name, location);

    // Practicing Arrays
    int m = get_int("size of array: ");

    int number[m];

    int n;
        do
        {
            n = get_int("first number: ");
            if (n < 0)
            {
                printf("Cannot be negative number\n");
            }
        }
        while(n < 0);

    int y;
        do
        {
            y = get_int("addend: ");
            if (y < 0)
            {
                printf("Cannot be negative number\n");
            }
        }
        while(y < 0);

        number[0] = n - 1;
        number[1] = n;

        for (int i = 2; i < m; i++)
        {
            number[i] = number[i - 1] + y;
        }
    int s = get_int("What position of array do you want?: ");

    printf("The number in this position is: %i\n", number[s]);
}
