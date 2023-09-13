class Solution {
public:
    int candy(vector<int>& ratings) {
    int n=ratings.size();
        int candy[n];
        for(int i=0;i<n;i++){
            candy[i]=1;
        }

        for(int i=1;i<n;i++){
              if(ratings[i-1]<ratings[i]){
                  candy[i]=candy[i-1]+1;
              }
    
        }

        for(int i=n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]){
                candy[i]=max(candy[i],candy[i+1]+1);
            }
        }
           int total=0;
        for(int i=0;i<n;i++){
            total+=candy[i];
        }

        return total;    
    }
};