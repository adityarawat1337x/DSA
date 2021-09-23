class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        reverse(deck.begin(),deck.end());
        queue<int> q;
        int i=0;
        while(i<deck.size()){
            q.push(deck[i++]);
            q.push(q.front());
            q.pop();
        }
        deck.clear();
        while(q.size()){
            deck.push_back(q.front());
            q.pop();
        }
        int tmp = deck.back();
        deck.pop_back();
        reverse(deck.begin(),deck.end());
        deck.push_back(tmp);
        return deck;
    }
    
};