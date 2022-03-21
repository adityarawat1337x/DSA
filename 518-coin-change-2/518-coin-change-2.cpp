#define vi vector<int>
class Solution {
public:
    int change(int amount, vector<int>& coins) {
    vector<int> ways(amount + 1, 0);
    ways[0] = 1;

    for (int coin : coins) {
      for (int i = coin; i <= amount; i++) {
        ways[i] += ways[i - coin];
      }
    }

    return ways[amount];
  }
};