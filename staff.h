//
// Created by THIEN DUYEN on 4/21/2024.
//

#ifndef PROJECTC_STAFF_H
#define PROJECTC_STAFF_H

#include <stdio.h>
#include <string.h>
#include <stdbool.h>


struct StaffManagement {
    int id;
    char name [50];
    int age;
    char role;
};

bool insertStaffManagement(struct StaffManagement *listStaffManagement, struct StaffManagement newStaff, int *numberOfStaff){
    bool flag = false;
    if(*numberOfStaff < 85) {
        listStaffManagement[*numberOfStaff]  = newStaff;
        *numberOfStaff += 1;
        flag = true;
    }
    return flag;
}
bool removeStaffManagement(struct StaffManagement *listStaffManagement, int id, int *numberOfStaff){
    bool flag = false;
    for(int i = 0; i < *numberOfStaff; i++) {
        if (listStaffManagement[i].id == id) {
            for (int j = i; j < *numberOfStaff - 1; j++){
                listStaffManagement[j] = listStaffManagement[j + 1];
            }
            *numberOfStaff -= 1;
            flag = true;
            break;
        }
    }
    return flag;
}
bool updateStaffManagement(struct StaffManagement *listStaffManagement, int id, struct StaffManagement newInfoStaff, int *numberOfStaff){
    bool flag = false;
    for (int i = 0; i < *numberOfStaff; i++){
        if (listStaffManagement[i].id == id) {
            listStaffManagement[i].age == newInfoStaff.age;
            strcpy( listStaffManagement[i].name, newInfoStaff.name);
            flag = true;
            break;
        }
    }
    return flag;
}
void ShowAllStaff(struct StaffManagement *listStaffManagement, int *numberOfStaff){
    for( int i = 0; i < *numberOfStaff; i++){
        printf("ID: %d", listStaffManagement[i].id);
        printf("\tName: %s", listStaffManagement[i].name);
        printf("\tAge: %d\n", listStaffManagement[i].age);
    }
}
#endif //PROJECTC_STAFF_H
