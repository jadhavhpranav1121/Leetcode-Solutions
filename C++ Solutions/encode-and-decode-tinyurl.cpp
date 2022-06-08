// https://leetcode.com/problems/encode-and-decode-tinyurl

class Solution {
private:
    int uniqueId;
    unordered_map<string, string> tinyToLongUrl;
    
public:
    Solution()
    {
        uniqueId = 1;
    }

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) 
    {
        
        string tinyUrl = "http://tinyurl.com/" + to_string(uniqueId);
        tinyToLongUrl[tinyUrl] = longUrl;
        
        uniqueId++;
        return tinyUrl;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) 
    {
        return tinyToLongUrl[shortUrl];
    }
};
