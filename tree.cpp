#include<stdlib.h>
#include<stdio.h>
#include<iostream>

using namespace std;

struct tree {
   int val;
   struct tree * right, * left;
};

typedef struct tree node;

void insert(node ** tree, node * item) {
   if((*tree)==NULL) {
      *tree = item;
      return;
   }
   if(item->val<(*tree)->val)
     //insert(&tree->left,item);
   //insert(((*tree)->left,item);
      insert(&(*tree)->left, item);


   else if(item->val>(*tree)->val)
      insert(&(*tree)->right, item);
}

void display(node * tree) {
    struct tree * temp;
    temp= tree;


   if(temp->left ) display(temp->left);
   cout<<temp->val<<endl;
   if(temp->right) display(temp->right);
}

int  main() {
   node * curr, * root;
   int i;


   void findp(struct tree *,int );

   root = NULL;

   for(i=1;i<=10;i++) {
      curr = new node;
      curr->left = curr->right = NULL;
      curr->val = i;
      insert(&root, curr);
   }
cout<<"binary tree"<<endl;
   display(root);


   cout<<"finding path"<<endl;
  int position =0;
   findp(root,position);

return 0;
}


void findp(struct tree* root,int position)
{
    struct tree* temp;
    //temp=NULL;
    temp=root;
    int i;
    int queue[10]={0};
    //int position;


    i=0;
   if(temp->left )
   {
       position++;
       queue[i++]=temp->val;
       if(temp->left->left==NULL)
       {
           for(int j=0;j<=position;j++)
           {

           cout<<queue[j];
           }
           findp(temp->right,position);
      }

    findp(temp->left,position);

   }
 //  cout<<temp->val<<endl<<endl;
   if(temp->right)
   {
       findp(temp->right,position);

   }


}
