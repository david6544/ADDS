#include<cmath>

int sum_of_squares(int n) {

    if (n == 1) {
        return 1;
    }

    int newpow = pow(n,2);

    return newpow + sum_of_squares(n-1);
}

