#include <iostream>

using namespace std;

int main()
{
    int a, b, c, b2, ac, sqr, a2;
    float res, m1, m2, sqrr, rest, rest1, rest2, rest3, rest4, rest5;
    cout << "Enter a:" << endl;
    cin >> a;
    cout << "Enter b:" << endl;
    cin >> b;
    cout << "Enter c:" << endl;
    cin >> c;

    //–b ± √(b² – 4ac)/2a
    b2 = b * b;
    ac = 4 * a * c;
    sqr = b2 - ac;
    a2 = 2 * a;

    for(int p = 1; p * p < sqr; p++)
    {
        sqrr = p;
    }
    //0.000001
    if(sqrr != sqr)
    {
        for(float i = sqrr + 0.1; i * i < sqr; i = i + 0.1)
        {
            res = i;
        }
    }
    else
    {
            res = sqrr;
    }

    if(res != sqr)
    {
        for(float i = res + 0.01; i * i < sqr; i = i + 0.01)
        {
            rest = i;
        }
    }
    else
    {
        rest = res;
    }
    
    if(rest != sqr)
    {
        for(float i = rest + 0.001; i * i < sqr; i = i + 0.001)
        {
            rest1 = i;
        }
    }
    else
    {
        rest1 = rest;
    }

    if(rest1 != sqr)
    {
        for(float i = rest1 + 0.0001; i * i < sqr; i = i + 0.0001)
        {
            rest2 = i;
        }
    }
    else
    {
        rest2 = rest1;
    }
    
    if(rest2 != sqr)
    {
        for(float i = rest2 + 0.00001; i * i < sqr; i = i + 0.00001)
        {
            rest3 = i;
        }
    }
    else
    {
        rest3 = rest2;
    }

    if(rest3 != sqr)
    {
        for(float i = rest3 + 0.000001; i * i < sqr; i = i + 0.000001)
        {
            rest4 = i;
        }
    }
    else
    {
        rest4 = rest3;
    }
   

    //–b ± √(b² – 4ac)/2a
    m1 = (-b + (rest4)) / a2;
    m2 = (-b - (rest4)) / a2;

    cout << "Your result is {" << m1 << ", " << m2 << ")" << endl;

    return 0;
}
