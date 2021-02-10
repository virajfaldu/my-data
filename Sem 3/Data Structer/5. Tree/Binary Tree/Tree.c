#include <stdio.h>
#include <stdlib.h>

struct tree
{
    int data;
    struct tree *lptr, *rptr;
} *root = NULL;

void insert(int val)
{
    struct tree *new1, *curr, *par;
    int d;
    new1 = (struct tree *)malloc(sizeof(struct tree));
    new1->lptr = new1->rptr = NULL;
    new1->data = val;

    if (root == NULL)
    {
        root = new1;
        return;
    }
    curr = root;
    while (curr != NULL)
    {
        if (val > curr->data)
        {
            d = 0;
            par = curr;
            curr = curr->rptr;
        }
        else if (val < curr->data)
        {
            d = 1;
            par = curr;
            curr = curr->lptr;
        }
    }
    if (d == 0)
    {
        par->rptr = new1;
    }
    else
    {
        par->lptr = new1;
    }
}

void preorder(struct tree *r)
{
    if (r == NULL)
        return;
    printf("%d->", r->data);
    preorder(r->lptr);
    preorder(r->rptr);
}
void inorder(struct tree *r)
{
    if (r == NULL)
        return;
    inorder(r->lptr);
    printf("%d->", r->data);
    inorder(r->rptr);
}
void postorder(struct tree *r)
{
    if (r == NULL)
        return;
    postorder(r->lptr);
    postorder(r->rptr);
    printf("%d->", r->data);
}

void main()
{
    int i, val, ch;
    do
    {

        printf("\n|----------Menu----------|");
        printf("\n 1. Insert");
        printf("\n 2. preorder");
        printf("\n 3. Inoreder");
        printf("\n 4. Postorder");
        printf("\n 5 .Exit");
        printf("\n|------------------------|");
        printf("\n\n Enter your choice: ");
        scanf("%d", &ch);

        if (ch == 1)
        {
            printf("\n Enter your value : ");
            scanf("%d", &val);
            insert(val);
        }
        else if (ch == 2)
        {
            preorder(root);
        }
        else if (ch == 3)
        {
            inorder(root);
        }
        else if (ch == 4)
        {
            postorder(root);
        }
    } while (ch != 5);
}