void copy(int a) { a+= 2; }
void ref(int& a) { a+= 2; }
void ptr(int* a) { *a+= 2; }

void example () {
    int c = 10;
    int& r = c;
    int* ptr = &c;    // typically int* p = new int{10};

    copy(c);
    copy(r);
    copy(*p);

    ref(c);
    ref(r);
    ref(*p);

    ptr(&c);
    ptr(&r);
    ptr(p);
}