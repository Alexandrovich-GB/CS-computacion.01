#include <iostream>
#include <iostream>

using namespace std;

// serie fibonacci 

void fibonacci (int n)
{   
    int resulda=1;
    int x=1 ;
    int y=0 ;
    for(int i=0 ; i< n;i++) 
        if(i <= 0 ){
            resulda = i;
        }
        else
        {
            resulda = x+y;
            x=y;
            y= resulda;
            cout<< resulda <<" ";
        }
}

int main() {

    int n = 10;
    fibonacci(n);


    return 0;
}
