class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int x = sentences.size();
        int maxword = 0;
        for (int i = 0 ; i < x ; i++){
            int count = 1;
            for (char ch : sentences[i]){
                if (ch == ' ' || ch == '\n'){
                    count++;
                }
            }
            if (count > maxword){
                maxword = count;
            }

        }
        return maxword;
    }
};