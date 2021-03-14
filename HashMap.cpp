class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
       unordered_map<int,vector<int>> mp;
       for(int i=0;i<nums.size();i++){
           int element= nums[i];
           mp[element].push_back(i);
       }
        
      int ans=0;  
      for(auto i:mp){
          cout<<i.first<<"->";
          for(int j=0;j<i.second.size();j++){
              cout<<mp[i.first][j];
              ans += mp[i.first][j];
          }
          cout<<endl;
      }
      return ans; 
    }

    
};
