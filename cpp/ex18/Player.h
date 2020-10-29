#ifndef PLAYER_H
#define PLAYER_H

class Player
{
    public:
        Player();

        void CallInput();
        void ResetToSafePosition();

        int x,
            y;

        int lastx,
            lasty;

    protected:

    private:
};

#endif // PLAYER_H