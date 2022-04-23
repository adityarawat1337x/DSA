class Solution {
public:
    unordered_map<string,string> mp;
    
    string randomString(){
        return to_string(mp.size()+1);
    }
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string str = "http://tinyurl.com/" + randomString();
        mp[str] = longUrl;
        return str;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return mp[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));