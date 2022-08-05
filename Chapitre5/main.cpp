#include <iostream>
#include <string>
using namespace std;

void show();
int addition(int a, int b);
int substraction(int a, int b);
int multiplication(int a, int b);
int division(int a, int b);
int product(int a);

int main(){
    show();

    return 0;
}

void show(){
    int a, b, sum=0, &showValue=sum;;
    char valueOperator;
    cout << "-------------------------------------------------------"<< endl;
    cout << "Simple Calculatrice" << endl;

    cout << "Premiere valeur : "; 
    cin >> a;
    cout << "Quelle operateur ? (Entrer + ou - ou * ou /) : ";
    cin >> valueOperator;
    cout << "Deuxieme valeur : "; 
    cin >> b;
    
    if (valueOperator == '+'){
        sum = addition(a,b);
    }else if(valueOperator == '-'){
        sum = substraction(a,b);
    }else if (valueOperator == '*'){
        sum = multiplication(a,b);
    }else if(valueOperator == '/'){
        sum = division(a,b);
    }else{
        cout << "error" <<endl;
    }
    cout << "Resultat : " << a << valueOperator << b << " = " << showValue << endl;
    cout << "-------------------------------------------------------"<< endl;
    
}

int addition(int a, int b){
    return a + b;
}

int substraction(int a, int b){
    return a - b;
}

int multiplication(int a, int b){
    return a * b;
}

int division(int a, int b){
    return a / b;
}
