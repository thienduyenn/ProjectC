
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "staff.h"


int main() {
    struct StaffManagement listStaffManagement[85];
    int numberOfStaff = 0;
//    struct StaffManagement newStaff1 = {001, "TD", 22};
//    bool check = insertStaffManagement(listStaffManagement, newStaff1, &numberOfStaff);
//    struct StaffManagement newStaff2 = {2, "KH", 23};
//    insertStaffManagement(listStaffManagement, newStaff2, &numberOfStaff);
//    struct StaffManagement newStaff3 = {3, "HA", 22};
//    insertStaffManagement(listStaffManagement, newStaff1,&numberOfStaff);
//    insertStaffManagement(listStaffManagement,  newStaff2,&numberOfStaff);
//    insertStaffManagement(listStaffManagement, newStaff3,&numberOfStaff);
    ShowAllStaff(listStaffManagement, &numberOfStaff);
    char fileName[] = "Staff.txt";
    FILE *file = fopen("Staff.txt", "r");
    if (file == NULL) {
        printf( " Khong the mo file\n");
    }
    while(!feof(file)) {
        struct StaffManagement Staff;
        fscanf(file, "%d", &Staff.id);
        fscanf(file, "%s", Staff.name);
        fscanf(file, "%d", &Staff.age);
        insertStaffManagement(listStaffManagement, Staff,&numberOfStaff);
    }
    ShowAllStaff(listStaffManagement, &numberOfStaff);
//    for( int i = 0; i < numberOfStaff; i++){
//        fprintf(file, "ID: %d", listStaffManagement[i].id);
//        fprintf(file,"\tName: %s", listStaffManagement[i].name);
//        fprintf(file,"\tAge: %d\n", listStaffManagement[i].age);
}


