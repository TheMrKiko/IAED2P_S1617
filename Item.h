#ifndef _ITEM_
#define _ITEM_

/****************************************************************************/
/******************************** BIBLIOTECAS *******************************/
/****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/****************************************************************************/
/******************************** CONSTANTES ********************************/
/****************************************************************************/
#define key(A) (A != NULL ? A->chave : "")
#define quant(A) (A != NULL ? A->quantidade : )
#define less(A, B) strcmp(A, B) < 0
#define equal(A, B) strcmp(A, B) == 0

/****************************************************************************/
/******************************** ESTRUTURAS ********************************/
/****************************************************************************/
typedef char* Key;
typedef struct produto {
	Key chave;
	int quantidade;
} *Item;

/****************************************************************************/
/**************************** VARIAVEIS EXTERNAS ****************************/
/****************************************************************************/
extern int maxQuant, maxNum;

/****************************************************************************/
/******************************** PROTOTIPOS ********************************/
/****************************************************************************/
void deleteItem(Item);
Item newItem(Key, int);
void visitItem(Item);
int equalMax(Item);
void eMax(Item, int*, Item*);

#endif
