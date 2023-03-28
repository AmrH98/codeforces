// Runtime 69 ms Beats 26.22%
// Memory 33.1 MB Beats 39.87%

class ParkingSystem {
    unordered_map<int, int> map;
public:
    ParkingSystem(int big, int medium, int small) {
        map[1] = big;
        map[2] = medium;
        map[3] = small;
    }
    
    bool addCar(int carType) {
        if(map[carType]>0){
            map[carType]--;
            return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
