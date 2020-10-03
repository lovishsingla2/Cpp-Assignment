#include <iostream>
using namespace std;

int main()
{
    int numStudents;
    float numHours, total, average;
    int student, day = 0;	// these are the counters for the loops
    int n {};
    cout << "This program will find the average number of hours a day"
        << " that a student spent programming over a long weekend\n\n";
    cout << "How many students are there ?" << endl << endl;
    cin >> numStudents;
    cout << "Enter the number of days in the long weekend "<<endl;
    cin >> n;
    for (student = 1; student <= numStudents; student++)
    {
        total = 0;

        for (day = 1; day <= n; day++)
        {
            cout << "Please enter the number of hours worked by student "
                    << student << " on day " << day << "." << endl;
            cin >> numHours;

            total = total + numHours;
        }

        average = total / n;

        cout << endl;
        cout << "The average number of hours per day spent programming by "
                << "student " << student << " is " << average
                << endl << endl << endl;
    }

	return 0;
}