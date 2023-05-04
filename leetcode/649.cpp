// Runtime 8 ms Beats 72.14%
// Memory 8 MB Beats 37.2%

// O(n), space O(n)
class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> radiant, dire;
        for(int i=0; i<senate.length(); i++){ // indexes for both in queue 
            if(senate[i] == 'R') radiant.push(i);
            else dire.push(i);
        }
        // now 1v1 
        int size = senate.length();
        while(!radiant.empty() && !dire.empty()){ // till one of each is beaten break loop
            if(radiant.front() < dire.front()){
                radiant.pop();
                radiant.push(size);
                dire.pop();
            } else {
                dire.pop();
                dire.push(size);
                radiant.pop();
            }
            size++;
        }
        return radiant.empty() ? "Dire" : "Radiant";
    }
};
