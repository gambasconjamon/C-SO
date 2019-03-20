#ifndef GAME_H
#define GAME_H


class Game
{
    public:
        Game();
        virtual ~Game();

    protected:

    private:
    GRender render;
    Player player;
    Level lvl;
};

#endif // GAME_H
