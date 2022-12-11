#include<stdio.h>
#include<string.h>
struct Point
{
    int a;
    int b;
};
struct Plant
{
    char name[50];
    int zone;
    int age;
};
int main()
{
    /* struct Point p1 = {10, 50};
    printf("a = %d\nb = %d",p1.a,p1.b); */

    struct Plant pla;
    strcpy(pla.name, "Tomato");
    pla.zone = 10;
    pla.age = 6;
    //printf("Plant name:%s\nHardiness zone:%d\nAge:%d month",pla.name, pla.zone, pla.age);

    struct Plant *ptr, pla1;
    ptr = &pla;
    printf("Plant name:%s\nHardiness zone:%d\nAge:%d month",ptr->name, ptr->zone, ptr->age);


    return 0;
}
