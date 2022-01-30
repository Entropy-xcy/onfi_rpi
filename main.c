#include <wiringPi.h>

#define IO_MIN 0
#define IO_MAX 7

#define CE 8
#define RE 9
#define WE 10
#define ALE 11
#define CLE 12
#define WP 13
#define RB 14


void io_mode(int mode)
{
    for(int i=0; i<IO_MAX; i++)
    {
        pinMode(i, mode);
    }
}

void setup()
{
    io_mode(OUTPUT);

    pinMode(CE, OUTPUT);
    pinMode(RE, OUTPUT);
    pinMode(WE, OUTPUT);
    pinMode(ALE, OUTPUT);
    pinMode(CLE, OUTPUT);
    pinMode(WP, OUTPUT);
    pinMode(RB, INPUT);
}

int main(void)
{
    setup();
}
