#include <stdio.h>
#include <string.h>

struct employee{
    char name[30];
    int point;
    double salary;
};

struct employee informationUpdate(struct employee temp)
{
    temp.point += 5;
    temp.salary += 5000;

    return temp;
}

int main()
{
    struct employee staff;
    struct employee currentWorkerInformation;

    strcpy(staff.name, "Ahmet");
    staff.point = 75;
    staff.salary = 35000; 

    currentWorkerInformation = informationUpdate(staff);

    printf("%s\t%d\t%lf", currentWorkerInformation.name, currentWorkerInformation.point, currentWorkerInformation.salary);
}