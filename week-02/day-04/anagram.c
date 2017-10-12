#include <stdio.h>
#include <string.h>


//int is_anagram( char str1[] , char str2[]);

int main()
{
//    is_anagram( "odg" , "fog");
    char str1[] = "dof";
    char str2[] = "dxxxxx";
    
//    if (strlen(str1) == strlen(str2))
//    {
        //counts the nr of same letters in str1
        int arr1[256] = {0};
        for (int i = 0; i < strlen(str1); i++)
        {
            arr1[str1[i]]++;
            printf("%c - %d\n", str1[i], arr1[str1[i]]);
            
            int arr2[256] = {0};
            for (int j = 0; j < strlen(str2); j++)
            {
                arr2[str2[j]]++;
            }
        
        }
 
        //counts the nr of same letters in str2
        int arr2[256] = {0};
        for (int i = 0; i < strlen(str2); i++)
        {
            arr2[str2[i]]++;
        }
    
    return 0;
}



