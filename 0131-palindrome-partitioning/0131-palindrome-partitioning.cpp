class Solution {
public:
bool palindrome(string s ,int left,int right){
    while(left<=right){
        if(s[left]!=s[right])
        return false;
        left++;
        right--;
    }
    return true;
}

void backtrack(int start,string& s,vector<vector<string>>&result,vector<string>&current){
    if(start==s.size()){
        result.push_back(current);
        return;

    }
    for(int end=start;end<s.size();end++){
        if(palindrome(s,start,end)){
            current.push_back(s.substr(start,end-start+1));
            backtrack(end+1,s,result,current);
            current.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {
        vector<vector<string>>result;
        vector<string>current;
        backtrack(0,s,result,current);
        return result;
     }
};