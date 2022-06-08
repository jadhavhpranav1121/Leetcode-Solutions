// https://leetcode.com/problems/employee-importance

/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/


class Solution {
public:
    int ans = 0;
    int getImportance(vector<Employee*> employees, int id) {
        for(auto emp:employees)
        {
            if(emp->id==id)
            {
                ans += emp->importance;
                for(auto i:emp->subordinates)
                {
                    getImportance(employees, i);
                }
                break;
            }
        }
        return ans;
    }
};