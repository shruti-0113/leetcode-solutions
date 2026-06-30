class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (int p = 0 ; p<image.size() ; p++){
            int i = 0;
            int j = image[p].size()-1;
            while (i<j){
                swap(image[p][i], image[p][j]);
                //vector<int>temp;
                // temp = image[i];
                // image[i] = image[j];
                // image[j] = temp;
                // image[p][i]^=1;
                // if (i!=j)
                //     image[p][j]^1;
            
                i++;
                j--;
            }
        }
        for(int i =0;i<image.size();i++){
            for (int j =0;j<image.size();j++){
                if(image[i][j]==1){
                    image[i][j]=0;
                }
                else{
                    image[i][j]=1;
                }
            }
        }
        
        return image ;
    }
};