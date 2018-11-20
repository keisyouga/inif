# reading ini-file

    #include "inif.h"

    Inif *ini;
    const char *data;
    ini = Inif_readfile("test.ini");
    Inif_printall(ini);
    data = Inif_get(ini, "section1", "key1");
    printf("section1,key1=%s\n", data);
    data = Inif_get(ini, "section3", "key1");
    printf("section3,key1=%s\n", data);
    ini = Inif_set(ini, "section1", "key1", "newdata1");
    ini = Inif_set(ini, "section2", "key2", "newdata2");
    ini = Inif_set(ini, "section3", "key1", "newdata1");
    Inif_printall(ini);
    Inif_removeall(ini);
