#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>

int main()
{
    FILE *f;
    f=fopen("/mnt/data/Academia/Comp Org/CO Lab Submissions/File_IO/sample1.txt","r+");
    char c;
    while(1)
    {
        if(c==EOF)
        break;
        else
        {
            c=fgetc(f);
            if(c=='\n')
            break;
        }
                
    }
    fprintf(f,"2nd year COE\n");


    return 0;
}