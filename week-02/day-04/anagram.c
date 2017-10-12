#include <stdio.h>
#include <string.h>

int main (void) {
    char str1[] = "god";
    char str2[] = "dog";
    
    char temp;
    int n  = strlen(str1);
    int n1 = strlen(str2);
    
    if( n != n1)
    {
        printf("Not anagrams! \n");
        return 0;
    }
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (str1[i] > str1[j])
            {
                temp  = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
            
            if (str2[i] > str2[j])
            {
                temp  = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }
    
    
    for(int i = 0; i<n; i++)
    {
        if(str1[i] != str2[i])
        {
            printf("Not anagrams! \n");
            return 0;
        }
    }
    
    printf("Anagrams! \n");
    return 0;
}
