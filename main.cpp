#include <iostream>

using namespace std;

int main () 
{
    bool isMale = true;
    bool isTall  = false;
    if(isMale && isTall) {
        cout << "You are a tall male";
    }
    else if(isMale && !isTall) {
        cout << "You are male but not tall";
    }
    else if(!isMale && isTall) {
        cout << "You are tall but not male";
    }
    else {
        cout << "you are not a male and not tall";
    }

    return 0;
}