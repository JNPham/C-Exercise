#ifndef COMPARE_H
#define COMPARE_H

int& larger(int a, int b)
{
    if (a >= b) {
        return a;
    }
    else {
        return b;
    }
}

int& largest(int& a, int& b, int& c)
{
    return larger(larger(a, b), c);
}
#endif

