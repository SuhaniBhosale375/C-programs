#include<stdio.h>
#include<stdlib.h>

struct node
{
    int Data;
    struct node * Next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = No;
    newn->Next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->Next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
    printf("Elements from the linked list are: \n");

    while(First != NULL)
    {
        printf("| %d | -> ",First->Data);
        First = First->Next;
    }
    printf("NULL");
}

int Count(PNODE First)
{
    int iCnt = 0;

    while(First != NULL)
    {
        iCnt++;
        First = First->Next;
    }
    return iCnt;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    Display(Head);
    iRet = Count(Head);
    printf("\nNumber of elements are : %d",iRet);


    return 0;
}