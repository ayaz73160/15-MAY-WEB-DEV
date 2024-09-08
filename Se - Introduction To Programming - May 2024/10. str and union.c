#include <stdio.h>
#include <string.h>

struct struct_ex 
{
    int integer;
    float decimal;
    char name[20];
};


union union_ex 
{
    int integer;
    float decimal;
    char name[20];
};

int main() 
{
    struct struct_ex s;
    s.integer = 18;
    s.decimal = 38.5;
    strcpy(s.name, "Structure");

    union union_ex u;
    u.integer = 18;
    u.decimal = 38.5;
    strcpy(u.name, "Union");

    printf("Structure data:\n");
    printf("Integer: %d\n", s.integer);
    printf("Decimal: %.2f\n", s.decimal);
    printf("Name: %s\n", s.name);

    printf("\nUnion data:\n");
    printf("Integer: %d\n", u.integer);
    printf("Decimal: %.2f\n", u.decimal);
    printf("Name: %s\n", u.name);

    printf("\nSize of structure: %lu\n", sizeof(s));
    printf("Size of union: %lu\n", sizeof(u));

    return 0;
}

