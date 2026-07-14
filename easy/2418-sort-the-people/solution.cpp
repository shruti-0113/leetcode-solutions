class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        // int i= 0;
        // int j = i+1;
        // while (i){
        //     if(heights[i] < heights[j]){
        //         swap(names[i] , names[j]);
        //     }
        //     i++;
        //     j++;
        // }
        // return names;
        map<int, string> mp;
        for (int i = 0; i < names.size(); i++) {
            mp[heights[i]] = names[i];
        }
        int index = 0;
        for (auto i = mp.rbegin(); i != mp.rend(); i++) {
            names[index] = i->second;
            index++;
        }
        return names;
    }
};