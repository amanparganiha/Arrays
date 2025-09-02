class Solution {
public:
    int longestSubarray(vector<int>& arr, int k) {
        map<long long, int> preSumMap;
        long long sum = 0;
        int maxLen = 0;

        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];

            // Case 1: whole prefix itself equals k
            if (sum == k) {
                maxLen = max(maxLen, i + 1);
            }

            // Case 2: check if there exists a prefix with (sum - k)
            long long rem = sum - k;
            if (preSumMap.find(rem) != preSumMap.end()) {
                int len = i - preSumMap[rem];
                maxLen = max(maxLen, len);
            }

            // Store sum if not already present
            if (preSumMap.find(sum) == preSumMap.end()) {
                preSumMap[sum] = i;
            }
        }

        return maxLen;
    }
};
