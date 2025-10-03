class Solution {
public:
    vector<int> hours = {8, 4, 2, 1};
    vector<int> minutes = {32, 16, 8, 4, 2, 1};
    void backtrack(int leds, int start, int hour, int minute,vector<string>&result) {

        if (hour > 11 || minute > 59) 
        return;
        if (leds == 0) {
            string time = to_string(hour) + ":";
            if (minute < 10) time += "0";
            time += to_string(minute);
            result.push_back(time);
            return;
        }
        for (int i = start; i < 10; i++) {
            if (i < 4) { 
            
                backtrack(leds - 1, i + 1, hour + hours[i], minute,result);
            } else {
                
                backtrack(leds - 1, i + 1, hour, minute + minutes[i - 4],result);
            }
        }
    }

    vector<string> readBinaryWatch(int turnedOn) {
       
        vector<string> result;
        backtrack(turnedOn, 0, 0, 0,result);
        return result;
    }
};
