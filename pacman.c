#include <tigcclib.h>

unsigned short int box[10] = {
	0b1111111111111111,
	0b1000000001111111,
	0b1000000001111111,
	0b1000000001111111,
	0b1000000001111111,
	0b1000000001111111,
	0b1000000001111111,
	0b1000000001111111,
	0b1000000001111111,
	0b1111111111111111
};

unsigned short int pellet[10] = {
	0b0000000000000000,
	0b0000000000000000,
	0b0000000000000000,
	0b0000000000000000,
	0b0000110000000000,
	0b0000110000000000,
	0b0000000000000000,
	0b0000000000000000,
	0b0000000000000000,
	0b0000000000000000
};

unsigned short int large_pellet[10] = {
	0b0000000000000000,
	0b0000000000000000,
	0b0000000000000000,
	0b0001111000000000,
	0b0001111000000000,
	0b0001111000000000,
	0b0001111000000000,
	0b0000000000000000,
	0b0000000000000000,
	0b0000000000000000
};

unsigned short int pacman_right_open[10] = {
	0b0000000000000000,
	0b0001110000000000,
	0b0011111000000000,
	0b0111110000000000,
	0b0111100000000000,
	0b0111000000000000,
	0b0111110000000000,
	0b0011111000000000,
	0b0000110000000000,
	0b0000000000000000
};

unsigned short int pacman_right_closed[10] = {
	0b0000000000000000,
	0b0001110000000000,
	0b0011111000000000,
	0b0111111100000000,
	0b0111111100000000,
	0b0111111100000000,
	0b0111111100000000,
	0b0011111000000000,
	0b0000110000000000,
	0b0000000000000000
};

unsigned short int pacman_left_open[10] = {
	0b0000000000000000,
	0b0000111000000000,
	0b0001111100000000,
	0b0000111110000000,
	0b0000011110000000,
	0b0000001110000000,
	0b0000011110000000,
	0b0001111100000000,
	0b0000111000000000,
	0b0000000000000000
};

unsigned short int pacman_left_closed[10] = {
	0b0000000000000000,
	0b0000111000000000,
	0b0001111100000000,
	0b0011111110000000,
	0b0011111110000000,
	0b0011111110000000,
	0b0011111110000000,
	0b0001111100000000,
	0b0000111000000000,
	0b0000000000000000
};

unsigned short int pacman_up_open[10] = {
	0b0000000000000000,
	0b0000000000000000,
	0b0000000000000000,
	0b0010000100000000,
	0b0111001110000000,
	0b0111111110000000,
	0b0111111110000000,
	0b0011111100000000,
	0b0001111000000000,
	0b0000000000000000
};

unsigned short int pacman_up_closed[10] = {
	0b0000000000000000,
	0b0000000000000000,
	0b0001111000000000,
	0b0011111100000000,
	0b0111111110000000,
	0b0111111110000000,
	0b0111111110000000,
	0b0011111100000000,
	0b0001111000000000,
	0b0000000000000000
};

unsigned short int pacman_down_open[10] = {
	0b0000000000000000,
	0b0001111000000000,
	0b0011111100000000,
	0b0111111110000000,
	0b0111111110000000,
	0b0111001110000000,
	0b0010000100000000,
	0b0000000000000000,
	0b0000000000000000,
	0b0000000000000000
};

unsigned short int pacman_down_closed[10] = {
	0b0000000000000000,
	0b0001111000000000,
	0b0011111100000000,
	0b0111111110000000,
	0b0111111110000000,
	0b0111111110000000,
	0b0011111100000000,
	0b0001111000000000,
	0b0000000000000000,
	0b0000000000000000
};

unsigned short int ghost[10] = {
	0b0000000000000000,
	0b0000110000000000,
	0b0001111000000000,
	0b0011111100000000,
	0b0110110110000000,
	0b0111111110000000,
	0b0111111110000000,
	0b0111111110000000,
	0b0101010100000000,
	0b0000000000000000
};

