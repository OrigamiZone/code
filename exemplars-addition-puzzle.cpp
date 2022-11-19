/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <time.h>

using namespace std;

int unequeRand (int a1, int a2, int a3, int a4, int a5, int a6, int s1, int s2, int s3) {
    int i = 0;
    int r = 0;
    while (i < 1000) {
        i++;
        r = (rand() % 9) + 1;
        
        if(r != a1 && r != a2 && r != a3 && r != a4 && r != a5 && r != a6 && r != s1 && r != s2 && r != s3) {
            return r;
        }
    }
    return -1;
}


int main() {
    cout<<"Lets do math !!!";

    srand(time(NULL));
    
    int a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0;
    int s1 = 0, s2 = 0, s3 = 0;

    int i = 0;  // Allow 500 guesses.
    while ((s1 + s2 + s3 != 18 || s1 > 9) && i < 500) {
        a1 = 0;
        a2 = 0;
        a3 = 0;
        a4 = 0;
        a5 = 0;
        a6 = 0;
        s1 = 0;
        s2 = 0;
        s3 = 0;
        
        i++;
        a6 = unequeRand(a1, a2, a3, a4, a5, a6, s1, s2, s3);
        a5 = unequeRand(a1, a2, a3, a4, a5, a6, s1, s2, s3);
        s3 = (a6 + a5) % 10;
        a4 = unequeRand(a1, a2, a3, a4, a5, a6, s1, s2, s3);
        a3 = unequeRand(a1, a2, a3, a4, a5, a6, s1, s2, s3);
        s2 = ((a4 + a3) + (a6 + a5) / 10) % 10;
        a2 = unequeRand(a1, a2, a3, a4, a5, a6, s1, s2, s3);
        a1 = unequeRand(a1, a2, a3, a4, a5, a6, s1, s2, s3);
        s1 = a1 + a2 + ((a4 + a3) + (a6 + a5) / 10) / 10;
    }

    cout<<"\nMath Done !!!";
    cout<<"\nNumber of guesses =" << i;
    
    cout<<"\na1 =" << a1;
    cout<<"\na2 =" << a2;
    cout<<"\na3 =" << a3;
    cout<<"\na4 =" << a4;
    cout<<"\na5 =" << a5;
    cout<<"\na6 =" << a6;
    
    cout<<"\ns1 =" << s1;
    cout<<"\ns2 =" << s2;
    cout<<"\ns3 =" << s3;

    return 0;
}
