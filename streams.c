// José Ángel González Vázquez
// Raúl Andrés Villalpando Barba

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char * argv[])
{
    FILE * led = fopen("/sys/class/leds/gpio-led/brightness", "w");
    FILE * rng = fopen("/dev/random", "r");
    char c;


    while (1)
    {
        c = fgetc(rng);
        printf("%d\n", c);
        if (c > 128)
        {
            fputc('1', led);
        }
        else
        {
            fputc('0', led);
        }
        rewind(led);
        sleep(1);
    }
}