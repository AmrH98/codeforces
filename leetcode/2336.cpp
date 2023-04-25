// Runtime 134 ms Beats 22.11%
// Memory 46.2 MB Beats 25.4%

class SmallestInfiniteSet {
public:
    set<int> st;
    SmallestInfiniteSet() {
        for(int i = 1; i<=1000; i++) st.insert(i);
    }
    
    int popSmallest() {
        int temp = *st.begin();
        st.erase(temp);
        return temp;
    }
    
    void addBack(int num) {
        st.insert(num); // if already in set, it wont be added, if not it wont be added
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */
