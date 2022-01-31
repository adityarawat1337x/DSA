class Solution {
public:
    int longestConsecutive(vector < int > & nums) {
            ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
      unordered_set <int> hashSet;
      for (int i=0;i<nums.size();i++) {
        hashSet.insert(nums[i]);
      }

      int longestStreak = 0;

       for (int i=0;i<nums.size();i++) {
        if (!hashSet.count(nums[i] - 1)) {
          int currentNum = nums[i];
          int currentStreak = 1;

          while (hashSet.count(currentNum + 1)) {
            currentNum += 1;
            currentStreak += 1;
          }

          longestStreak = max(longestStreak, currentStreak);
        }
      }

      return longestStreak;
    }
};