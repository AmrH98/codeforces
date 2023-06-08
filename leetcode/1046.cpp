// Runtime 6 ms Beats 28.71%
// Memory 7.8 MB Beats 36.42%
// O(nlogn), spae O(n)
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> heap;
        for(int num:stones) heap.push(num);
        while(heap.size() > 1){
            int y = heap.top();
            heap.pop();
            int x = heap.top();
            heap.pop();
            if(x!=y) heap.push(y-x);
        }
        if(heap.empty()) return 0;
        return heap.top();

    }
};
