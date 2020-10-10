
# Bug 1

1. **The incorrect original code or code snippit that you wrote:**

``` 
#include <iostream>
using namespace std;

void greater_than(int nums[], int size, int n);
int main(){
    int n [10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    cout <<"=============================================";
    cout <<"\nTest case 1" <<endl;
    greater_than(n, 10 , 2);
    cout <<"\n=============================================";
    cout <<"\nTest case 2" <<endl;
    greater_than(n, 10, 4);
    cout <<"=============================================\n";
    return 0;
}
void greater_than(int nums[], int size, int n){
    for(int i{0}; i < size; ++i) {
        if (nums[i] > n){
            cout << nums[i]<<endl;
        }
    }
}
```

2. **What bug does the original code have?**

the 8 and 6 should be 10 for both as it will only show 8 and 6 numbers

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

Thinking that the number only needed to be the amount of numbers showing and not the total amount of numbers

4. **How to correct the bug?**

change 8 and 6 to 10

5. **The corresponding bug-free code or code snippet is:**

```
#include <iostream>
using namespace std;

void greater_than(int nums[], int size, int n);
int main(){
    int n [10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    cout <<"=============================================";
    cout <<"\nTest case 1" <<endl;
    greater_than(n, 10 , 2);
    cout <<"\n=============================================";
    cout <<"\nTest case 2" <<endl;
    greater_than(n, 10, 4);
    cout <<"=============================================\n";
    return 0;
}
void greater_than(int nums[], int size, int n){
    for(int i{0}; i < size; ++i) {
        if (nums[i] > n){
            cout << nums[i]<<endl;
        }
    }
}
```

6. **What is the take-away message from this bug?**

That the amount of numbers needs to be the total amount of numbers and not the amount showing

---

# Bug 2

1. **The incorrect original code or code snippit that you wrote:**

```
include <iostream>
using namespace std;

bool prime_check(int);

int main() {
    int number;
    cout << "Please enter one positive integer: ";
    cin >> number;

    if (prime_check(number)){
        cout << number << " is a prime number.\n";
    }else
        cout << number << " is not a prime number.\n";
        
    return 0;
}

bool prime_check(int number) {
    bool isPrime = true;
    if (number == 0 || number == 1) {
        isPrime = false;
    }
    else 
        for (int i = 2; i < sqrt(number); ++i) {
            if (number % i == 0) {
                isPrime = false;
            }
        }
    return isPrime;
}

```

2. **What bug does the original code have?**
Missing #include <cmath>
  
3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

Forgot to include cmath

4. **How to correct the bug?**
Add cmath to the top of the code

5. **The corresponding bug-free code or code snippet is:**

```
#include <iostream>
#include <cmath>
using namespace std;

bool prime_check(int);

int main() {
    int number;
    cout << "Please enter one positive integer: ";
    cin >> number;

    if (prime_check(number){
        cout << number << " is a prime number.\n";
    }else
        cout << number << " is not a prime number.\n";
        
    return 0;
}

bool prime_check(int number) {
    bool isPrime = true;
    if (number == 0 || number == 1) {
        isPrime = false;
    }
    else 
        for (int i = 2; i < sqrt(number); ++i) {
            if (number % i == 0) {
                isPrime = false;
            }
        }
    return isPrime;
}
```

6. **What is the take-away message from this bug?**
To check what headers are needed at the top of the code

---

# Bug 3

1. **The incorrect original code or code snippit that you wrote:**

```
#include <iostream>
#include <cmath>
using namespace std;

bool prime_check(int);

int main() {
    int number;
    cout << "Please enter one positive integer: ";
    cin >> number;

    if (prime_check(number){
        cout << number << " is a prime number.\n";
    }else
        cout << number << " is not a prime number.\n";
        
    return 0;
}

bool prime_check(int number) {
    bool isPrime = true;
    if (number == 0 || number == 1) {
        isPrime = false;
    }
    else 
        for (int i = 2; i < sqrt(number); ++i) {
            if (number % i == 0) {
                isPrime = false;
            }
        }
    return isPrime;
}
```

2. **What bug does the original code have?**
Is missing a single )

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**
Forgot to add another ) to close the if statement

4. **How to correct the bug?**
 add )


5. **The corresponding bug-free code or code snippet is:**

```
#include <iostream>
#include <cmath>
using namespace std;

bool prime_check(int);

int main() {
    int number;
    cout << "Please enter one positive integer: ";
    cin >> number;

    if (prime_check(number)){
        cout << number << " is a prime number.\n";
    }else
        cout << number << " is not a prime number.\n";
        
    return 0;
}

bool prime_check(int number) {
    bool isPrime = true;
    if (number == 0 || number == 1) {
        isPrime = false;
    }
    else 
        for (int i = 2; i < sqrt(number); ++i) {
            if (number % i == 0) {
                isPrime = false;
            }
        }
    return isPrime;
}
```

6. **What is the take-away message from this bug?**
To watch for simple mistakes that can break a program
