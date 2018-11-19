# reading ini-file

    #include "inif.h"

    Inif *ini;
    const char *data;
    ini = Inif_readfile("prog.cfg");
    Inif_printall(ini);
    data = Inif_get(ini, "section1", "key1");
    printf("section1,key1=%s\n", data);
    ini = Inif_set(ini, "section1", "key1", "newdata1");
    ini = Inif_set(ini, "section1", "key2", "newdata2");
    ini = Inif_set(ini, "section2", "key1", "newdata1");
    ini = Inif_set(ini, "section2", "key1", "newdata2");
    data = Inif_get(ini, "section1", "key1");
    printf("section1,key1=%s\n", data);
    Inif_printall(ini);
    Inif_removeall(ini);
