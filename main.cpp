class Solution {
public:
    int numberOfMatches(int n) {
        int totalMatches = 0;
        
        while (n != 1) {
            bool teamWithoutMatch = (n % 2 == 1);
            
            int nextRoundTeamsCount = n / 2;
            
            totalMatches += nextRoundTeamsCount;
            
            n = teamWithoutMatch ? nextRoundTeamsCount + 1 : nextRoundTeamsCount;
        }
        
        return totalMatches;
    }
};
