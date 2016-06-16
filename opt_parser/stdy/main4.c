#include <stdio.h>

#include <stdlib.h>
#include <crypt.h>

int main(){
    printf("crypt(\"password\",\"ab\") = \"%s\"\n",crypt("password","ab"));
    printf("crypt(\"password\",\"ab12\") = \"%s\"\n",crypt("password","ab12"));
    printf("crypt(\"password\",\"ac\") = \"%s\"\n",crypt("password","ac"));
    printf("crypt(\"password\",\"ac123\") = \"%s\"\n",crypt("password","ac123"));
    printf("crypt(\"password\",\"1a\") = \"%s\"\n",crypt("password","1a"));
    printf("crypt(\"password\",\"1a.\") = \"%s\"\n",crypt("password","1a."));
    return 0;
};
