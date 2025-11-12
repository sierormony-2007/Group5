
#include "queue.hpp"



void menu(){
    cout<<"---------Menu---------"<<endl;
    cout<<"1. Add customer "<<endl;
    cout<<"2. Serve customer "<<endl;
    cout<<"3. Display customers "<<endl;
    cout<<"4. Search customer "<<endl;
    cout<<"5. Veiw front customer "<<endl;
    cout<<"6. Veiw rear customer "<<endl;
    cout<<"9. Clear all customers "<<endl;
    cout<<"10. Exit "<<endl;

    cout<<"Enter your choice 1-8: ";
}
int main(){

    Queue q;
    int choice;
    


    while (true)
    {
        menu();
        cin>>choice;
        cout<<endl;
        /* code */
        switch (choice)
        {
        case 1://add customer
            /* code */
            // cout<<"Enter customer name to add: ";
            // string cname;
            // cin>>cname;
           
            cout<<"Enter customer ID to add: ";
            int id;
            
            cin>>id;
            
            q.enqueue(id);
            cout<<"Customer "<<id<<" added."<<endl;
            break;
        case 2:
           
            q.dequeue();
            break;
        case 3:
          
            
            cout<<"Id customers : ";
            q.display();
            cout<<endl;
            break;
        case 4:
           
            cout<<"Enter position to search customer: ";
            cin>>id;
            q.search(id);
            break;
        case 5:
            
             q.showfront();
            break;
        case 6:
           
            q.showRear();
            break;
        
        case 7:
            q.clear();
            break;
        case 8:
             
            cout<<"Good luck!!"<<endl;
        
        default:
        cout<<"Invalid choice! Please enter 1-8."<<endl;
            break;
        }
        cout<<"Please enter to continue....";
        cin.ignore();
        cin.get();
    }
    return 0;
    
}