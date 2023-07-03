#include <iostream>

class Solution {
public:
    static int mySqrt(int x) {
        static long int left = 1, right = x, middle, middle_sqrt;
        if (x <= 1) {
            return x;
        }
        while (left < right - 1) {
            middle = (left + right) / 2;
            middle_sqrt = middle * middle;
            if (middle_sqrt == x) {
                return middle;
            }
            else if (middle_sqrt < x) {
                left = middle;
            }
            else {
                right = middle;
            }
        }
        return left;

    }
};

int main()
{
    std::cout << Solution::mySqrt(16);
}
