#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>

int main()
{
    FILE *f,*f1;
    f=fopen("/mnt/data/Academia/Comp Org/CO Lab Submissions/File_IO/sample1.txt","r");
    f1=fopen("/mnt/data/Academia/Comp Org/CO Lab Submissions/File_IO/sample15.txt","w");
    char s[100];
    fgets(s,99,f);
    fprintf(f1,"%s",s);
    fprintf(f1,"2nd year COE\n");
    while(fgets(s,99,f)!=NULL)
    {
        fprintf(f1,"%s",s);
    }


    return 0;
}
