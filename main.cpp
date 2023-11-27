#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

//Class for main system
class System{
    private:
    public:
};

// Complaint Class
class Complaint {
    private:
	int id; // Complaint ID
	string description; // Complaint description
	Teacher *teacher; // Teacher who filed the complaint
	Department *department; // Department assigned to
	string status; // Complaint status (new, assigned, resolved or closed. The teacher or manager can view its status any time)
	string dateFiled; // Date complaint was filed
	string dateAssigned; // Date complaint was assigned to an employee
	string dateResolved; // Date complaint was marked as resolved
	string dateClosed; // Date complaint was closed
	//vector<string> assignedEmployees; // Employees assigned to the complaint
	string feedback; // Teacher's feedback
    public:
};

//Department Class
class Department{
    private:
    string name; //IT, accounts or admin.
    vector<Employee *> employees;
    Employee manager;
    vector<Complaint *> tasks;
    vector<Complaint *> assignedtasks;
    vector<Complaint *> completedtasks;
    public:
    void pushforReview();
    void notifyteacher();
    void assignTask();
    void completeTask();


};

// Employee Class INT A manager, INT B employee
class Employee {
    private:
	int id; // Employee ID
	string name; // Employee name
	string department; // Employee's department
    vector<string> tasks;
    public:
    //Employee
    void checkTasks();
    void completeTask();
    void updateSystem();
    //manager
    void reviewTask();
    void reviewRequest();
    void assignTask();
    void checkComplainProgress();
    void notifySystem();
};

// Teacher Class
class Teacher {
    private:
	int id; // Teacher ID
	string name; // Teacher name
    vector<string> notifications;
    public:
    void fileComplaint();//if there is any problem, or if any service/equipment is required, teacher shall forward her request to a particular supporting department such as IT, accounts or admin.
    void checkComplainProgress();
    void checkNotifications();
    void printNotifications();
    void clearNotifications();
    void recordFeedback();


};

//Admin Class, can be singelton
class Admin{
    private:
	int id; // Admin ID
	string name; // Admin name
    public:
    void addEmployee();
    void addManager();
    void addTeacher();
    void removeEmployee();
    void removeManager();
    void removeTeacher();
};

int main()
{
    return 0;
}