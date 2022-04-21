#include <stdio.h>
#include <stdlib.h>

int main()
{

//Example : 1
/*
    Here’s a simple decision-making example using if and else:
int a = 10, b = 20, c;

if (a < b) {
    c = a;
}
else {
    c = b;
}

printf("%d", c);

This example takes more than 10 lines, but that isn’t necessary. You can write the above program in just 3 lines of code using a ternary operator.
*/


/*
Syntax
condition ? value_if_true : value_if_false

The statement evaluates to value_if_true if condition is met, and value_if_false otherwise.

Here’s the above example rewritten to use the ternary operator: */

int a = 10, b = 20, c;

c = (a < b) ? a : b;

printf("%d", c);

//Output: 10


//Example : 2
/*
    int a = 1, b = 2, ans;
    if (a == 1) {
        if (b == 2) {
            ans = 3;
    }      else {
            ans = 5;
    }
} else {
    ans = 0;
}
printf ("%d\n", ans);

Here's the code above rewritten using a nested ternary operator:*/

    int a = 1, b = 2, ans;
    ans = (a == 1 ? (b == 2 ? 3 : 5) : 0);
    printf ("%d\n", ans);

    //OUTPUT : 3


    return 0;
}
