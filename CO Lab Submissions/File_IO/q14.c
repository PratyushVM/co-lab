//To create a folder with a file that contains my name and roll no

#include<stdio.h>
#include<string.h>
#include<sys/stat.h>
#include<sys/types.h>

int main()
{
    FILE *f;
    char c;
    mkdir("/mnt/data/Academia/Comp Org/CO Lab Submissions/File_IO/testfolder",0777);

    f=fopen("/mnt/data/Academia/Comp Org/CO Lab Submissions/File_IO/testfolder/testfile.txt","w+");
    char name[20],rno[20];
    printf("Enter name :\n");
    gets(name);
    printf("Enter roll number :\n");
    gets(rno);

    fprintf(f,"%s",name);
    fprintf(f,"\n");
    fprintf(f,"%s",rno);

    fclose(f);

    return 0;

}