#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int caseNumber = 1;
    int N;
    
    while (cin >> N && N != 0) {
        vector<int> arrivals(N);
        vector<int> departures(N);
        
        for (int i = 0; i < N; ++i) {
            cin >> arrivals[i] >> departures[i];
        }
        
      
        sort(arrivals.begin(), arrivals.end());
        sort(departures.begin(), departures.end());
        
        int platformCount = 0;
        int maxPlatforms = 0;
        
        int i = 0, j = 0;
        
       
        while (i < N && j < N) {
            
            if (arrivals[i] < departures[j]) {
                ++platformCount;
                ++i;
                
                if (platformCount > maxPlatforms) {
                    maxPlatforms = platformCount;
                }
            }
            
            else {
                --platformCount;
                ++j;
            }
        }
        
        cout << "Case " << caseNumber++ << ": " << maxPlatforms << endl;
    }
    
    return 0;
}
