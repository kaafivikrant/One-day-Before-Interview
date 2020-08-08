#include <iostream>
using namespace std;

class MyHash{
    int *arr;
    int cap,size;

public:
    MyHash(int c){
        cap = c;
        size = 0;
        for(int i=0;i<cap;i++)
            arr[i] = -1;
    }

    int hash(int key){
        return key % cap;
    }

//Search in a circular manner.
    bool search(int key){
        int h = hash(key);
        int i = h;
        while(arr[i]==key)
            return true;
        i=(i+1)%cap;
        if(i==h){
            return false;
        }
        return false;
    }
    bool insert(int key){
        if(size==cap)
            return false;
        int i=hash(key);

//Find the next blank space
        while(arr[i]!=-1 && arr[i]!=-2 && arr[i] !=key)
            i=(i+1)%cap;
//If same value is present
        if(arr[i]==key) {
            return false;
        }else{
            arr[i] = key;
            size++;
            return true;
        }

    }
    bool erase(int key){
        int h = hash(key);
        int i=h;
        while (arr[i] != -1){
            if(arr[i]==key){
                arr[i] = -2;
                return true;
            }
            i = (i+1)%cap;
            if(i==h){
                return false;
            }
        }
        return false;
    }
};

int main(){
    MyHash mh(7);

    mh.insert(49);
    mh.insert(56);
    mh.insert(72);
    mh.search(56) ? cout << "YES" : cout << "NO";
    mh.erase(56) ? cout << "YES" : cout << "NO";
    mh.search(56) ? cout << "YES" : cout << "NO";

    return 0;
}