#include <stdio.h>
 


void reverse(char* start,char* finish)
{
    char ltr;
    while (start < finish)
    {
        ltr = *start;
        *start++ = *finish;
        *finish-- = ltr;
    }
}
 
// Function to reverse words
void reverseW(char* s)
{
    char* w_start = s;
 
   
    char* ltr = s;
 
   
    while (*ltr)
    {
        ltr++;
        if (*ltr =='\0')
        {
            reverse(w_start,ltr - 1);
        }
        else if (*ltr == ' ')
        {
            reverse(w_start,ltr - 1);
            w_start = ltr + 1;
        }
    }
 
    
}
 

int main()
{
    char s[] =
    "This is a test for the project top";
    char* temp = s;
    reverseW(s);
    printf("%s", s);
    return 0;
}