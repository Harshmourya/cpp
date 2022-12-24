#include<iostream>
using namespace std;

# define n 10
int rear =-1,front=-1;
int arr[n],var;

void insert (){
    
    if (rear==n-1)
    {
        cout<<"\n\n OVERFLOW! \n\n";
    }
    else
    {
        
        cout<<"\n Enter value ";cin>>var;
        rear++;
        arr[rear]=var;
        front=0;
    }
}
void display(){
    if (rear==-1)
    {      
    cout<<"\n\n QUEUE IS EMPTY \n\n";
    }
    else{cout<<" \n\n  The elements presente in Queue ";
        for (int i = front; i <=rear; i++)
        {
            cout<<arr[i]<<" ";
        }cout<<"\n";
        
    }
}
void remove(){
    
    if (rear==-1)
    {
        cout<<"\n\n UNDERFLOW! \n\n";
    }  
    else
    {
        cout<<"\n Element delete from queue is "<<arr[front]<<"\n";
        front++;rear--;
    }
}
int main(){

    system("cls");
    int ch;
    do
    {
        cout<<"\n 1 -> insertion \n 2 -> Display \n 3 -> Delete \n 4 -> Exit ";
        cin>>ch;
        switch (ch)
        {
        case 1:insert();
            break;
        
        case 2:display();
            break;

        case 3:remove();
            break;

        case 4:cout<<"Exit";
            break;
        default:cout<<"\n ACHE PADH LE \n";
            break;
        }
    }while (ch!=4);
return 0;
}