unsigned short int inverted_ghost[10] = {
	0b1111111111111111,
	0b1111001111111111,
	0b1110000111111111,
	0b1100000011111111,
	0b1000000001111111,
	0b1000000001111111,
	0b1000000001111111,
	0b1000000001111111,
	0b1010101011111111,
	0b1111111111111111
};

unsigned short int scared_ghost[10] = {
	0b0000000000000000,
	0b0000110000000000,
	0b0001001000000000,
	0b0010000100000000,
	0b0101001010000000,
	0b0100000010000000,
	0b0100000010000000,
	0b0111111110000000,
	0b0101010100000000,
	0b0000000000000000
};

unsigned short int left_wall[10] = {
	0b1000000000000000,
	0b1000000000000000,
	0b1000000000000000,
	0b1000000000000000,
	0b1000000000000000,
	0b1000000000000000,
	0b1000000000000000,
	0b1000000000000000,
	0b1000000000000000,
	0b1000000000000000
};

unsigned short int right_wall[10] = {
	0b0000000001000000,
	0b0000000001000000,
	0b0000000001000000,
	0b0000000001000000,
	0b0000000001000000,
	0b0000000001000000,
	0b0000000001000000,
	0b0000000001000000,
	0b0000000001000000,
	0b0000000001000000
};

unsigned short int top_wall[10] = {
	0b1111111111000000,
	0b0000000000000000,
	0b0000000000000000,
	0b0000000000000000,
	0b0000000000000000,
	0b0000000000000000,
	0b0000000000000000,
	0b0000000000000000,
	0b0000000000000000,
	0b0000000000000000
};

unsigned short int bottom_wall[10] = {
	0b0000000000000000,
	0b0000000000000000,
	0b0000000000000000,
	0b0000000000000000,
	0b0000000000000000,
	0b0000000000000000,
	0b0000000000000000,
	0b0000000000000000,
	0b0000000000000000,
	0b1111111111000000
};

unsigned char maze[10][16] = {
	{0b1010,0b1000,0b1100,0b1100,0b1000,0b1000,0b1100,0b1100,0b1100,0b1100,0b1000,0b1000,0b1100,0b1100,0b1000,0b1001},
	{0b0011,0b0011,0b1010,0b1100,0b0101,0b0011,0b1010,0b1100,0b1100,0b1001,0b0011,0b0110,0b1100,0b1001,0b0011,0b0011},
	{0b0011,0b0110,0b0001,0b1010,0b1100,0b0100,0b0000,0b1100,0b1100,0b0000,0b0100,0b1100,0b1001,0b0010,0b0101,0b0011},
	{0b0010,0b1100,0b0001,0b0010,0b1100,0b1001,0b0010,0b1000,0b1000,0b0001,0b1010,0b1100,0b0001,0b0010,0b1100,0b0001},
	{0b0011,0b1010,0b0100,0b0101,0b1010,0b0101,0b0011,0b0010,0b0001,0b0011,0b0110,0b1001,0b0110,0b0100,0b1001,0b0011},
	{0b0011,0b0110,0b1000,0b1001,0b0110,0b1001,0b0011,0b0110,0b0101,0b0011,0b1010,0b0101,0b1010,0b1000,0b0101,0b0011},
	{0b0010,0b1100,0b0001,0b0010,0b1100,0b0101,0b0010,0b1100,0b1100,0b0001,0b0110,0b1100,0b0001,0b0010,0b1100,0b0001},
	{0b0011,0b1010,0b0001,0b0110,0b1100,0b1000,0b0000,0b1100,0b1100,0b0000,0b1000,0b1100,0b0101,0b0010,0b1001,0b0011},
	{0b0011,0b0011,0b0110,0b1100,0b1001,0b0011,0b0110,0b1100,0b1100,0b0101,0b0011,0b1010,0b1100,0b0101,0b0011,0b0011},
	{0b0110,0b0100,0b1100,0b1100,0b0100,0b0100,0b1100,0b1100,0b1100,0b1100,0b0100,0b0100,0b1100,0b1100,0b0100,0b0101}
};

unsigned char pellets[10][16];

unsigned char ghost_there[10][16];

unsigned char orig_pellets[10][16] = {
	{2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1},
	{1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2}
};

