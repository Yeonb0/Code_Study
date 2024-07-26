#ifndef __EMPLOYEE_H
#define __EMPLOYEE_H

#define NAME_LEN     30

typedef struct _employee{
  int empNum;
  char name[NAME_LEN];
} Employee;

#endif