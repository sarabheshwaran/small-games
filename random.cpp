#include <cstdlib> 
#include <ctime> 
#include <iostream>

using namespace std;

int main() 
{ 
    srand((unsigned)time(0)); 
    int i;
    i = (rand()%6)+1; 
    cout << i << "\n"; 
}
