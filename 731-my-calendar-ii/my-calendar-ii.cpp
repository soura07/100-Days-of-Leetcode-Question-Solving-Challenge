class MyCalendarTwo {
private:
    map<int, int> m;
public:
    MyCalendarTwo() {
        
    }
    
    bool book(int start, int end) {
        m[start]++;
        m[end]--;
        
        int sum = 0;
        for(auto it:m){
            sum = sum + it.second;
            if(sum >=3){
                m[start]--;
                m[end]++;
                return false;
            }
        }
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */