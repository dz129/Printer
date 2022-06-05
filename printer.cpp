//use stacks and queues to organize how people will use printers
//For these, we will use a linked list for the queue of users
//we will use std::stack for the txt files that people want to print
#include<iostream>
#include<stack>
#include <vector>
// we will use class system to define the system we want to reside our users and their files in
std::vector<std::stack<std::string>> userprints;

class sys{
    private:
    struct node{
        std::string user;
        struct node* nextuser;
    };
    std::string user;
    struct node* head = NULL;
    struct node* rear= NULL;
    public:
    //first we will write the functions to insert users into the queue for the printer
    
    void enqueue(){
        int filenum;
        std::cout << "Who is trying to print?";
        std::cin >> user;
        struct node* temp = new node;
        temp -> user = user;
        temp -> nextuser = NULL;
        if (head == NULL && rear == NULL){
            head = rear = temp;
            return;
        }
        rear -> nextuser = temp;
        rear = rear -> nextuser;
        std::cout << "How many files need to be printed?";
        std::cin >>filenum;{
        for (int i = 0; i < filenum; i++){

        }
    }
    }
    void dequeue(){
        struct node* temp = head;
        if (head == NULL){
            return;
        }
        else if (head == rear){
            head = rear = NULL;
        }
        else{
            head = head -> nextuser;
        }
        free(temp);
    }
    std::string top(){
        std::string username;
        username = head->user;
        return username;
    }

    class file{
        private:
        std::string file;
        public:
        std::stack<std::string> filestack;
        void enterstack(){
            std::cout<< "What is the file name?";
            std::cin >> file;
            filestack.push(file);
        }
        void removestack(){
            filestack.pop();
        }
        std::string top(){
            filestack.top();
        }
    };
    };


