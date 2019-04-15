#include<stdio.h>
#include<string.h>
int main()
{
    short ln=0;
    char C[30];

    while(gets(C))
    {
        ln = strlen(C);

        for(int i=0; i<=ln; i++)
        {
            if(C[i] >=65 && C[i] <= 67)
                printf("2");
            else if(C[i] >=68 && C[i] <= 70)
                printf("3");
            else if(C[i] >=71 && C[i] <= 73)
                printf("4");
            else if(C[i] >=74 && C[i] <= 76)
                printf("5");
            else if(C[i] >=77 && C[i] <= 79)
                printf("6");
            else if(C[i] >=80 && C[i] <= 83)
                printf("7");
            else if(C[i] >=84 && C[i] <= 86)
                printf("8");
            else if(C[i] >=87 && C[i] <= 90)
                printf("9");
            else
                printf("%c",C[i]);
        }
        printf("\n");
    }

    return 0;
}
