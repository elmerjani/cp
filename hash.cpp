#include <iostream>
#include <string>
#include <cstdlib>

#include "hash.h"

using namespace std;

int hash1::Hash(string key){
    int index;
    int hashage = 0;

    for(int i=0; i<key.length(); i++){
        hashage += (int)key[i];
    }
    //cout << "la somme hashage = " << hashage << endl;
    index = hashage % tailleTabHash;
    //cout << "la somme modulo hashage = " << hashage << endl;

    return index;
}

hash1::hash1(){
    for (int i=0; i<tailleTabHash; i++){
        hashtable[i] = new item;
        hashtable[i]->nom = "vide";
        hashtable[i]->tel = "vide";
        hashtable[i]->next = NULL;
    }
}

void hash1::AddItem(string nom, string tel){
    int index = Hash(nom);
    //cout << "position = " << index << endl;
    if(hashtable[index]->nom == "vide"){
        hashtable[index]->nom = nom;
        hashtable[index]->tel = tel;
        hashtable[index]->next = NULL;
    }else{
        item* ptr = hashtable[index];
        item* newitem = new item;
        newitem->nom = nom;
        newitem->tel = tel;
        newitem->next = NULL;
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = newitem;
    }
}

int hash1::NbiteminPlace(int index){
    int nbitems = 0;
    if (hashtable[index]->nom == "vide")
        return nbitems;
    else{
        nbitems++;
        item* ptr = hashtable[index];
        while (ptr->next != NULL){
            nbitems++;
            ptr = ptr->next;
        }
    }

    return nbitems;
}

void hash1::AfficheItem(int index){
    item* ptr = hashtable[index];
    if (ptr->nom == "vide"){
        cout << "case vide" << endl;
    } else {
        while(ptr->next != NULL){
            cout << ptr->nom << endl;
            cout << ptr->tel << endl;
            cout << "----------" << endl;
            ptr = ptr->next;
        }
        //cout << "**********" << end;
    }
}

void hash1::AfficherHashtable(){
    int nbinPlace = 0;
    for (int i=0; i< tailleTabHash; i++){
        nbinPlace = NbiteminPlace(i);
        cout << "nombre d element dans la case = " << nbinPlace << endl;
        cout << hashtable[i]->nom << endl;
        cout << hashtable[i]->tel << endl;

        AfficheItem(i);
    }
}

void hash1::RechercherItem(string nom){
    int index = Hash(nom);
    bool nomTrouve = false;
    string tel ;
    item* ptr = hashtable[index];
    while (ptr != NULL){
        if(ptr->nom == nom){
           nomTrouve = true;
           tel = ptr->tel;
        }
        ptr = ptr->next;
    }
    if (nomTrouve ==true){
        cout << "element trouv� " << nom << "   :   "<< tel << endl;
    } else {
        cout << "element non trouv� !!!" << endl;
    }

}


void hash1::DeleteItem(string nom) {
    int index = Hash(nom);
    item* current = hashtable[index];
    item* previous = nullptr;

    // Search for the item in the linked list
    while (current != nullptr && current->nom != nom) {
        previous = current;
        current = current->next;
    }

    // Case 1: If the item does not exist in the hash table
    if (current == nullptr) {
        cout << "Element not found. Cannot delete." << endl;
        return;
    }

    // Case 2: If the item exists and is the only item in its bucket
    if (current->next == nullptr && current->nom == nom) {
        current->nom = "vide";
        current->tel = "vide";
        cout << "Element deleted successfully." << endl;
        return;
    }

    // Case 3: If the item exists and is one of multiple items in its bucket
    if (current->next != nullptr && current->nom == nom) {
        // If the item is the first node in the bucket
        if (previous == nullptr) {
            hashtable[index] = current->next;
            delete current;
        } else {
            previous->next = current->next;
            delete current;
        }
        cout << "Element deleted successfully." << endl;
    }
}

