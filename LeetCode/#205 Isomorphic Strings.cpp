class Solution {
public:
    bool isIsomorphic(string s, string t) {
        char arr[256]={};
        for(int i=0; i<s.length(); i++){
            char c =s[i];
            if(!arr[c]){
                for(char s: arr)
                    if(s==t[i])
                        return false;
                arr[c]=t[i];
            }
            else if(arr[c]!=t[i])
                return false;
        }
        return true;
    }
};