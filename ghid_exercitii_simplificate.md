# Ghid de studiu pentru cpp01

Acest ghid ia fiecare exercițiu din `cpp01` și îl sparge în concepte mai mici, ca să poți înțelege baza C++ înainte să rezolvi forma completă.

## Cum să le citești

Pentru fiecare exercițiu ai:

- ce idee principală verifică
- ce trebuie să înțelegi înainte
- 1 sau 2 exerciții mai simple de exersat

## ex00 - clase, obiecte, `new` și `delete`

### Ce înveți

- cum definești o clasă simplă
- diferența dintre obiect creat pe stack și obiect creat pe heap
- cum funcționează constructorul și destructorul
- cum trimiți un obiect către o funcție

### Ideea din exercițiu

Ai o clasă `Zombie` și două funcții:

- `randomChump(name)` creează un zombie local și îl distruge automat la finalul funcției
- `newZombie(name)` creează un zombie cu `new`, deci trebuie șters manual cu `delete`

### Exerciții mai simple

1. Creează o clasă `Cat` cu un singur atribut `name`.
	- Constructorul afișează `Cat created`.
	- Destructorul afișează `Cat destroyed`.
	- În `main`, creează un obiect local și vezi ordinea mesajelor.

2. Creează o funcție `makeCat(std::string name)` care construiește un `Cat` local și apelează o metodă `meow()`.
	- Scopul este să vezi că obiectul local dispare automat la ieșirea din funcție.

## ex01 - array de obiecte și alocare dinamică pentru mai multe obiecte

### Ce înveți

- cum creezi un array de obiecte cu `new[]`
- cum ștergi corect cu `delete[]`
- cum inițializezi fiecare element din array

### Ideea din exercițiu

Funcția `zombieHorde(N, name)` creează o mulțime de zombie cu `new Zombie[N]`, apoi le setează numele unul câte unul.

### Exerciții mai simple

1. Creează o clasă `Dog` cu `name` și o metodă `bark()`.
	- Fă o funcție `dogPack(int n)` care întoarce `new Dog[n]`.
	- În `main`, afișează ce face fiecare câine.

2. Fă varianta fără funcție auxiliară.
	- Creează direct în `main` un array dinamic de 3 obiecte.
	- Setează numele fiecărui obiect într-un `for`.
	- Distruge-le apoi cu `delete[]`.

## ex02 - pointeri și referințe

### Ce înveți

- ce este un pointer
- ce este o referință
- cum obții adresa unei variabile
- diferența dintre valoare și adresă

### Ideea din exercițiu

Ai o variabilă de tip `std::string`, un pointer către ea și o referință la ea. Apoi afișezi adresele și valorile ca să vezi că pointerul și referința duc la același obiect.

### Exerciții mai simple

1. Folosește un `int` în loc de `std::string`.
	- Creează `int x = 42`.
	- Fă `int* p = &x` și `int& r = x`.
	- Afișează valoarea și adresa pentru fiecare.

2. Schimbă valoarea doar prin pointer.
	- Modifică `*p = 99`.
	- Verifică faptul că și `r` vede aceeași valoare.

## ex03 - referință vs pointer în clase

### Ce înveți

- când folosești referință ca membru de clasă
- când folosești pointer ca membru de clasă
- diferența dintre obiect obligatoriu existent și obiect opțional

### Ideea din exercițiu

- `HumanA` primește arma prin referință, deci trebuie să existe mereu o armă
- `HumanB` primește arma prin pointer, deci poate să nu aibă armă la început
- `Weapon` are doar un string și poate fi schimbată prin `setType`

### Exerciții mai simple

1. Fă o clasă `Student` care ține o referință la un `Course`.
	- Studentul nu poate exista fără curs.
	- Afișează numele cursului în metodă.

2. Fă o clasă `Player` care ține un pointer la un `Weapon`.
	- La început pointerul este `NULL`.
	- Dacă nu are armă, afișează un mesaj special.
	- Dacă primește armă, afișează tipul ei.

## ex04 - citire și scriere în fișiere, înlocuire de text

### Ce înveți

- cum deschizi un fișier de intrare
- cum creezi un fișier de ieșire
- cum citești tot conținutul într-un `std::string`
- cum înlocuiești toate aparițiile unui text cu alt text

### Ideea din exercițiu

Programul ia un fișier, caută toate aparițiile lui `s1` și le înlocuiește cu `s2`, scriind rezultatul într-un fișier nou cu extensia `.replace`.

### Exerciții mai simple

1. Fă un program care doar citește un fișier și îl afișează în consolă.
	- Nu face nicio înlocuire.
	- Scopul este doar să înțelegi `ifstream`.

2. Fă o funcție care înlocuiește o singură apariție.
	- Caută prima apariție a unui cuvânt.
	- Înlocuiește doar acea apariție.
	- După aceea extinzi la toate aparițiile.

## ex05 - metode private, vector de funcții și selecție după string

### Ce înveți

- cum apelezi metode private printr-o metodă publică
- cum folosești pointeri către metode membre
- cum alegi un comportament în funcție de un text

### Ideea din exercițiu

Clasa `Harl` are mai multe mesaje private: `debug`, `info`, `warning`, `error`. Metoda `complain(level)` caută stringul primit și apelează funcția potrivită.

### Exerciții mai simple

1. Fă o clasă `Greeter` cu 2 metode private: `hello()` și `bye()`.
	- Creează o metodă publică `say(std::string msg)`.
	- Dacă mesajul este `hello`, apelează `hello()`.
	- Dacă mesajul este `bye`, apelează `bye()`.

2. Fă aceeași idee fără pointeri către metode membre.
	- Folosește un `if / else if / else`.
	- După ce merge, treci la varianta cu un tablou de pointeri la funcții.

## Ordine recomandată de învățare

1. ex02 - pointeri și referințe
2. ex00 - obiecte, constructor, destructor, `new` / `delete`
3. ex01 - array de obiecte
4. ex03 - referință vs pointer în clase
5. ex04 - fișiere și string replacement
6. ex05 - selecție de comportament după string

## Ce să poți explica după ce le faci

- ce diferență există între stack și heap
- de ce `delete` și `delete[]` nu sunt la fel
- de ce o referință trebuie inițializată imediat
- de ce un pointer poate fi `NULL`
- cum copiezi și modifici conținutul unui fișier
- cum alegi o metodă în funcție de un string

## Mini-exerciții foarte scurte

### ex00

1. Fă o clasă `Toy` care afișează mesaj la constructor și destructor.
2. Scrie o funcție care creează un `Toy` local și îl face să afișeze un mesaj.

### ex01

1. Creează un array dinamic de 3 obiecte `Toy`.
2. Setează un nume pentru fiecare element și eliberează-l cu `delete[]`.

### ex02

1. Ia un `int`, un pointer și o referință la el.
2. Afișează adresele și valorile, apoi schimbă valoarea prin pointer.

### ex03

1. Fă o clasă cu un obiect păstrat prin referință.
2. Fă o altă clasă cu un pointer care poate fi inițial `NULL`.

### ex04

1. Deschide un fișier și afișează tot conținutul lui.
2. Înlocuiește doar prima apariție a unui cuvânt cu altul.

### ex05

1. Fă o metodă publică ce apelează două metode private în funcție de un string.
2. Înlocuiește `if / else` cu un tablou de pointeri la metode membre.

## Sugestie practică

Pentru fiecare mini-exercițiu, fă întâi varianta cea mai simplă posibilă, fără clase complexe, fără mai multe fișiere și fără Makefile. Abia după ce merge înțelegerea, separă codul în fișiere și construiește versiunea din enunțul original.
