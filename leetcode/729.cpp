class MyCalendar {
public:
    MyCalendar() {}

    bool book(int start, int end) {
        for (const auto& event : calender) {
            if (start < event[1] && end > event[0]) return false;
        }

        calender.push_back({start, end});
        return true;
    }

private:
    list<vector<int>> calender;
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
