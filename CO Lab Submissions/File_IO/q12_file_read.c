//To open,read and close a file

#include<stdio.h>

int main()
{
    FILE *f;
    char c;

    f = fopen("/mnt/data/Academia/Comp Org/CO Lab Submissions/File_IO/sample.txt","r");

    while(1)
    {
        c = fgetc(f);

        if(c==EOF)
            break;
        else
        {
            printf("%c",c);
        }
    }

    fclose(f);
    
    return 0;
    
}