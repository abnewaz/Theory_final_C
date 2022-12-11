#include <stdio.h>
struct Student
{
    char name[50];
    int roll;
    int marks;
};
struct Student stu;
void func_print()
{
    printf("\nDisplaying Information:\n");
    printf("Name: %s\n", stu.name);
    printf("Roll number: %d\n", stu.roll);
    printf("Marks: %d\n", stu.marks);
}
int main()
{
    printf("Enter information:\n");
    printf("Enter name: ");
    fflush(stdin);
    gets(stu.name);
    printf("Enter roll number: ");
    scanf("%d", &stu.roll);
    printf("Enter marks: ");
    scanf("%d", &stu.marks);
    printf("\n");
    func_print();
    return 0;
}
