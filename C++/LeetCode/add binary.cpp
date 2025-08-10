class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;

            if (i >= 0) sum += a[i--] - '0';  // Convert char to int
            if (j >= 0) sum += b[j--] - '0';

            result += (sum % 2) + '0';        // Add current binary digit
            carry = sum / 2;                  // Update carry
        }

        reverse(result.begin(), result.end()); // Since we added from LSB to MSB
        return result;
    }
};