unsigned char ai_map[10][16] = {
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

INT_HANDLER old_int_5 = NULL;

unsigned short int TOP;
unsigned short int BOTTOM;
unsigned short int LEFT;
unsigned short int RIGHT;
unsigned short int NONE;

int pacman_x;
int pacman_y;
int old_pacman_x;
int old_pacman_y;

volatile unsigned long int counter;
unsigned int pacman_state;
unsigned int num_pellets;

unsigned int old_pacman_state;
unsigned int pacman_direc;
unsigned int next_pacman_direc;
unsigned int old_pacman_direc;

unsigned int num_ghosts;
unsigned int intelligence;
int *ghost_x;
int *ghost_y;
int *old_ghost_x;
int *old_ghost_y;
unsigned short int *ghost_direc;
unsigned long int *frozen;
unsigned int *ghost_cage;

unsigned int invincible_time;
unsigned char collaboration = 1;

unsigned short int options[4];

unsigned char lost;
unsigned char won;

float random_float(){
	return ((float) rand())/RAND_MAX;
}

DEFINE_INT_HANDLER (time_update){
	counter += 50;
	counter -= counter%50;
	ExecuteHandler(old_int_5);
}

void center_text(unsigned short int y, const char *string){
	unsigned short int width;
	width = DrawStrWidth(string, A_NORMAL);
	DrawStr((160 - width)/2, y, string, A_NORMAL);
}

void set_pellets(){
	unsigned int x;
	unsigned int y;
	for(x = 0; x < 16; x++){
		for(y = 0; y < 10; y++){
			pellets[y][x] = orig_pellets[y][x];
		}
	}
}

void render_maze(){
	unsigned int x;
	unsigned int y;
	for(x = 0; x < 16; x++){
		for(y = 0; y < 10; y++){
			if((maze[y][x] & TOP) != 0){
				Sprite16(x*10, y*10, 10, top_wall, LCD_MEM, SPRT_OR);
			}
			if((maze[y][x] & BOTTOM) != 0){
				Sprite16(x*10, y*10, 10, bottom_wall, LCD_MEM, SPRT_OR);
			}
			if((maze[y][x] & LEFT) != 0){
				Sprite16(x*10, y*10, 10, left_wall, LCD_MEM, SPRT_OR);
			}
			if((maze[y][x] & RIGHT) != 0){
				Sprite16(x*10, y*10, 10, right_wall, LCD_MEM, SPRT_OR);
			}
			if(pellets[y][x] == 1){
				Sprite16(x*10, y*10, 10, pellet, LCD_MEM, SPRT_OR);
				num_pellets += 1;
			}
			if(pellets[y][x] == 2){
				Sprite16(x*10, y*10, 10, large_pellet, LCD_MEM, SPRT_OR);
				num_pellets += 1;
			}
		}
	}
}

unsigned short int handle_input(unsigned int *key, void *kbq){
	if(!OSdequeue(key, kbq)){
		if(*key == KEY_UP){
			next_pacman_direc = TOP;
		}
		if(*key == KEY_DOWN){
			next_pacman_direc = BOTTOM;
		}
		if(*key == KEY_LEFT){
			next_pacman_direc = LEFT;
		}
		if(*key == KEY_RIGHT){
			next_pacman_direc = RIGHT;
		}
		if(*key == KEY_ESC){
			return 0;
		}
	}
	if(lost != 0 || won != 0){
		return 0;
	}
	return 1;
}

void ghost_ai_recursion(unsigned int x, unsigned int y, unsigned short int depth){
	if(depth <= ai_map[y][x]){
		return;
	}
	ai_map[y][x] = depth;
	if(depth == 0 || (ghost_there[y][x] && invincible_time == 0 && collaboration)){
		return;
	}
	if((~maze[y][x]) & TOP){
		ghost_ai_recursion(x, y - 1, depth - 1);
	}
	if((~maze[y][x]) & BOTTOM){
		ghost_ai_recursion(x, y + 1, depth - 1);
	}
	if((~maze[y][x]) & LEFT){
		ghost_ai_recursion(x - 1, y, depth - 1);
	}
	if((~maze[y][x]) & RIGHT){
		ghost_ai_recursion(x + 1, y, depth - 1);
	}
}

void ghost_ai(){
	memset(ai_map, 0, sizeof(ai_map[0][0])*16*10);
	unsigned int x = pacman_x/10;
	unsigned int y = pacman_y/10;
	ai_map[y][x] = intelligence + 1;
	if((~maze[y][x]) & TOP){
		ghost_ai_recursion(x, y - 1, intelligence);
	}
	if((~maze[y][x]) & BOTTOM){
		ghost_ai_recursion(x, y + 1, intelligence);
	}
	if((~maze[y][x]) & LEFT){
		ghost_ai_recursion(x - 1, y, intelligence);
	}
	if((~maze[y][x]) & RIGHT){
		ghost_ai_recursion(x + 1, y, intelligence);
	}
}

void eat_ghost(unsigned int i){
	unsigned short int rand_pos;
	rand_pos = random(4);
	if(rand_pos == 0){
		ghost_x[i] = 70;
		ghost_y[i] = 40;
	} else if(rand_pos == 1){
		ghost_x[i] = 80;
		ghost_y[i] = 40;
	} else if(rand_pos == 2){
		ghost_x[i] = 70;
		ghost_y[i] = 50;
	} else {
		ghost_x[i] = 80;
		ghost_y[i] = 50;
	}
	ghost_direc[i] = TOP;
	frozen[i] = 10000;
}

void move_pacman(){
	unsigned int i;
	if((pacman_x%10) == 0 && (pacman_y%10) == 0){
		ghost_ai();
		if(pellets[pacman_y/10][pacman_x/10] != 0){
			if(pellets[pacman_y/10][pacman_x/10] == 2){
				invincible_time = 10000;
			}
			pellets[pacman_y/10][pacman_x/10] = 0;
			num_pellets -= 1;
			if(num_pellets == 0){
				won = 1;
			}
		}
		if(next_pacman_direc & ~maze[pacman_y/10][pacman_x/10]){
			pacman_direc = next_pacman_direc;
			next_pacman_direc = NONE;
		}
		if(pacman_direc & ~maze[pacman_y/10][pacman_x/10]){
			if(pacman_direc == TOP){
				pacman_y -= 1;
			}
			if(pacman_direc == BOTTOM){
				pacman_y += 1;
			}
			if(pacman_direc == LEFT){
				pacman_x -= 1;
			}
			if(pacman_direc == RIGHT){
				pacman_x += 1;
			}
		}
	} else {
		if(pacman_direc == TOP){
			pacman_y -= 1;
		}
		if(pacman_direc == BOTTOM){
			pacman_y += 1;
		}
		if(pacman_direc == LEFT){
			pacman_x -= 1;
		}
		if(pacman_direc == RIGHT){
			pacman_x += 1;
		}
	}
	for(i = 0; i < num_ghosts; i++){
		if(abs(ghost_x[i] - pacman_x) <= 5 && abs(ghost_y[i] - pacman_y) <= 5){
			if(invincible_time > 0){
				eat_ghost(i);
			} else {
				lost = 1;
			}
		}
	}
}

void update_ghost(unsigned int i){
	unsigned int x;
	unsigned int y;
	unsigned int num_options = 0;
	x = ghost_x[i]/10;
	y = ghost_y[i]/10;
	if(invincible_time == 0){
		int max_depth = -1;
		if(ai_map[y][x] != 0 || ((maze[y][x] & ghost_direc[i]) != 0) || random(5) == 0){
			if((~maze[y][x]) & TOP){
				options[0] = TOP;
				num_options = 1;
				max_depth = ai_map[y - 1][x];
			}
			if((~maze[y][x]) & BOTTOM){
				if(ai_map[y + 1][x] > max_depth){
					options[0] = BOTTOM;
					num_options = 1;
					max_depth = ai_map[y + 1][x];
				} else if(ai_map[y + 1][x] == max_depth){
					options[num_options] = BOTTOM;
					num_options += 1;
				}
			}
			if((~maze[y][x]) & LEFT){
				if(ai_map[y][x - 1] > max_depth){
					options[0] = LEFT;
					num_options = 1;
					max_depth = ai_map[y][x - 1];
				} else if(maze[y][x - 1] == max_depth){
					options[num_options] = LEFT;
					num_options += 1;
				}
			}
			if((~maze[y][x]) & RIGHT){
				if(ai_map[y][x + 1] > max_depth){
					options[0] = RIGHT;
					num_options = 1;
					max_depth = ai_map[y][x + 1];
				} else if(ai_map[y][x + 1] == max_depth){
					options[num_options] = RIGHT;
					num_options += 1;
				}
			}
			ghost_direc[i] = options[random(num_options)];
		}
	} else {
		int min_depth = 255;
		if(ai_map[y][x] != 0 || ((maze[y][x] & ghost_direc[i]) != 0) || random(5) == 0){
			if((~maze[y][x]) & TOP){
				options[0] = TOP;
				num_options = 1;
				min_depth = ai_map[y - 1][x];
			}
			if((~maze[y][x]) & BOTTOM){
				if(ai_map[y + 1][x] < min_depth){
					options[0] = BOTTOM;
					num_options = 1;
					min_depth = ai_map[y + 1][x];
				} else if(ai_map[y + 1][x] == min_depth){
					options[num_options] = BOTTOM;
					num_options += 1;
				}
			}
			if((~maze[y][x]) & LEFT){
				if(ai_map[y][x - 1] < min_depth){
					options[0] = LEFT;
					num_options = 1;
					min_depth = ai_map[y][x - 1];
				} else if(maze[y][x - 1] == min_depth){
					options[num_options] = LEFT;
					num_options += 1;
				}
			}
			if((~maze[y][x]) & RIGHT){
				if(ai_map[y][x + 1] < min_depth){
					options[0] = RIGHT;
					num_options = 1;
					min_depth = ai_map[y][x + 1];
				} else if(ai_map[y][x + 1] == min_depth){
					options[num_options] = RIGHT;
					num_options += 1;
				}
			}
			ghost_direc[i] = options[random(num_options)];
		}
	}
}

void separate_ghost(unsigned short int i){
	//old_ghost_direc[i] = ghost_direc[i];
	ghost_direc[i] = NONE;
}

void move_ghosts(){
	unsigned int i;
	unsigned int x;
	unsigned int y;
	memset(ghost_there, 0, 160);
	for(i = 0; i < num_ghosts; i++){
		if(frozen[i] == 0){
			if(ghost_direc[i] == TOP){
				ghost_y[i] -= 1;
			}
			if(ghost_direc[i] == BOTTOM){
				ghost_y[i] += 1;
			}
			if(ghost_direc[i] == LEFT){
				ghost_x[i] -= 1;
			}
			if(ghost_direc[i] == RIGHT){
				ghost_x[i] += 1;
			}
		}
	}
	for(i = 0; i < num_ghosts; i++){
		x = ghost_x[i];
		y = ghost_y[i];
		if((x%10) == 0 && (y%10) == 0){
			if(!ghost_there[y/10][x/10] || invincible_time > 0){
				update_ghost(i);
			} else {
				separate_ghost(i);
			}
		}
		if(!frozen[i]){
			ghost_there[y/10][x/10] = 1;
		}
	}
}

void remove_pacman(){
	Sprite16(old_pacman_x, old_pacman_y, 10, box, LCD_MEM, SPRT_AND);
}

void place_pacman(){
	Sprite16(pacman_x, pacman_y, 10, box, LCD_MEM, SPRT_AND);
	if(pacman_state){
		if(pacman_direc == TOP){
			Sprite16(pacman_x, pacman_y, 10, pacman_up_closed, LCD_MEM, SPRT_XOR);
		}
		if(pacman_direc == BOTTOM){
			Sprite16(pacman_x, pacman_y, 10, pacman_down_closed, LCD_MEM, SPRT_XOR);
		}
		if(pacman_direc == LEFT){
			Sprite16(pacman_x, pacman_y, 10, pacman_left_closed, LCD_MEM, SPRT_XOR);
		}
		if(pacman_direc == RIGHT){
			Sprite16(pacman_x, pacman_y, 10, pacman_right_closed, LCD_MEM, SPRT_XOR);
		}
	} else {
		if(pacman_direc == TOP){
			Sprite16(pacman_x, pacman_y, 10, pacman_up_open, LCD_MEM, SPRT_XOR);
		}
		if(pacman_direc == BOTTOM){
			Sprite16(pacman_x, pacman_y, 10, pacman_down_open, LCD_MEM, SPRT_XOR);
		}
		if(pacman_direc == LEFT){
			Sprite16(pacman_x, pacman_y, 10, pacman_left_open, LCD_MEM, SPRT_XOR);
		}
		if(pacman_direc == RIGHT){
			Sprite16(pacman_x, pacman_y, 10, pacman_right_open, LCD_MEM, SPRT_XOR);
		}
	}
}

void replace_ghosts(){
	unsigned int i;
	unsigned int x;
	unsigned int y;
	for(i = 0; i < num_ghosts; i++){
		Sprite16(old_ghost_x[i], old_ghost_y[i], 10, inverted_ghost, LCD_MEM, SPRT_AND);
		x = old_ghost_x[i]/10;
		y = old_ghost_y[i]/10;
		if(pellets[y][x] == 1){
			Sprite16(x*10, y*10, 10, pellet, LCD_MEM, SPRT_OR);
		} else if(pellets[y][x] == 2){
			Sprite16(x*10, y*10, 10, large_pellet, LCD_MEM, SPRT_OR);
		}
		if(x > 0){
			if(pellets[y][x - 1] == 1){
				Sprite16((x - 1)*10, y*10, 10, pellet, LCD_MEM, SPRT_OR);
			} else if(pellets[y][x - 1] == 2){
				Sprite16((x - 1)*10, y*10, 10, large_pellet, LCD_MEM, SPRT_OR);
			}
		}
		if(x < 15){
			if(pellets[y][x + 1] == 1){
				Sprite16((x + 1)*10, y*10, 10, pellet, LCD_MEM, SPRT_OR);
			} else if(pellets[y][x + 1] == 2){
				Sprite16((x + 1)*10, y*10, 10, large_pellet, LCD_MEM, SPRT_OR);
			}
		}
		if(y > 0){
			if(pellets[y - 1][x] == 1){
				Sprite16(x*10, (y - 1)*10, 10, pellet, LCD_MEM, SPRT_OR);
			} else if(pellets[y - 1][x] == 2){
				Sprite16(x*10, (y - 1)*10, 10, large_pellet, LCD_MEM, SPRT_OR);
			}
		}
		if(y < 9){
			if(pellets[y + 1][x] == 1){
				Sprite16(x*10, (y + 1)*10, 10, pellet, LCD_MEM, SPRT_OR);
			} else if(pellets[y + 1][x] == 2){
				Sprite16(x*10, (y + 1)*10, 10, large_pellet, LCD_MEM, SPRT_OR);
			}
		}
		Sprite16(ghost_x[i], ghost_y[i], 10, inverted_ghost, LCD_MEM, SPRT_AND);
		if(invincible_time >= 3500 || (invincible_time > 0 && invincible_time < 3500 && (invincible_time%1000 >= 500))){
			Sprite16(ghost_x[i], ghost_y[i], 10, scared_ghost, LCD_MEM, SPRT_OR);
		} else {
			Sprite16(ghost_x[i], ghost_y[i], 10, ghost, LCD_MEM, SPRT_OR);
		}
		old_ghost_x[i] = ghost_x[i];
		old_ghost_y[i] = ghost_y[i];
	}
}

void place_ghosts(){
	unsigned int i;
	for(i = 0; i < num_ghosts; i++){
		Sprite16(ghost_x[i], ghost_y[i], 10, ghost, LCD_MEM, SPRT_OR);
		old_ghost_x[i] = ghost_x[i];
		old_ghost_y[i] = ghost_y[i];
	}
}

void _main(void){
	clrscr();
	printf("Pacman\n\nby Ben Jones\npress any key to continue");
	ngetchx();
	clrscr();
	printf("Enter number of ghosts\n");
	printf("2: easy\n3: medium\n4: hard\n>");
	scanf("%d", &num_ghosts);
	if(num_ghosts > 100){
		num_ghosts = 100;
	}
	clrscr();
	printf("Enter ghost intelligence\n");
	printf("0 : easy\n10: medium\n20: hard\n>");
	scanf("%d", &intelligence);
	clrscr();
	center_text(45, "Ready!");
	
	old_int_5 = GetIntVec(AUTO_INT_5);
	counter = 0;
	SetIntVec(AUTO_INT_5, time_update);
	while(counter < 1500){
		//pass
	}
	
	randomize();
	
	invincible_time = 0;
	
	unsigned long int old_counter;
	unsigned int i;
	
	lost = 0;
	won = 0;
	
	TOP = 0b1000;
	BOTTOM = 0b0100;
	LEFT = 0b0010;
	RIGHT = 0b0001;
	NONE = 0;
	
	pacman_x = 70;
	pacman_y = 90;
	
	num_pellets = 0;
	
	pacman_state = 0;
	pacman_direc = LEFT;
	next_pacman_direc = NONE;
	
	set_pellets();
	
	clrscr();
	render_maze();
	
	place_pacman();
	old_pacman_state = 0;
	old_pacman_x = 70;
	old_pacman_y = 90;
	
	void *kbq = kbd_queue();
	unsigned int key = 0;
	old_counter = counter;
	old_pacman_direc = pacman_direc;
	
	ghost_x = malloc(sizeof(int)*num_ghosts);
	ghost_y = malloc(sizeof(int)*num_ghosts);
	old_ghost_x = malloc(sizeof(int)*num_ghosts);
	old_ghost_y = malloc(sizeof(int)*num_ghosts);
	ghost_direc = malloc(sizeof(unsigned short int)*num_ghosts);
	frozen = malloc(sizeof(unsigned long int)*num_ghosts);
	
	for(i = 0; i < num_ghosts; i++){
		if(i == 1){
			ghost_x[i] = 80;
			ghost_y[i] = 40;
		} else if(i == 2){
			ghost_x[i] = 70;
			ghost_y[i] = 50;
		} else if(i == 3){
			ghost_x[i] = 80;
			ghost_y[i] = 50;
		} else {
			ghost_x[i] = 70;
			ghost_y[i] = 40;
		}
		frozen[i] = 10000*i;
		frozen[i] -= frozen[i]%50;
		ghost_direc[i] = TOP;
	}
	
	place_ghosts();
	
	while(counter < 2500){
		//pass
	}
	
	counter = 0;
	
	while(handle_input(&key, kbq)){
		if(old_counter != counter){
			move_pacman();
			if((counter%150 == 0) || ((counter + 50)%150 == 0)){
				move_ghosts();
			}
			remove_pacman();
			place_pacman();
			replace_ghosts();
			old_pacman_state = pacman_state;
			old_pacman_direc = pacman_direc;
			old_pacman_x = pacman_x;
			old_pacman_y = pacman_y;
			if(invincible_time > 0){
				invincible_time -= counter - old_counter;
				invincible_time -= invincible_time%50;
			}
			for(i = 0; i < num_ghosts; i++){
				if(frozen[i] > 0){
					frozen[i] -= counter - old_counter;
					frozen[i] -= frozen[i]%50;
				}
			}
			old_counter = counter;
		}
		if((counter%1000) == 0){
			pacman_state = 0;
		} else if(((counter + 500)%1000) == 0){
			pacman_state = 1;
		}
	}
	
	if(lost || won){
		clrscr();
		place_pacman();
		place_ghosts();
		counter = 0;
		
		while(counter < 1000){
			//pass
		}	
	}
	
	if(lost){
		clrscr();
		center_text(45, "You Lose!");
		ngetchx();
	} else if(won){
		clrscr();
		center_text(35, "Congratulations!");
		center_text(45, "You Win!");
		ngetchx();
	}
	SetIntVec(AUTO_INT_5, old_int_5);
	free(ghost_x);
	free(ghost_y);
	free(old_ghost_x);
	free(old_ghost_y);
	free(ghost_direc);
	free(frozen);
}