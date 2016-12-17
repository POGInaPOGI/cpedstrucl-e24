#include <iostream>
#include<conio.h>
using namespace std;

class LinkedList{
    struct Node {
        int x;
        Node *next;
    };

public:
    LinkedList(){
        head = NULL; // set head to NULL
    }

    void addValue(int val){
        Node *n = new Node();   
        n->x = val;             
        n->next = head;         
                               
        head = n;              
    }

    int popValue(){
        Node *n = head;
        int ret = n->x;

        head = head->next;
        delete n;
        return ret;
    }

private:
    Node *head; 
};
void menu(){

	cout << "What would you like to do?" << endl;
	cout << "1: Insert" << endl;
	cout << "2: Pop" << endl;
	cout << "3: Exit" << endl;
	
}
int main() {
	LinkedList list;
   	int cho;
	int num;
	while (1){
	system("cls");
	menu();
	cin >> cho;
	switch(cho){
		case 1:
	  	cout << "Insert " << endl;
  	cin >> num;
  	list.addValue(num);
 	break;
 	case 2:
 		cout << list.popValue();
 
 		system("pause");
 		break;
    case 3:
    	cout << "Done " << endl;
    	exit(0);
    	system("pause");
    	break;
}
}
    return 0;
}
