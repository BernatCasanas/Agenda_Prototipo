#ifndef __GLOBALS_H__
#define __GLOBALS_H__

#define LOG(format, ...) log(__FILE__, __LINE__, format, __VA_ARGS__);
void log(const char file[], int line, const char* format, ...);

#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0

#define MIN( a, b ) ( ((a) < (b)) ? (a) : (b) )
#define MAX( a, b ) ( ((a) > (b)) ? (a) : (b) )

enum update_status
{
	UPDATE_CONTINUE = 1,
	UPDATE_STOP,
	UPDATE_ERROR
};

// Useful typedefs ---------
typedef unsigned int uint;

// Configuration -----------
//To adjust fullscreen set SCREEN_SIZE & FULLSCREEN DESKTOP to 1, else SCREEN_SIZE = 3
#define SCREEN_SIZE 1
#define SCREEN_WIDTH (770/2) + 30
#define SCREEN_HEIGHT (1334/2) + 30
#define WIN_BORDERLESS 1
#define WIN_RESIZABLE 0
#define REN_VSYNC 1


#endif // __GLOBALS_H__ s