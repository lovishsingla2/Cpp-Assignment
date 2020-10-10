#include <iostream>
using namespace std;
//need 3 arguments so int an array int size and int n
//since it will only contain integers dont worry about double or size_t
//Create an array 1-10 used for simplicity
//create a prototype then create a function
//create a function called greater_than
//create a for loop to cycle through the numbers
//create an if statement with the for loop to add the condition of greater than
//then use the function and specify how many integers in the array and what we want the greater than condition to be
//copy the function and set the conditon to something else for testing
//complete

//bugs
//greater_than(n, 8 , 2);

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