#if ! defined MANY || MANY < 1
#define MANY 10
#endif

static int heap [MANY];

void * new ( const void type, ...){
    int* p; // & heap [1 ..]
    for( p = heap + 1; p < heap + MANY; p++)
        if(!*p)
            break;
    assert(p < heap + MANY);
    *p = MANY;
    return p;
}
