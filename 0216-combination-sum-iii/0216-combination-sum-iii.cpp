class Solution {
public:
void backtrack(int start,int k,int n,vector<vector<int>>&result,vector<int>&current){
    if (current.size()==k&& n==0){
        result.push_back(current);
        return;
    }
    if(current.size()>k || n<0){
        return;
    }
    for(int i=start;i<=9;i++){
        current.push_back(i);
        backtrack(i+1,k,n-i,result,current);
        current.pop_back();
    }
}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>result;
        vector<int>current;
        backtrack(1,k,n,result,current);
        return result;
        
    }
};