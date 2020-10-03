// This program finds the average time spent programming by a student
// each day over a three day period.

// PLACE YOUR NAME HERE

#include <iostream>
using namespace std;

int main()
{
    int numStudents;
    float pro_num_hours, pro_total, pro_average;
    float bio_num_hours, bio_total, bio_average;
    int student, day = 0;	// these are the counters for the loops
    int n {0}; 
    
    
    cout << "This program will find the average number of hours a day"
            << " that a student studied Programming and biology over a long weekend\n\n";
    cout << "How many students are there ?" << endl << endl;
    cin >> numStudents;
    
    cout <<"Enter the number of days in the long weekend : ";
    cin >> n;
    
    
    for (student = 1; student <= numStudents; student++)
    {
        pro_total = 0;
        bio_total =0;
        for (day = 1; day <= n; day++)
        {
                        cout << "\nPlease enter the number of hours spent programming by student "
                        << student << " on day " << day << "." << endl;
            cin >> pro_num_hours;
            
            
            cout << "\nPlease enter the number of hours spent on biology by student "
            << student << " on day " << day << "." << endl;
            cin >> bio_num_hours;
            
            bio_total = bio_total + bio_num_hours;
            pro_total = pro_total + pro_num_hours;
        }
    
    
        pro_average = pro_total / n;
        bio_average = bio_total / n;
        
        if(bio_average > pro_average){
            cout <<"The student spent more time studying biology" <<endl;
        }else if (bio_average < pro_average){
            cout <<"The Student spent more time studying programming"<<endl;
        }else
            cout <<"The Student spent the same amount on each subject" <<endl;
        
    }
    return 0;
}