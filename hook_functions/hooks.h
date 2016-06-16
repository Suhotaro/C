#ifdef HOOK
    #define malloc(X) my_malloc(X) 
#endif

#ifdef HOOK
    #define free(X) my_free(X) 
#endif
