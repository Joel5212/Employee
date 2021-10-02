#include <string.h>
#include <stdlib.h>
#include "employee.h"

Employee EmployeeTable[] =
    {
        {1001l, "Daphe Borromeo", "909-555-2134", 8.78},
        {1011l, "Tammy Franklin", "213-555-1212", 4.50},
        {1140l, "Dorris Perl", "310-555-1215", 7.80},
        {1140l, "Tony Bobcat", "909-555-1235", 6.80},
        {5045l, "Brian Height", "714-555-2749", 8.32}

};

//Padding is gcc compiler. Each member in struct Employee = 8 bytes because of padding in memory which is
//sizeof(EmployeeTable[0])) is 32
const int EmployeeTableEntries = sizeof(EmployeeTable) / sizeof(EmployeeTable[0]);