#include <stdio.h>

// Define the structure 'employee'
struct employee {
    char name[25];         // Employee name
    int id;                // Employee ID
    char department[20];   // Department name
    float salary;          // Employee salary
    char email[50];        // Employee email
};

int main() {
    // Declare and initialize an employee variable
    struct employee emp = {
        "John Doe",            // Name
        12345,                 // ID
        "Human Resources",     // Department
        55000.50,             // Salary
        "johndoe@company.com"  // Email
    };

    // Print the employee details
    printf("Employee Name: %s\n", emp.name);
    printf("Employee ID: %d\n", emp.id);
    printf("Department: %s\n", emp.department);
    printf("Salary: %.2f\n", emp.salary);
    printf("Email: %s\n", emp.email);

    return 0;
}