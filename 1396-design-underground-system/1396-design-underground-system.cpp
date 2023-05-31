class UndergroundSystem {
public:
    map<pair<string, string> , pair<double, int>> time;
    
    map<int , pair<string, int>> in;
    map<int , pair<string, int>> out;
    
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        in[id] = {stationName, t};
    }
    
    void checkOut(int id, string outStation, int t) {
        auto i = in[id];
        auto inStation = i.first;
        auto inTime = i.second;
        
        auto travelTime = t-inTime;
        
        if(time.find({inStation, outStation}) == time.end()){
            time[{inStation, outStation}] = {travelTime, 1};
        }
        else{
            auto prevPeople = time[{inStation, outStation}].second;
            auto prevAvg = time[{inStation, outStation}].first;
            
            double newAvg = ((double)(prevPeople*prevAvg) + travelTime)/(prevPeople+1);
            time[{inStation, outStation}] = {newAvg, prevPeople+1};
        }
    }
    
    double getAverageTime(string startStation, string endStation) {
        return time[{startStation, endStation}].first;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */