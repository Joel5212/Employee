#include <string.h>
#include "employee.h"
PtrToEmployee searchEmployeeByPhoneNumber(PtrToConstEmployee ptr, int tableSize, char *targetPhoneNumber)
{
    const PtrToConstEmployee endPtr = ptr + tableSize;

    for (; ptr < endPtr; ptr++)
    {
        if (strcmp(ptr->phone, targetPhoneNumber) == 0)
            return (PtrToEmployee)ptr;
    }
    return NULL;
}

PtrToEmployee searchEmployeeBySalary(PtrToConstEmployee ptr, int tableSize, double targetSalary)
{
    const PtrToConstEmployee endPtr = ptr + tableSize;

    for (; ptr < endPtr; ptr++)
    {
        if (ptr->salary == targetSalary)
            return (PtrToEmployee)ptr;
    }
    return NULL;
}
