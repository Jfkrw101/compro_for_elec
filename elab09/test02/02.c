#include <stdio.h>
#include <stdlib.h>

typedef struct{
    unsigned int day;
    unsigned int month;
    unsigned int year;

}Date;


typedef struct{
    char name[40],artist[40];
    Date create;
}record;

int main(){
    record a;
    printf("Title of music is: ");
    gets(a.name);
    printf("Artist of music is: ");
    gets(a.artist);
    printf("Input Day/Month/Year of music: ");
    scanf("%u/%u/%u",&a.create.day,&a.create.month,&a.create.year);
    printf("Title of music is %s",a.name);
    printf("\nArtist of music is %s",a.artist);
    printf("\nDate of music is %u/%u/%u",a.create.day,a.create.month,a.create.year);

    return 0;
}