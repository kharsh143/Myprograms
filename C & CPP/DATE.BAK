//#include<file.h>
#include<stdio.h>
void main()
{
    FILE *fp;
    char ch;
    fp=fopen("E:\\Harsh&sid\\IMAGE\\Lamborghini\\1.bmp","rb+");

    if(fp == NULL)
    {
	printf("Error in opening the image");
	fclose(fp);
	exit(0);
    }

    printf("Successfully opened the image file");

    while((ch = fgetc(fp))!=EOF)
    {
	printf("%c",ch);
    }

    printf("\nWriting to o/p completed");
}
