#include <stdio.h>

/*****************************************************************************************************************/
/********************************************* Function declarations ********************************************/
int re_set_bit(int, int, int);
void print_binary(int);

/*****************************************************************************************************************/

int main()
{

    re_set_bit(3, 2, 1);
    // print_binary(255);

    return 0;
}

/*---------------------------------------------------------------------------------------------------------------*/
/// @brief , This function performs operation on a given number to set or reset the given bit position.
/// @param n , given number
/// @param p , given bit positon
/// @param sr , to set or reset
/// @return
/*---------------------------------------------------------------------------------------------------------------*/
int re_set_bit(int n, int p, int sr)
{
    printf("Binary of Current No:");
    print_binary(n); printf("\n");
    if (1 == sr) // check if set or reset is required
    {
        n = n | (1 << p); // to set the bit
    }
    else
    {
        n = n & ~(1 << p); // to reset the bit
    }
    printf(" new number: %d \n", n);
    printf("Binary of new No:");
    print_binary(n); printf("\n");
    return 0;
}

/*---------------------------------------------------------------------------------------------------------------*/

/// @brief Convert a given decimal number into its equivqlent binary
/// @param num the given number
/// @return ... 
void print_binary(int num)
{
    int bin_arr[64] = {0};
    int i,j=0;
    while (num > 0)
    {
        bin_arr[i++] = num % 2;
        num = num / 2;
    }
    for (j = i; j >= 0; j--)
    {
        printf("%d", bin_arr[j]);
    }
    // return 0;
}