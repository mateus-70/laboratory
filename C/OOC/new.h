void delete(void* _item){
    int * item = _item;
    if(item){
        assert(item > heap && item < heap + MANY);
        *item = 0;
    }
}

void add(void* _set, const void * _element){
    int* set = _set;
    const int* element = _element;

    assert(set > heap && set < heap + MANY);
    assert(*set == MANY);
    assert(element > heap && element < heap + MANY);
    if(*element == MANY)
        *(int *) element = set - heap;
    else
        assert(* element == set - heap)

}
