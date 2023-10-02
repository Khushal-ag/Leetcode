class Solution {
public:
    bool winnerOfGame(string colors) {
        int alice = 0;
        int bob = 0;
        int As = 0;
        int Bs = 0;

        for (char color: colors)
        {
            if (color == 'A')
            {
                Bs = 0;
                alice += ++As > 2;
            }
            else
            {
                As = 0;
                bob += ++Bs > 2;
            }
        }

        return alice > bob;
    }
};