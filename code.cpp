#include<iostream>

#include<vector>

using namespace std;





class Solution {
public:
    
    void help(int n,vector<int>&ans,int x){
        ans.push_back(x);
        
        for(int i=0;i<=9;i++){
            int num=x*10+i;
            
            if(num>n)break;
            
            else{
                help(n,ans,num);
            }
        }
    }
    vector<int> lexicalOrder(int n) {
        
        vector<int>ans;
       for(int i=1;i<=9;i++){
           
           if(i>n)break;
           help(n,ans,i);
       }
        
        return ans;
        
    }
};