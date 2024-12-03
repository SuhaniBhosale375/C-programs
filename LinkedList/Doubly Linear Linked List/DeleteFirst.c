#include<stdio.h>
#include<stdlib.h>

struct node
{
    int Data;
    struct node*Next;
    struct node*Prev;       //X
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = No;
    newn->Next = NULL;
    newn->Prev = NULL;      //  X

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->Next = *First;
        (*First)->Prev = newn;
        *First = newn;
    }
}

void InsertLast(PPNODE First,int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE temp = NULL;

    newn->Data = No;
    newn->Next = NULL;
    newn->Prev = NULL;      //  X

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        temp = *First;

        while(temp->Next != NULL)
        {
            temp = temp -> Next;
        }
        temp->Next = newn;
        newn->Prev = temp;      //X

    }
}

void DeleteFirst(PPNODE First)
{
    PNODE temp = *First;

    if((*First)->Next == NULL)
    {
        free(*First);
        *First = NULL;
    }
    else
    {
        *First = (*First)->Next;
        free(temp);
        (*First)->Prev = NULL;
    }
}

void Display(PNODE First)
{
    printf("\nElements from linked list are :\n");
    printf("NULL");

    while(First != NULL)
    {
        printf(" <=> | %d | ",First->Data);
        First = First -> Next;
    }
    printf("<=> NULL\n");

}

int Count(PNODE First)
{
    int iCnt = 0;
    while(First != NULL)
    {
        iCnt++;
        First = First -> Next;
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
    printf("Number of elements are : %d",iRet);

    InsertLast(&Head,101);
    InsertLast(&Head,121);

     Display(Head);
    iRet = Count(Head);
    printf("Number of elements are : %d",iRet);

    DeleteFirst(&Head);

    Display(Head);
    iRet = Count(Head);
    printf("Number of elements are : %d",iRet);



    return 0;
}