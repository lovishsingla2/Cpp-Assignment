#include <iostream>
#include <string>
using namespace std;
//declare strings
//have input statement
//call for entire line
// create a loop that stops when detecting a space but still goes through entire sentance otherwise make it capital
//store the word in a string then have another string to add it into but starting from pos 1 then add pos 2 and kpu then reset temp string
// program will repeat until done and display what is shows
// since no space at the end of the sentance unless one word
// error does not show when a single or last word
// Since no space is included in single word need to repeat the code within the if statement without condition and store into result
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