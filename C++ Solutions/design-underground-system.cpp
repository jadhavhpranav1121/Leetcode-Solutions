// https://leetcode.com/problems/design-underground-system

 /*UndergroundSystem {
public:
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        
    }
    
    void checkOut(int id, string stationName, int t) {
        
    }
    
    double getAverageTime(string startStation, string endStation) {
        
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation); */
class UndergroundSystem 

{

public:

    unordered_map<int,pair<string,int>>mpin;

     unordered_map<string,pair<int,int>>mpout;

    UndergroundSystem() 

    {   

    }

    void checkIn(int id, string stationName, int t) 

    {   

        mpin[id]={stationName,t};

    }

    void checkOut(int id, string stationName, int t) 

    {   

        auto it=mpin[id];

        string new_station=it.first+"->"+stationName;

        mpout[new_station].first+=t-it.second;

        mpout[new_station].second++;

    }

    double getAverageTime(string startStation, string endStation) 

    {   

        string new_string=startStation+"->"+endStation;

        return (double)((mpout[new_string].first+0.0)/mpout[new_string].second);

    }

};
