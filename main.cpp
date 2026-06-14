//incldue
#include <iostream>

//using
using std::cout;
using std::cin;
using std::endl;

//Prototipi Funzioni:

//Richiesta numeri
double chiedi_primo_numero();

double chiedi_secondo_numero();

//Calcolo
double fai_addizione(double num1, double num2);

double fai_sottrazione(double num1, double num2);

double fai_divisione(double num1, double num2);

double fai_moltiplicazione(double num1, double num2);

int main(){
    //Variabili
    char op{};
    double num1{};
    double num2{};
    double result{};

    //CALCOLATRICE
    cout << "--- CALCOLATRICE ---" <<  endl;

    //Operazione da svolgere
    cout << "Inserisci l'Operazione (+, -, /, *)." << endl << "Operazione: ";
    cin >> op;

    //Controllo operazione
    switch (op)
    {
    case '+':
        //Addizione
        
        //Richiesta dei numeri
        num1 = chiedi_primo_numero();
        num2 = chiedi_secondo_numero();

        //Calcolo del risultato
        result = fai_addizione(num1, num2);

        //Output
        cout << "Risultato: " << result << endl;
        break;

    case '-':
        //Sottrazione

        //Richiesta dei numeri
        num1 = chiedi_primo_numero();
        num2 = chiedi_secondo_numero();

        //Calcolo del risultato
        result = fai_sottrazione(num1, num2);

        //Output
        cout << "Risultato: " << result << endl;
        break;

    case '/':
        //Divisione

        //Richiesta dei numeri
        num1 = chiedi_primo_numero();
        num2 = chiedi_secondo_numero();

        //Calcolo del risultato
        result = fai_divisione(num1, num2);
        
        //Controllo se possibile svolgere la divisione
        if(!result == 0.0){
            //Output
            cout << "Risultato: " << result << endl;
        }
        break;

    case '*':
        //Moltiplicazione

        //Richiesta dei numeri
        num1 = chiedi_primo_numero();
        num2 = chiedi_secondo_numero();

        //Calcolo del risultato
        result = fai_moltiplicazione(num1, num2);

        //Output
        cout << "Risultato: " << result << endl;
        break;

    default:
        cout << "Risposta non valida" << endl;
        break;
    }

    //Fine
    cout << "--------------------" << endl;
    return 0;
}

//Definizione delle funzioni

double chiedi_primo_numero(){
    double num1{};
    cout << "Inserisci i numeri per il calcolo:" << endl << "#1: ";
    cin >> num1;

    return num1;
}

double chiedi_secondo_numero(){
    double num2{};
    cout << "#2: ";
    cin >> num2;

    return num2;
}

//Funzioni per fare le operazioni
double fai_addizione(double num1, double num2){
    double risultato = num1 + num2;
    return risultato;
}

double fai_sottrazione(double num1, double num2){
    double risultato = num1 - num2;
    return risultato;
}

double fai_divisione(double num1, double num2){
    //Richiamo dal passato: avevo scritto !num2 == 0. 
    //Solo per ricordarti il calcolo contorto che fa il compilatore
    if (!(num2 == 0)){
        double risultato = num1 / num2;
        return risultato;
    }
    else {
        cout << "Non puoi dividere per 0!" << endl;
        return 0.0;
    }
}

double fai_moltiplicazione(double num1, double num2){
    double risultato = num1 * num2;
    return risultato;
}