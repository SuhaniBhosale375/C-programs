#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
    struct node *prev;      //X
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First,int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;      //x

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        (*First)->prev = newn;      //x
        *First = newn;
    }
}

void InsertLast(PPNODE First,int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE temp = *First;
    
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;      //x

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;      //x
    }
}
void Display(PNODE First)
{
    printf("Elements of linked list are\n");

    printf("NULL <=>");

    while(First != NULL)
    {
        printf("| %d | <=> ",First->data);
        First = First->next;
    }
    printf("NULL\n");
}

int Count(PNODE First)
{
    int iCnt = 0;
    printf("Elements of linked list are\n");

    while(First != NULL)
    {
        iCnt++;
        First = First->next;
    }
    return iCnt; 
}


void InsertAtPos(PPNODE First, int no, int iPos)
{
    int NodeCnt = 0,iCnt = 0;
    PNODE newn = NULL;
    PNODE temp = NULL;


    NodeCnt = Count(*First);

    if((iPos < 1) || (iPos > (NodeCnt + 1)))
    {
        printf("Invalid position \n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(First,no);
    }
    else if(iPos == NodeCnt + 1)
    {
        InsertLast(First,no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;              //x

        temp = *First;

        for(iCnt = 1; iCnt < iPos - 1;iCnt++)
        {
            temp = temp -> next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;        //x

        temp->next = newn;
        newn->prev = temp;              //x

    }
}

int main()
{
    int iRet = 0;
    PNODE Head = NULL;

    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    Display(Head);
    iRet = Count(Head);
    printf("Number of elements are : %d\n",iRet);

    InsertLast(&Head,101);
    InsertLast(&Head,111);
    Display(Head);
    iRet = Count(Head);
    printf("Number of elements are : %d\n",iRet);

    InsertAtPos(&Head,105,5);
    Display(Head);
    iRet = Count(Head);
    printf("Number of elements are : %d\n",iRet);

    return 0;
}