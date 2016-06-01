//
//  Header.h
//  leetcode_1
//
//  Created by 王青龙 on 6/1/16.
//  Copyright © 2016 王青龙. All rights reserved.
//

#ifndef Header_h
#define Header_h

#include<vector>
#include<unordered_map>

class Solution{
public:
    vector<int> twoSum(vector<int>& nums, int target){
        vector<int> res;
        unordered_map<int, int> hT;
        for(int i=0; i<nums.size();++i){
            int numToFind = target - nums[i];
            if(hT.find(numToFind)!=hT.end()){
                res.push_back(hT[numToFind]);
                res.push_back(i);
                return res;
            }
            hT[nums[i]]=i;
        }
        re
    }
};

#endif /* Header_h */
