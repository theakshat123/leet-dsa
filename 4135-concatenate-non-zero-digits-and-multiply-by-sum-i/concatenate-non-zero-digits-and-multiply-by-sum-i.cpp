class Solution {
public:
    long long sumAndMultiply(int n) {
int rev = 0;

while (n > 0) {
    rev = rev * 10 + n % 10;
    n /= 10;
}

long long x = 0, sum = 0;

while (rev > 0) {
    int d = rev % 10;
    rev /= 10;

    if (d != 0) {
        x = x * 10 + d;
        sum += d;
    }
}

return x * sum;
    }
};