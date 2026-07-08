class ParkingSystem {
public:
    vector<int>slot;
    ParkingSystem(int big, int medium, int small) {
        slot.push_back(big);
        slot.push_back(medium);
        slot.push_back(small);
    }
    
    bool addCar(int car) {
        if(car==1){
            if(slot[0]>0){
                slot[0]--;
                return true;
            }
        }
        if(car==2){
            if(slot[1]>0){
                slot[1]--;
                return true;
            }
        }
        if(car==3){
            if(slot[2]>0){
                slot[2]--;
                return true;
            }
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */