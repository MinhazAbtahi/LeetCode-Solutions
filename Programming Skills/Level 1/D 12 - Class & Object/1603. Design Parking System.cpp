class ParkingSystem {
public:
    ParkingSystem(int big, int medium, int small) {
        _big = big;
        _medium = medium;
        _small = small;
    }
    
    bool addCar(int carType) {
        switch(carType) {
            case 1:
                if(_big <= 0) return false;
                --_big;
                return true;
                break;
            case 2:
                if(_medium <= 0) return false;
                --_medium;
                return true;
                break;
            case 3:
                if(_small <= 0) return false;
                --_small;
                return true;
                break;
            default:
                return false;
                break;
        }
        return false;
    }
    
private:
    int _big = 0;
    int _medium = 0;
    int _small = 0;
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */