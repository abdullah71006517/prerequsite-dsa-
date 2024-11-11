#include <iostream>
#include <iomanip> // For std::fixed and std::setprecision
using namespace std;
// pointer spical variable that can sotre memory address another variable 
// pointer of pointer spical varable than can store memory addess another pointer 
// data tpye * pointer name (normal pointer )
// data tpye ** pointer name (pointer of pointer )
// & addresss 
//     **  */Write a function that accepts a pointer to a pointer and changes the value of the integer that the pointer to pointer points to. Use the main() function to test it.*/

void change(int **ptr1 ){
    **ptr1=200;

}

int main() {
    int i = 100;
    int *ptr=&i;
    int **ptr1=&ptr;
   /* cout<<"address of i  "<< i<< endl;
    cout<<"address of ptr  "<< *ptr<< endl;
    cout<<"address of ptr1  "<< **ptr1<< endl;
    cout<<"afer"<<endl;
     cout<<"address of i "<<&i<<endl;
    cout<<"address of ptr "<< &ptr<< endl;
    cout<<"address of ptr1" << &ptr1 << endl;*/
    cout<<"before change : "<<**ptr1<<endl;
    change(ptr1);
    cout<<"after  change : "<<**ptr1<<endl;
   
    return 0;
}
