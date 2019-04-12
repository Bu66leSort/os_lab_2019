#include "revert_string.h"

void RevertString(char *str)
{
    int size = strlen(str)/2;
    for(int i=0; i < size/2; i++)
    {
        char temp=str[i];
        str[i]=str[size-i-1];
        str[size-i-1]=temp;
    }
}


