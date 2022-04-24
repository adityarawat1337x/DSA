struct Station{
    string start,end;
    double time;
    Station(string a,string b,double x){
        start=a,end=b,time=x;     
    }
};

class UndergroundSystem {
public:
    map<int,Station*> users;
    map<pair<string,string>,pair<double,double>> stations;
    
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        users[id]=new Station(stationName,"",t);
    }
    
    void checkOut(int id, string stationName, int t) {
        string st =users[id]->start,en = stationName;
        double time = t-users[id]->time;
        
        if(stations.find({st,en})!=stations.end()){
            stations[{st,en}].first+=time;
            stations[{st,en}].second++;
            }
        else{
            stations[{st,en}].first=time;
            stations[{st,en}].second=1;
        }
    }
    
    double getAverageTime(string st, string en) {
        return stations[{st,en}].first/stations[{st,en}].second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */