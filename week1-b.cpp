#include <stdio.h>
#include<stdlib.h>
int main()
{
    printf("Enter the input string: ");
    char ch , inp[20];//input string
    scanf("%s",inp);
    int i=0,state=1;
    while(inp[i]!='\0')
    {
        ch=inp[i];
        switch(state)
        {
            case 1:if(ch=='a')
                   {
                       state=2;
                   }
                   else if(ch=='b')
                   {
                       state=4;
                   }
                   else
                   {
                        printf("invalid token");
                        exit(0);
                   }
                   break;
            case 2:if(ch=='a')
                   {
                       state=3;
                   }
                   else if(ch=='b')
                   {
                       state=4;
                   }
                   else
                   {
                        printf("invalid token");
                        exit(0);
                   }
                   break;
            case 3:if(ch=='a')
                   {
                       state=3;
                   }
                   else if(ch=='b')
                   {
                       state=4;
                   }
                   else
                   {
                        printf("invalid token");
                        exit(0);
                   }
                   break;
            case 4:if(ch=='a')
                   {
                       state=2;
                       
                   }
                   else if(ch=='b')
                   {
                       state=5;
                   }
                   else
                   {
                        printf("invalid token");
                        exit(0);
                   }
                   break;
            case 5:if(ch=='a')
                   {
                       state=2;
                   }
                   else if(ch=='b')
                   {
                       state=5;
                   }
                   else
                   {
                        printf("invalid token");
                        exit(0);
                   }
                   break;
        }
        i++;
    }
    if(state==3||state==5)
    {
        printf(" String is accepted");
    }
    else
    {
        printf(" String is not accepted");
    }

    return 0;
}

