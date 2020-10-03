# Bug 1

1. **The incorrect original code or code snippit that you wrote:**

``` 
int main()
{
    string user_input, temp, result;
    
    cout<<"Please enter the original sentence: ";
    getline(cin, user_input);
    
    for(size_t c=0;c<user_input.length();c++){
        if(user_input [c] == ' '){ 
            result += temp.substr(1)+ temp[0] + "KPU ";
            temp = "";
        }
        else{
            temp += (char)toupper(user_input[c]);
        }
    }
    

    cout<<"Translated: "<<result <<endl;
    
    return 0;
}
```

2. **What bug does the original code have?**

The code runs however if the sentance is only one word program will show nothing or if it is multiple words then it wont show the last word

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

Thinking that the for loop would catch the the null character however that is in c strings and not strings

4. **How to correct the bug?**

add piece of code at the end incase it does meet the for loop condition

5. **The corresponding bug-free code or code snippet is:**

```
int main()
{
    string user_input, temp, result;
    
    cout<<"Please enter the original sentence: ";
    getline(cin, user_input);
    
    for(size_t c=0;c<user_input.length();c++){
        if(user_input [c] == ' '){ 
            result += temp.substr(1)+ temp[0] + "KPU ";
            temp = "";
        }
        else{
            temp += (char)toupper(user_input[c]);
        }
    }
    
    result += temp.substr(1) + temp[0] + "KPU "; 
    cout<<"Translated: "<<result <<endl;
    
    return 0;
}
```

6. **What is the take-away message from this bug?**

That strings do not have a null character at the end like c strings

---

# Bug 2

1. **The incorrect original code or code snippit that you wrote:**

```
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

        average = total / 3;

        cout << endl;
        cout << "The average number of hours per day spent programming by "
                << "student " << student << " is " << average
                << endl << endl << endl;
    }

	return 0;
}
```

2. **What bug does the original code have?**

Code runs but no matter of the days it will only /3 
  
3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

No misunderstanding missed the calculation and forgot to change 3 to n

4. **How to correct the bug?**

Change 3 to n

5. **The corresponding bug-free code or code snippet is:**

```
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
```

6. **What is the take-away message from this bug?**

To look over code more cautiously to spot simple mistakes/bugs

---

# Bug 3

1. **The incorrect original code or code snippit that you wrote:**

```
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
        }else (bio_average == pro_average){
            cout <<"The Student spent the same amount on each subject" <<endl;
        }
    }
    return 0;
}
```

2. **What bug does the original code have?**

Else statement has a condition 

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

Thought that else needed to have a condition but already is a condition

4. **How to correct the bug?**

remove (bio_average == pro_average){

}

5. **The corresponding bug-free code or code snippet is:**

```
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
```

6. **What is the take-away message from this bug?**

That else statements do not need to be defined as the if and else if statements already define else statement 
