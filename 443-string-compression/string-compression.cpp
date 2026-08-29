class Solution {
public:
    int compress(vector<char>& chars) {
        string result = "";

        for (int i = 0; i < chars.size(); i++) {
            int count = 1;

            while (i + 1 < chars.size() &&
                   chars[i] == chars[i + 1]) {
                count++;
                i++;
            }

            result += chars[i];

            if (count > 1) {
                result += to_string(count);
            }
        }

        // Copy result back
        for (int i = 0; i < result.length(); i++) {
            chars[i] = result[i];
        }

        return result.length();
    }
};