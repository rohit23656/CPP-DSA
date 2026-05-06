#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *left;
    node *right;
    node(int value){
        data=value;
        left=right=NULL;
    }
};
node* binarytree()
{
    int x;
    cin>>x;
    if(x==-1)
    return NULL;
    node *temp=new node(x);
    //left side
    cout<<"enter the left child of "<<x<<" ";
    
    temp->left=binarytree();
    //right side
     cout<<"enter the right child of "<<x<<" ";
    temp->right=binarytree();
   return temp;
}
int main()
{
   cout<<"enter the root node: "<<endl;
   node *root=binarytree();

}