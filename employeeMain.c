#include <string.h>
#include <stdlib.h>
#include "employee.h"
//gcc employeeMain.c employeeTable.c employeeOne.c
//gcc employeeMain.c employeeTable.c employeeTwo.c
int main(void)
{
    //defined in employeeOne.c or employeeTwo.c
    PtrToEmployee searchEmployeeByPhoneNumber(const Employee table[], int tableSize, char *targetPhoneNumber);
    PtrToEmployee searchEmployeeBySalary(const Employee table[], int tableSize, double targetSalary);

    //defined in rmployeeTable.c
    extern Employee EmployeeTable[];
    extern const int EmployeeTableEntries;

    PtrToEmployee matchPtr; //Delcaration

    //Phone number in record
    matchPtr = searchEmployeeByPhoneNumber(EmployeeTable, EmployeeTableEntries, "909-555-1235");
    if (matchPtr != NULL)
    {
        printf("Employee Phone Number 909-555-1235 is in record %d\n", matchPtr - EmployeeTable);
    }
    else
    {
        printf("Employee Phone Number 909-555-1235 is NOT FOUND in record\n");
    }

    //Phone number not in record
    matchPtr = searchEmployeeByPhoneNumber(EmployeeTable, EmployeeTableEntries, "999-555-2225");
    if (matchPtr != NULL)
    {
        printf("Employee Phone Number 909-555-1235 is in record %d\n", matchPtr - EmployeeTable);
    }
    else
    {
        printf("Employee Phone Number 909-555-1235 is NOT FOUND in record\n");
    }

    //Salary in record
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 6.80);
    if (matchPtr != NULL)
    {
        printf("Employee Salary 6.80 is in record %d\n", matchPtr - EmployeeTable);
    }
    else
    {
        printf("Employee Salary 6.80 is NOT FOUND in record\n");
    }

    //Salary not in record
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 2.80);
    if (matchPtr != NULL)
    {
        printf("Employee Salary 2.80 is in record %d\n", matchPtr - EmployeeTable);
    }
    else
    {
        printf("Employee Salary 2.80 is NOT FOUND in record\n");
    }

    return EXIT_SUCCESS;

    //Example Found
}