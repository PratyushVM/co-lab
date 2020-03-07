#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>

int main()
{
    FILE *f,*f1;
    f=fopen("/mnt/data/Academia/Comp Org/CO Lab Submissions/File_IO/sample1.txt","r+");
    f1=fopen("/mnt/data/Academia/Comp Org/CO Lab Submissions/File_IO/sample16.txt","w+");
    char s[100];
    fgets(s,99,f);
    fprintf(f1,"%s",s);
    printf("Enter string to be inserted in line 2:\n");
    scanf("%s",s);
    fprintf(f1,"%s\n",s);
    while(fgets(s,99,f)!=NULL)
    {
        fprintf(f1,"%s",s);
    }


    return 0;
}
