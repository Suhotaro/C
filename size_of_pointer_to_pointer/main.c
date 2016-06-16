#include <stdio.h>
#include <string.h>

static char *interlanl_outputs[2] = { "LVDS", "DSI" };

int _screen_is_internal_screen(const char* name)
{
    char *connector_name = NULL;   
    int i = 0;

    for (i = 0; i < 2; i++)
        {
            connector_name = strstr(name, interlanl_outputs[i]);
            printf (" %s", connector_name);

            if (connector_name != NULL)
                return 1;        

            connector_name = NULL;
        }

    return 0;
}

int main()
{
    char *name = NULL;

    name = "HDMI-A-0";
    if (_screen_is_internal_screen(name) == 0)
        printf("  %s: not internal\n", name);


    name = "DSI-0";
    if (_screen_is_internal_screen(name) == 0)
        printf("  %s: not internal\n", name);

    name = "DVI-5-4-2-1";
    if (_screen_is_internal_screen(name) == 0)
        printf("  %s: not internal\n", name);




    return 0;
}
