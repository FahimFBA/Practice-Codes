#include <stdio.h>

// Function used to return the value of function f(t)

int f(int t)
{
    // Return the value of function at time t
    return t*t;
}

// Function used to compute the Tm

int compute_tm(int t)
{
    // Return the value of Tm at time t
    return (f(t) + t)/2*t;
}


int main()
{
    int tm; // using this for storing the value of Tm
    // I'll use a for loop to calculate Tm for time t = 0 to 10
    for(int t = 0; t <= 10; t ++)
    {
        tm = compute_tm(t); // computing Tm at time t
        printf("t = %-10d Tm = %-10d\n", t, tm); // Printing the time t & value of Tm
    }
    return 0;
}