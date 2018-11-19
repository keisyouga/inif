#ifndef _INIF_H
#define _INIF_H

typedef struct _Inif {
	char *section;
	char *key;
	char *data;
	struct _Inif *next;
} Inif;

Inif *Inif_set(Inif *Inif, const char *section, const char *key, const char *data);
const char *Inif_get(Inif *Inif, const char *section, const char *key);
Inif *Inif_readfile(const char *filename);
void Inif_printall(Inif *Inif);
void Inif_removeall(Inif *inif);

#endif /* _INIF_H */
