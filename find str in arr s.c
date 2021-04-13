#include "stdio.h"
#include "string.h"
int main()  // 4
{
    int i = 0, findFlag = 1;    
    char x[13];
    char str[][13]={"Pascal", "Basic", "Fortran", "Java", "Visual C", "Visual Basic"};
    char *p = str;  

    printf("Input string:\n");
    gets(x);

    while(i<6 && findFlag)
    {
        if(strcmp(x,str[i]) == 0)
        {
            findFlag = 0;
        }
        i++;
		    p++;
    }
    if (! findFlag)    
    {
        printf("%s\n",x);
    }
    else
    {
         printf("Not find!\n");
    }
}
