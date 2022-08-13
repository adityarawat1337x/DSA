class Solution {
public:
   int removeStones(vector<vector<int>>& stones) {
        for (int i = 0; i < stones.size(); ++i)
            uni(stones[i][0], ~stones[i][1]);
        return stones.size() - islands;
    }

    unordered_map<int, int> par;
    int islands = 0;

    int find(int x) {
        if (!par.count(x)) par[x] = x, islands++;
        if (x != par[x]) par[x] = find(par[x]);
        return par[x];
    }

    void uni(int x, int y) {
        x = find(x), y = find(y);
        if (x != y) par[x] = y, islands--;
    }
};