# Bug 1

1. **The incorrect original code or code snippit that you wrote:**

``` 
#include <iostream>

int main( ) {
    int speed {20};
    
    int time = {10};
    
    int distance;
    
    speed * time = distance
    
    std::cout << distance <<std::endl;
    
    return 0;
}


```

2. **What bug does the original code have?**
Distance should be first instead of speed or time. When defining a variable it should be the first thing in the line. 

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**
Thinking that the variable could be placed any where when being defined 

4. **How to correct the bug?**
Put the variable that is being defined at the front

5. **The corresponding bug-free code or code snippet is:**

```
#include <iostream>

int main( ) {
    int speed {20};
    
    int time = {10};
    
    int distance;
    
    distance = speed * time;
    
    std::cout << distance <<std::endl;
    
    return 0;
}


```

6. **What is the take-away message from this bug?**
To list the variable that needs to be first before defining what it does.
---

# Bug 2

1. **The incorrect original code or code snippit that you wrote:**

```
#include <iostream>

int main( ) {
    double force {172.5};
    
    double area {27.5};
    
    int pressure;
    
    pressure =  area / force;
    
    std::cout << pressure << std::endl;
    
}


```

2. **What bug does the original code have?**
Have int instead of another double
  
3. **What misunderstanding of C++ concepts lead you to this incorrect code?**
Not being 100% sure of whether the 3 variable would be a int or a double

4. **How to correct the bug?**
Change int to double

5. **The corresponding bug-free code or code snippet is:**

```
#include <iostream>

int main( ) {
    double force {172.5};
    
    double area {27.5};
    
    double pressure;
    
    pressure =  area / force;
    
    std::cout << pressure << std::endl;
    
}


```

6. **What is the take-away message from this bug?**
That if the end number will result in a decimal that it should not be int but double instead.
---

# Bug 3

1. **The incorrect original code or code snippit that you wrote:**

```
#include <iostream>

int main( ) {
    double force {172.5}
    
    double area {27.5}
    
    double pressure;
    
    pressure =  area / force;
    
    std::cout << pressure << std::endl;
    
}

```

2. **What bug does the original code have?**
Missing 2 semicolons
  

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**
The concept of assigning the variable in the same statement instead of 2 seperate statements

4. **How to correct the bug?**
Add semicolons to the two lines that are missing them

5. **The corresponding bug-free code or code snippet is:**

```
#include <iostream>

int main( ) {
    double force {172.5};
    
    double area {27.5};
    
    double pressure;
    
    pressure =  area / force;
    
    std::cout << pressure << std::endl;
    
}

```

6. **What is the take-away message from this bug?**

To add a semicolon after assigning the variable in the line
