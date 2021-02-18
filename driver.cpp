
#include "URL.hpp"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    URL* u1 = new URL("http://www.google.com");
    URL* u2 = new URL("http://www.yahoo.com");

    cout << u1->getContents() << endl;
    cout << u2->getContents() << endl; 

    return 0;
}