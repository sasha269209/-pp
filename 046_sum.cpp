#include "046_sum.h"
#include "046_change.h"

int sum (int a, int b)
{
    a = change(a);
    return a+b;

}