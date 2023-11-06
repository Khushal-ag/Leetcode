class SeatManager {
int last_occupied_seat;
    priority_queue<int, vector<int>, greater<int>> freed_seats;
public:
    SeatManager(int n) {
        last_occupied_seat = 0;
    }
    
    int reserve() {
        if(!freed_seats.empty()){
            int temp = freed_seats.top();
            freed_seats.pop();
            return temp;
        }
        last_occupied_seat++;
        return last_occupied_seat;
    }
    
    void unreserve(int seatNumber) {
        if(seatNumber <= last_occupied_seat){
            freed_seats.push(seatNumber);
        } 
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */