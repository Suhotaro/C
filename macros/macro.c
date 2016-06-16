#include <stdio.h>

/* drm module internal macros, structures, functions */
#define NEVER_GET_HERE() ERR("** NEVER GET HERE **")

#define C(b,m)              (((b) >> (m)) & 0xFF)
#define B(c,s)              ((((unsigned int)(c)) & 0xff) << (s))
#define FOURCC(a,b,c,d)     (B(d,24) | B(c,16) | B(b,8) | B(a,0))
#define FOURCC_STR(id)      C(id,0), C(id,8), C(id,16), C(id,24)

#define IS_RGB(format)      (format == TBM_FORMAT_XRGB8888 || format == TBM_FORMAT_ARGB8888 || \
                             format == TBM_FORMAT_XBGR8888 || format == TBM_FORMAT_ABGR8888)

#define CLEAR(x) memset(&(x), 0, sizeof(x))
#define MAX(a,b) (((a) > (b)) ? (a) : (b))
#define MIN(a,b) (((a) < (b)) ? (a) : (b))
#define SWAP(a, b)  ({int t; t = a; a = b; b = t;})
#define ROUNDUP(x)  (ceil (floor ((float)(height) / 4)))

#define ALIGN_TO_16B(x)    ((((x) + (1 <<  4) - 1) >>  4) <<  4)
#define ALIGN_TO_32B(x)    ((((x) + (1 <<  5) - 1) >>  5) <<  5)
#define ALIGN_TO_128B(x)   ((((x) + (1 <<  7) - 1) >>  7) <<  7)
#define ALIGN_TO_2KB(x)    ((((x) + (1 << 11) - 1) >> 11) << 11)
#define ALIGN_TO_8KB(x)    ((((x) + (1 << 13) - 1) >> 13) << 13)
#define ALIGN_TO_64KB(x)   ((((x) + (1 << 16) - 1) >> 16) << 16)

#define RETURN_VAL_IF_FAIL(cond, val) {\
    if (!(cond)) {\
        ERR("'%s' failed", #cond);\
        return val;\
    }\
}

int main()
{
	return 0;
}
