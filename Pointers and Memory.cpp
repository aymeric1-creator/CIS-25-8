#include <iostream> 
#include <string> 
 using namespace std;

// Define a struct to represent a student 
struct Student { 
 int id; 
 string name; 
 double gpa; 
}; 
 
int main() { 
 // Declare an array of Student structs 
 Student students[3];  

 // Initialize the elements of the array 
 students[0] = {101, "Michael", 3.8}; 
 students[1] = {102, "Lakisha", 3.5}; 
 students[2] = {103, "Charlie", 3.9}; 


 // Access and print data from the array of structs 
 for (int i = 0; i < 3; ++i) { 
 cout << "Student ID: " << students[i].id  
<< ", Name: " << students[i].name  
<< ", GPA: " << students[i].gpa << std::endl; 
 } 
 
 return 0; 
} 
