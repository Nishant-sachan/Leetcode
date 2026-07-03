class Solution {
public:
    double angleClock(int hour, int minutes) {
        double a1=abs(360-abs(30*hour-5.5*minutes));
        double a2=abs(30*hour-5.5*minutes);
        return min(a1,a2);
        
    }
};