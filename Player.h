#ifndef PLAYER_H
#define PLAYER_H

class Player {
    public:
        Player();
        void move(char input);
        int getPos() const;
    
    private:
        int pos;
};

#endif