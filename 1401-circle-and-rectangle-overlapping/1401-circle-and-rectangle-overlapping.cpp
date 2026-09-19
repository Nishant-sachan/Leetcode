class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int nearestX = clamp(xCenter, x1, x2);
        int nearestY = clamp(yCenter, y1, y2);
        
        int dx = nearestX - xCenter;
        int dy = nearestY - yCenter;
        
        return dx * dx + dy * dy <= radius * radius;
    }
};