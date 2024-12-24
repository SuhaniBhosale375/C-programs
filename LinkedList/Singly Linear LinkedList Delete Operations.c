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

void InsertLast(PPNODE First, int No)
{
     PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = No;
    newn->Next = NULL;
    PNODE temp = *First;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        while(temp->Next != NULL)
        {
            temp = temp->Next;
        }
        temp->Next = newn;
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

void InsertAtPos(PPNODE First, int No, int iPos)
{
    int NodeCnt = 0;
    PNODE newn = NULL;
    PNODE temp = NULL;
    int iCnt = 0;

    NodeCnt = Count((*First));

    if(iPos < 1 || iPos > NodeCnt+1)
    {
        printf("Invalid position");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(First,No);
    }
    else if(iPos == NodeCnt + 1)
    {
        InsertLast(First,No);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->Data = No;
        newn->Next = NULL;

        temp = *First;

        for(iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp = temp->Next;
        }
        newn->Next = temp->Next;
        temp->Next = newn;

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
        *First = (*First) -> Next;
        free(temp);
    }
}

void DeleteLast(PPNODE First)
{
    PNODE temp = *First;

    if((*First)->Next == NULL)
    {
        free(*First);
        *First = NULL;
    }
    else
    {
        
        while(temp->Next->Next != NULL)
        {
            temp = temp->Next;
        }
        free(temp->Next);
        temp->Next = NULL;
    }
}

void DeleteAtPos(PPNODE First, int iPos)
{
    int NodeCnt = 0;
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;

    int iCnt = 0;

    NodeCnt = Count((*First));

    if(iPos < 1 || iPos > NodeCnt+1)
    {
        printf("Invalid position");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst(First);
    }
    else if(iPos == NodeCnt + 1)
    {
        DeleteLast(First);
    }
    c
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
    printf("\nNumber of elements are : %d\n",iRet);

    InsertLast(&Head,101);
    InsertLast(&Head,121);

    Display(Head);
    iRet = Count(Head);
    printf("\nNumber of elements are : %d\n",iRet);

    InsertAtPos(&Head,111,5);

    Display(Head);
    iRet = Count(Head);
    printf("\nNumber of elements are : %d\n",iRet);

    DeleteAtPos(&Head,5);

    Display(Head);
    iRet = Count(Head);
    printf("\nNumber of elements are : %d\n",iRet);
    
    DeleteFirst(&Head);

    Display(Head);
    iRet = Count(Head);
    printf("\nNumber of elements are : %d\n",iRet);

    DeleteLast(&Head);

    Display(Head);
    iRet = Count(Head);
    printf("\nNumber of elements are : %d\n",iRet);

    return 0;
}