#include <stdio.h>
#include <stddef.h>

typedef struct
{
    long number;
    char *name;
    char *phone;
    double salary;
} Employee, *PtrToEmployee;
//Either called Employee or the pointer of type Employee
typedef const Employee *PtrToConstEmployee;