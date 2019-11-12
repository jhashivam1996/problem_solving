#include<iostream>
using namespace std;

struct box{
    int boxid;
    string item_name;
    string source;
    string destination;
    float price;
    int weight;
    int no_of_box;
    box* nextbox;
};


box* createNewBox(int newboxid,
                  string item_name,
                  string src,
                  string dst,
                  float price,
                  int weight,
                  int no_of_box){
    box* newBox=new box;
    newBox->boxid=newboxid;
    newBox->item_name=item_name;
    newBox->source=src;
    newBox->destination=dst;
    newBox->price=price;
    newBox->no_of_box=no_of_box;
    newBox->weight=weight;
    newBox->nextbox=NULL;
    return newBox;
}

box* insertNewBox(box* head,
                  int newboxid,
                  string item_name,
                  string src,
                  string dst,
                  float price,
                  int weight,
                  int no_of_box){
    box* newBox=createNewBox(newboxid,
                             item_name,
                             src,
                             dst,
                             price,
                             weight,
                             no_of_box);
    if(head==NULL){
        head=newBox;
        return head;
    }
    newBox->nextbox=head;
    head=newBox;
    return head;
}
void printBoxList(box* head){
    int total_box_in_list=0;
    int total_item_in_list=0;
    int total_amount=0;
    box* tempbox=head;
    while(tempbox!=NULL){
        cout<<"BoxID: "<<tempbox->boxid<<"\n"
            <<"Item: "<<tempbox->item_name<<"\n"
            <<"Weight/box: "<<tempbox->weight<<"\n"
            <<"Price/box: "<<tempbox->price<<"\n"
            <<"Total box: "<<tempbox->no_of_box<<"\n"
            <<"Total cost: "<<tempbox->price*tempbox->no_of_box<<"\n"
            <<"Source: "<<tempbox->source<<"\n"
            <<"Destination: "<<tempbox->destination<<"\n\n";
        total_box_in_list+=tempbox->no_of_box;
        total_item_in_list++;
        total_amount+=tempbox->price*tempbox->no_of_box;
        tempbox=tempbox->nextbox;
    }
    cout<<"\tList Description:-"<<"\n";
    cout<<"Total number of item in list: "<<total_item_in_list<<"\n";
    cout<<"Total number of box in list: "<<total_box_in_list<<"\n";
    cout<<"Total payable amount: "<<total_amount<<"\n";
}

main(){
    box* head=NULL;
    head=insertNewBox(head,51101,"mango","patna","punjab",50,10,25);
    head=insertNewBox(head,10445,"apple","kashmir","delhi",80,5,12);
    head=insertNewBox(head,10785,"papaya","banglore","ahmadabad",40,7,14);
    printBoxList(head);
}
