class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v1;
        for(int i=left;i<=right;i++){
            int j=i;
            int flag=0;
           // if(i%10==0)
             //   continue;
            while(j>0)
            {
                
                int k=j%10;
                j=j/10;
                if(k==0){
                 flag=1;
                 break;
                }
                if(i%k==0)
                  continue;
                else
                {
                    flag=1;
                    break;
                }
            }
            
            if(flag!=1)
            {
                v1.push_back(i);
            }
            else
                continue;

        }
        
        return v1;
        
    }
};
