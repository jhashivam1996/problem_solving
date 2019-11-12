#include<iostream>
using namespace std;

class BST{
    int a[1000];
public:
    BST(){
        for(int i=0;i<1000;i++)
            a[i]=0;
    }
    void Insert(int x){
        int pos=1;
        while(a[pos]!=0){
            if(x<a[pos])
                pos=2*pos;
            else
                pos=(2*pos)+1;
        }
        a[pos]=x;
    }
    void printInorder(int root){
        if(a[root]==0)
            return;
        printInorder(root*2);
        cout<<a[root]<<"  ";
        printInorder((root*2)+1);
    }
    void printPost(int root){
        if(a[root]==0)
            return;
        printInorder(root*2);
        cout<<a[root]<<"  ";
        printInorder((root*2)+1);
    }
    int getMax(int root){
        while(a[root]!=0){
            root=(root*2)+1;
        }
        return a[root/2];
    }
    int getHeight(int root){
        int rootl=root;
        int rootr=root;
        int h1=0;
        int h2=0;
        while(a[rootl]!=0){
            rootl=rootl*2;
            h1++;
        }
        while(a[rootr]!=0){
            rootr=(rootr*2)+1;
            h2++;
        }
        return max(h1,h2);
    }
    int getHeightR(int root){
        if(a[root]==0)
            return 0;
        return 1+max(getHeightR(root*2),getHeightR((root*2)+1));
    }
    int getNumberOfNodes(int root){
        if(a[root]==0)
            return 0;
        return  1+getNumberOfNodes(root*2)+getNumberOfNodes((root*2)+1);
    }
    void  searchItem(int item){
        int root=1;
        while(a[root]!=0){
            if(item==a[root]){
                cout<<"\nItem found at index: "<<root;
                return;
            }
            else if(item>a[root])
                root=(root*2)+1;
            else
                root=root*2;
        }
    }

};

main(){
    BST tree;
    tree.Insert(4);
    tree.Insert(7);
    tree.Insert(1);
    tree.Insert(2);
    tree.Insert(6);
    tree.Insert(9);
    tree.Insert(3);
    tree.Insert(5);
    tree.Insert(8);
    tree.Insert(45);
    tree.Insert(100);
    cout<<"Inorder: ";
    tree.printInorder(1);
    cout<<"\n\nMaximum: "<<tree.getMax(1);
    cout<<"\nHeight: "<<tree.getHeightR(1);
    cout<<"\nTotal node: "<<tree.getNumberOfNodes(1);
    tree.searchItem(7);

}
