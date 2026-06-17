// Last updated: 6/17/2026, 4:34:33 PM
1class Solution {
2public:
3    bool lemonadeChange(vector<int>& bills) {
4
5        int five = 0;
6        int ten = 0;
7
8        for(int bill : bills){
9
10            if(bill == 5){
11                five++;
12            }
13
14            else if(bill == 10){
15
16                if(five == 0)
17                    return false;
18
19                five--;
20                ten++;
21            }
22
23            else{
24
25                if(ten > 0 && five > 0){
26                    ten--;
27                    five--;
28                }
29                else if(five >= 3){
30                    five -= 3;
31                }
32                else{
33                    return false;
34                }
35            }
36        }
37
38        return true;
39    }
40};