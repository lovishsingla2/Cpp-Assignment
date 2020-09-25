# Bug 1

1. **The incorrect original code or code snippit that you wrote:**

``` 
#include <iostream>
using namespace std;

int main( ) {
    int selection;
  cout << "Which formula do you want to see?\n\n";
  cout << "1. Area of a circle\n";
  cout << "2. Area of a rectangle\n";
  cout << "3. Area of a cylinder\n";
  cout << "4. None of them!\n";
  cin >> selection;
  switch (selection) {
      case 1;
      cout << "Pi times radius squared\n";
      break;
      case 2:
      cout << "Length times width\n";
      break;
      case 3:
      cout << "Pi times radius squared times height\n";
      break;
      case 4:
      cout << "Well okay then, good bye!\n";
      break;
      default:
      cout << "Not good with numbers, eh?\n";
      
  }
  return 0;
}
```

2. **What bug does the original code have?**

Case 1 is followed by a semi colon instead of a colon

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

No misunderstanding some how it was mistyped

4. **How to correct the bug?**

Change from a semi colon to a colon.

5. **The corresponding bug-free code or code snippet is:**

```
#include <iostream>
using namespace std;

int main( ) {
    int selection;
  cout << "Which formula do you want to see?\n\n";
  cout << "1. Area of a circle\n";
  cout << "2. Area of a rectangle\n";
  cout << "3. Area of a cylinder\n";
  cout << "4. None of them!\n";
  cin >> selection;
  switch (selection) {
      case 1:
      cout << "Pi times radius squared\n";
      break;
      case 2:
      cout << "Length times width\n";
      break;
      case 3:
      cout << "Pi times radius squared times height\n";
      break;
      case 4:
      cout << "Well okay then, good bye!\n";
      break;
      default:
      cout << "Not good with numbers, eh?\n";
      
  }
  return 0;
}
```

6. **What is the take-away message from this bug?**

To check over simple things as it can lead to bugs.
---

# Bug 2

1. **The incorrect original code or code snippit that you wrote:**

```
#include <iostream>
#include <iomanip>
using namespace std;

int main( ) {
    cout << fixed << setprecision(2);
    cout <<"Please enter 0 to indicate USD->CAD conversion, or enter 1 to indicate CAD->USD conversion: \n";
    int conversion;
    const int conversion_rate {1.32};
    cin >> conversion;
    switch (conversion) {
        //usd to cad calc
    case 0:
        cout <<"Please enter the amount of USD dollars: \n";
        int USD;
        cin >> USD;
        cout <<"They can be converted to "<< USD * conversion_rate <<" CAD.\n";
    break;
    //cad to usd calc
    case 1:
        cout <<"Please enter the amount of CAD dollars: \n";
        int CAD;
        cin >> CAD;
        cout <<"They can be converted to "<< CAD / conversion_rate <<" USD.\n";
        break;
        default:
        cout <<"Sorry invalid option" <<endl;
    }
    return 0;
}
```

2. **What bug does the original code have?**

int for usd cad and conversion_rate should be changed to double so the user may enter decimal numbers. And Program will not run due to const int being a decimal number.
  
3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

Not thinking about possible complications or bug that would happen from using int instead of double.

4. **How to correct the bug?**

Change int to double for int usd cad and conversion_rate

5. **The corresponding bug-free code or code snippet is:**

```
#include <iostream>
#include <iomanip>
using namespace std;

int main( ) {
    cout << fixed << setprecision(2);
    cout <<"Please enter 0 to indicate USD->CAD conversion, or enter 1 to indicate CAD->USD conversion: \n";
    int conversion;
    const double conversion_rate {1.32};
    cin >> conversion;
    switch (conversion) {
        //usd to cad calc
    case 0:
        cout <<"Please enter the amount of USD dollars: \n";
        double USD;
        cin >> USD;
        cout <<"They can be converted to "<< USD * conversion_rate <<" CAD.\n";
    break;
    //cad to usd calc
    case 1:
        cout <<"Please enter the amount of CAD dollars: \n";
        double CAD;
        cin >> CAD;
        cout <<"They can be converted to "<< CAD / conversion_rate <<" USD.\n";
        break;
        default:
        cout <<"Sorry invalid option" <<endl;
    }
    
    return 0;
}
```

6. **What is the take-away message from this bug?**

That if a decimal may come into play use double as it will prevent bugs in the future.
---

# Bug 3

1. **The incorrect original code or code snippit that you wrote:**

```
#include <iostream>
using namespace std;
int main()
{
  int selection;
  cout << "Which formula do you want to see?\n\n";
  cout << "1. Area of a circle\n";
  cout << "2. Area of a rectangle\n";
  cout << "3. Area of a cylinder\n"
  cout << "4. None of them!\n";
  cin >> selection;

```

2. **What bug does the original code have?**

Missing a semicolon  

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

No misunderstanding was from code off of review_session.md and didnt realize the bug.

4. **How to correct the bug?**

Add a semi colon 

5. **The corresponding bug-free code or code snippet is:**

```
#include <iostream>
using namespace std;
int main()
{
  int selection;
  cout << "Which formula do you want to see?\n\n";
  cout << "1. Area of a circle\n";
  cout << "2. Area of a rectangle\n";
  cout << "3. Area of a cylinder\n";
  cout << "4. None of them!\n";
  cin >> selection;

```

6. **What is the take-away message from this bug?**

To not use code without checking over it for bugs
