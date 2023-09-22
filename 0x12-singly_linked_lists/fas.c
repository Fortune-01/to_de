#include <stdio.h>

/**
 * Function to print the message
 */
void Message(void)
{
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}
int main(void)
{
    /** 
     * Call the printMessage function before the main function logic
     */
    Message();
    
    printf("(A tortoise, having pretty good sense of");
    printf(" a hare's nature, challenges one to a race.)\n");
    
    return (0);
}

