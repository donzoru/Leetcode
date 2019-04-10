class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        vector<string> arr;
        arr.resize(numRows);
        int siz = numRows * 2 - 2;
        for(int i=0;i<s.length();++i){
            int t = i%siz;
            if(t < numRows) arr[t]+=s[i];
            else arr[numRows * 2 - t - 2]+=s[i];
        }
        string ans;
        for(auto i:arr) ans += i;
        return ans;
    }
};
