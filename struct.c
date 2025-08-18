#include <stdio.h>

struct student {
    int roll;
    int name[10];
};

int main() {
    struct student s1;
    printf("Enter your roll number : ");    scanf("%d", &s1.roll);
    printf("Enter your name : ");           scanf("%s", &s1.name);

    printf("%s", s1.name);
    return 0;
}