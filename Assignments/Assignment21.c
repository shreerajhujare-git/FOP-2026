//This program is to copy contents of one file to another using file handling in C.
#include <stdio.h>
#include <stdlib.h>
int main()

{
    FILE *source,*dest;
    char ch ;
    source=fopen("source.txt","r");
    if(source==NULL)
    {
        printf("Unable to open source file");
        exit(0);    
    }
    dest=fopen("destination.txt","w");
    if(dest==NULL)
    {
        printf("Unable to open destination file");
        exit(0);        
    }
    while((ch=fgetc(source))!=EOF)
    {
        fputc(ch,dest);
    }
    printf("File copied successfully");
    fclose(source);
    fclose(dest);
    return 0;       
}