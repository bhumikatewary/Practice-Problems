#include <iostream>
#include <string.h>
using namespace std;

class AddString {
 
public:
    char s1[25], s2[25];
    AddString(char str1[], char str2[])
    {
        strcpy(s1, str1);
        strcpy(s2, str2);
    }

    void operator+()
    {
        cout << "\nConcatenation: " << strcat(s1, s2);
    }
};
 

int main()
{
    char str1[] = "Geeks";
    char str2[] = "ForGeeks";
 
    AddString a1(str1, str2);
 
    +a1;
    return 0;
}
