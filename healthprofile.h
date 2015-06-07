/*HealthProfile.h
 *HealthProfile class definition. This file represents HealthProfile's public
 * interface without revealing implementations of HealthProfile's member
 * functions, which are defined in HealthProfile.cpp
 *
 * Stub file for Programming Assignment #2
 *
 * Name:        [ EBONG, KINGSLEY FELIX ]
 * Matric No:   [ 46363513IJ ]
 * Department:  [ MATHEMATICS ]
 *
 */

#include <string>           // uses C++ string class
using namespace std;

// HealthProfile class definition
class HealthProfile
{
    // public interface
public:
    HealthProfile( string, string, string, int, int, int, int, double, int, int, int ); // constructor that initializes patient information
    int getAge();                   // function to get patients age in years
    double getBMI();                // function to calculate and return BMI
    int getMaximumHeartRate();      // function to calculate and return maximum heart rate
    double getTargetHeartRate();    // function to calculate and return target heart rate
    void getInformation();          // function to print object information
    
    //The get and set function prototypes of each class attribute
    
   void setAge(int);
   void setBMI(double);
   void setMaximumHeartRate(int);
   void setTargetHeartRate(double);
   void setInformation();
	

    // Function prototypes for the constructor, getAge(), getBMI(), getMaximumHeartRate()
    // getTargetHeartRate() and getInformation() has alrady been provided
	
   string getfirstName();
   string getlastName();
   string getgender();
   int getday();
   int getmonth();
   int getyear();
   int getweight();
   double getheight();
   int getcurrentday();
   int getcurrentMonth();
   int getthisYear();

 
    
    
    // private interface
private:
	
    string firstName;               // variable to hold firstname
    string lastName;                // variable to hold lastname
    string gender;                  // variable to hold gender
    int day;                      // variable to hold day
    int month;                        // variable to hold month
    int year;                       // variable to hold year
    double height;                  // variable to hold height
    int weight;                     // variable to hold weight
    int age;                        // variable to hold age
    
}; // end class HealthProfile

