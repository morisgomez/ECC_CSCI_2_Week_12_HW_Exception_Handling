/*
 Program Name: Exception_Handling.cpp
 Programmer: Moris Gomez
 Date: Tuesday 05/3/2024
 Version Control: 10.0
 About: Week 12, CSCI 2, HW.
 Description:
 Design a class called Date. The class should store a date in
 three integers: month, day, and year.
 There should be member functions to print the date in the following forms:

 12/25/2015
 December 25, 2015
 25 December 2015

 The class should implement the following exception classes:

 InvalidDay->Throw when an invalid day (< 1 or > 31) is passed to the class.
 InvalidMonth->Throw when an invalid month (< 1 or > 12) is passed to the class.
 */

#include <iostream>
using namespace std;

class Date
{
private:
    int month;
    int day;
    int year;
public:
    //nested class for throwing object type to catch:
    class InvalidDay
    {
        //empty class btw.
    }; //end nested class InvalidDay.
    
    //nested class for throwing object type to catch:
    class InvalidMonth
    {
        //empty class btw.
    }; //end nested class InvalidMonth.
    
    //constructor:
    Date(int m, int d, int y)
    {
        if(m < 1 || m > 12)
        {
            throw InvalidMonth();
        }
        else if(d < 1 || d > 31)
        {
            throw InvalidDay();
        }
        else
        {
            month = m;
            day = d;
            year = y;
        }
    }
    
    //function #1:
    void print1()
    {
        cout << month << "/" << day << "/" << year << endl;
    } //end function.
    
    //function #2:
    void print2()
    {
        string mon;
        if(month == 1)
        {
            mon = "January";
        }
        else if(month == 2)
        {
            mon = "February";
        }
        else if(month == 3)
        {
            mon = "March";
        }
        else if(month == 4)
        {
            mon = "April";
        }
        else if(month == 5)
        {
            mon = "May";
        }
        else if(month == 6)
        {
            mon = "June";
        }
        else if(month == 7)
        {
            mon = "July";
        }
        else if(month == 8)
        {
            mon = "August";
        }
        else if(month == 9)
        {
            mon = "September";
        }
        else if(month == 10)
        {
            mon = "October";
        }
        else if(month == 11)
        {
            mon = "November";
        }
        else if(month == 12)
        {
            mon = "December";
        }
       //December 25, 2015
        cout << mon << " " << day << ", " << year << endl;
    } //end function.
    
    //function #3:
    void print3()
    {
        string mon;
        if(month == 1)
        {
            mon = "January";
        }
        else if(month == 2)
        {
            mon = "February";
        }
        else if(month == 3)
        {
            mon = "March";
        }
        else if(month == 4)
        {
            mon = "April";
        }
        else if(month == 5)
        {
            mon = "May";
        }
        else if(month == 6)
        {
            mon = "June";
        }
        else if(month == 7)
        {
            mon = "July";
        }
        else if(month == 8)
        {
            mon = "August";
        }
        else if(month == 9)
        {
            mon = "September";
        }
        else if(month == 10)
        {
            mon = "October";
        }
        else if(month == 11)
        {
            mon = "November";
        }
        else if(month == 12)
        {
            mon = "December";
        }
       //25 December 2015
        cout << day << " " << mon << " " << year << endl;
    } //end function.
}; //end class Date.


int main()
{
    try
    {
        //Date one(13, 2, 2024); //passed.
        //Date one(13, 37, 2024); //passed.
        //Date one(5, 3, 2024); //passed.
        Date one(5, -2, 2024); //passed.
        
        one.print1();
        one.print2();
        one.print3();
    } //end try.
    
    catch(Date::InvalidMonth) //type of throw & catch is object.
    {
        cout << "[ERROR] <-- Months cannot be less than 1 or greater than 12 -->" << endl;
    } //end catch.
    
    catch(Date::InvalidDay) //type of throw & catch is object.
    {
        cout << "[ERROR] <-- Days cannot be less than 1 or greater than 31 -->" << endl;
    } //end catch.

    return 0;
}
