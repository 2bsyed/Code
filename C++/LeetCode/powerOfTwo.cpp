class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (log2(n)==floor(log2(n)))
            return true;
        return false;
    }
};