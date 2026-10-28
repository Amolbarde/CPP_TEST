#include <iostream>
using namespace std;

int main(void)
{
    char* s1 = "abc";
    char s2[] = "pqr";
    char s3[] = {'x', 'y', 'z', '\0'};
    char s4[] = {'m', 'l', 'n', '\0'};
     cout << s1 << "  " << s2 << "  " << s3 << "  " << s4 << endl;
    s2[0] = 'd';

     cout << *(&s1) << "  " << s2 << "  " << s3 << "  " << s4 << endl;


    
}
