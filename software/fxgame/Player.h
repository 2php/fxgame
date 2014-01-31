#ifndef PLAYER_H
#define PLAYER_H

static const int VELOCITY = 5;

typedef struct Player {
	int posX; // x coordinate of the player (NOT the tile coordinate)
	int posY; // y coordinate of the player (NOT the tile coordinate)
	char width; // width of player (required for collision detection).. this should be the width of the player sprite
	char height; // height of player (required for collision detection
	char nBombs; // number of bombs player can place
	char velX; // velocity of the player
	char velY;
} Player;

void handleEvents (Player* p);
void move (Player* p);
void render (Player* p);

char checkCollision (Player* p);

#endif //PLAYER_H