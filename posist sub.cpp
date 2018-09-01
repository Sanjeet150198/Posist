#include <bits/stdc++.h>
#include<string>
using namespace std;


struct Data {
    int ownId;
    float val;
    char ownname[30];

};

struct node {
    time_t time_now ;
    string time_in_date ;   
    Data *data ;
    string nodeId ;
    int nodeNumber ;
    node *ref_nodeid ;

    std::vector<node *> childref_nodeid;                

    node *genesisref_nodeid;
    set<int> Hashval;         

    bool isEncrypted;                       
    string password;


};

node createGenNode(int node_num){

   node *n = new node ;
   n->time_now = time(0);    // Get current timestamp

   n->nodeNum = node_num;
   stringstream s;
    s << node_number;
   n->nodeId = s.str();
   cout<<"Enter DATA";
   cin>>n->data->ownId;
   cin>>n->data->val;
   gets(n->data->ownname);

   n->ref_nodeid = NULL;
   n->genesisref_nodeid = n;  
   n->Hashval = {n->time_now,n->data,n->nodeNum,n->ref_nodeid,n->childref_nodeid,n->genesisref_nodeid}

 return n;             
}

// TASK 2 and 3 
void addChildNode(int node_number,node *genesis,int current_node_number){

    node *l = *(genesis->childref_nodeid[node_number]);
    int i=1;
    while(i){
       node *p = new node;

         p->nodeNum = current_node_number;
         p->nodeId = to_string(nodeNum);
            cout<<"Enter DATA";
        cin>>p->data->ownId;
        cin>>p->data->val;
        gets(p->data->ownname);
        n->ref_nodeid = &l ;      
        n->genesisref_nodeid = &genesis;   //copying genesis node address we received.
        n->Hashval = {n->time_now,n->data,n->nodeNum,n->ref_nodeid,n->childref_nodeid,n->genesisref_nodeid}

        cout<<"Add more (1/0)";
        cin>>i;
    }
}

// TASK 3/4
void encrypt(node *n){

    n->isEncrypted = true;
    cout<<"Enter owner password";
    cin>>n->password;

    //Using a basic approach to encrypt by subtracting some val from ASCII of character.
    for(i = 0; (i < 100 && n->password[i] != '\0'); i++)
        n->password[i] = n->password[i] + 2;


}

// Would take the address of node and a password string and return non-zero if passwords match;
int decrypt(node *given_node,string pass){


        for(i = 0; (i < 100 && pass[i] != '\0'); i++)
        n->pass[i] = n->pass[i] + 2;

        if(given_node->password == pass){
            return 1;
        }
        else{
            return 0;
        }
}

// TASK 7

void change_owner(node *given_node){

    string pass1,pass2;
    cout<<"Owner one enter password";
    cin>>pass;
    if(decrypt(given_node,pass)){
        cout<<"Ownership of node will be changed,enter new owner id";
        cin>>given_node->data->ownname;
        void encrypt(given_node);
    }
}

// TASK 8-9 
void longest_chain(node *given_node){
    /*This can be solved by applying DFS on the genesis node,i.e. the root node or any other node
	 whose address is given by using child node pointers array.*/
}

void merge_node(node *node1, node* node2){
    // Use DFS to calculate the longer chain from two.
    //Which is larger ,its password is retained.
}

int main(){
 static int no;
 no++;                               //Would keep a static variable to keep current count of nodes between function calls,
                                     //as no database is there.
 node *gen = createGenNode(no);
 n++;
 addChildNode(1,gen,n);
 return 0;
}
