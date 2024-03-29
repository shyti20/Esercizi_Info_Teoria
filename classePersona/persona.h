/*Progettare in UML e implementare la classe Persona, dipendente dalla classe Data (opportunamente adattata), caratterizzata dai seguenti attributi: nome, cognome, data di nascita. Oltre ai costruttori, al distruttore e ai metodi per l'accesso in I/O agli attributi privati, realizzare i seguenti metodi:
- overloading dell’operatore >> per la lettura in input dei dati di una persona, con validazione della data di nascita.
- overloading dell’operatore << per la stampa in output dei dati di una persona, visualizzando la data di nascita nella forma estesa (es: 20 gennaio 2004).
- overloading dell’operatore == che confronta due persone e restituisce true se sono identiche.
- overloading dell’operatore > che confronta due persone e restituisce quella con età maggiore.
- overloading dell’operatore = che svolge il classico ruolo di assegnazione.
- funzione friend che restituisce l'età di una persona.*/

#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include "data.h"

using namespace std;

class Persona {
    private:
        string nome;
        string cognome;
        Data nascita;
    public:
        Persona();
        Persona(string nome, string cognome, Data nascita);
        Persona(const Persona& p);
        ~Persona();
        void setNascita(Data nascita);
        void setNome(string nome);
        void setCognome(string cognome);
        Data getNascita();
        string getNome();
        string getCognome();
    friend ostream& operator<<(ostream& out, const Persona& p);
    friend istream& operator>>(istream& in, Persona& p);
    bool operator==(const Persona& p2);
    Persona operator>(const Persona& p);
    Persona& operator=(const Persona& p);
    friend int etaPers(const Persona p);
};

#endif