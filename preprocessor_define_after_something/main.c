#include <stdio.h>

int main()
{

    void init() {
        printf("init\n");
    }

    void fake_init() {
        printf("fake_init\n");
    }

    init();

    #define init fake_init

    init();

    return 0; 
}
