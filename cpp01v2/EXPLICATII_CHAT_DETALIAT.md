# Explicații detaliate din chat până la testele pentru ex04

## ex00 - Zombies pe stack și pe heap

### Ce face exercițiul

Exercițiul arată diferența dintre un obiect creat automat și unul creat dinamic.

### Cum funcționează codul

1. În `main`, se definește un nume pentru zombie.
2. Se apelează `randomChump(name)`.
3. În `randomChump`, se creează un obiect `Zombie` local.
4. Pentru că obiectul este local, el este creat pe stack.
5. Se apelează `announce()`, iar zombie-ul afișează mesajul lui.
6. Când funcția se termină, obiectul dispare automat.
7. Apoi se apelează `newZombie(name)`.
8. În `newZombie`, zombie-ul este creat cu `new`.
9. Asta înseamnă că obiectul este alocat pe heap.
10. Funcția returnează un pointer către acel obiect.
11. În `main`, se apelează `announce()` pe pointerul primit.
12. La final, se folosește `delete` ca să elibereze memoria.

### Ideea importantă

- Stack: obiectul se distruge automat.
- Heap: obiectul trebuie distrus manual cu `delete`.

### Concluzie

Exercițiul te învață să vezi clar diferența dintre viața unui obiect local și viața unui obiect alocat dinamic.

## ex01 - Horda de zombi

### Ce face exercițiul

Exercițiul creează un array de zombi pe heap.

### Cum funcționează codul

1. În `main`, se definește un nume, de exemplu `Zorro`.
2. Se apelează `zombieHorde(4, name)`.
3. În `zombieHorde`, se creează un array de 4 zombi cu `new Zombie[N]`.
4. Fiecare element din array este construit cu constructorul default.
5. După aceea, se parcurge array-ul cu un `for`.
6. Fiecărui zombie i se setează numele cu `setName(name)`.
7. Funcția returnează pointerul către începutul array-ului.
8. În `main`, se încearcă afișarea zombie-ilor.
9. La final, se eliberează array-ul cu `delete[]`.

### Ideea importantă

- Dacă folosești `new[]`, trebuie să folosești `delete[]`.
- Dacă eliberezi greșit memoria, apar probleme.

### Observație despre afișare

În varianta discutată, se folosea `zzz->announce()` într-o buclă.

1. `zzz` pointează la primul element din array.
2. `zzz->announce()` apelează mereu primul zombie.
3. Dacă vrei să afișezi toți zombii, trebuie folosit `zzz[i].announce()`.

### Concluzie

Exercițiul arată cum se creează și cum se distruge corect un array de obiecte alocate dinamic.

## ex02 - Pointer și referință

### Ce face exercițiul

Exercițiul compară aceeași valoare accesată în trei moduri diferite:

- direct
- prin pointer
- prin referință

### Cum funcționează codul

1. Se creează un string numit `str`.
2. Se creează un pointer `stringPTR` care reține adresa lui `str`.
3. Se creează o referință `stringREF` la `str`.
4. Se afișează adresa lui `str`.
5. Se afișează adresa stocată în pointer.
6. Se afișează adresa referinței.
7. Se afișează valoarea lui `str`.
8. Se afișează valoarea la care pointează pointerul.
9. Se afișează valoarea referinței.

### Ce trebuie observat

- `stringPTR` stochează o adresă.
- `stringREF` este un alias pentru obiectul original.
- O referință nu este o copie.
- Pointerul trebuie dereferențiat cu `*` ca să ajungi la valoare.

### Concluzie

Exercițiul arată că pointerul și referința duc către același obiect, dar sunt folosite diferit.

## ex03 - Weapon, HumanA și HumanB

### Ce face exercițiul

Exercițiul compară două moduri de a păstra o armă într-o clasă:

- prin referință
- prin pointer

### Clasa Weapon

1. Clasa `Weapon` păstrează tipul armei.
2. Constructorul primește tipul armei.
3. `getType()` returnează tipul curent.
4. `setType()` schimbă tipul armei.

### Clasa HumanA

1. `HumanA` are un nume și o armă.
2. În clasă, arma este stocată ca referință.
3. Asta înseamnă că trebuie inițializată direct în constructor.
4. `HumanA` nu poate exista fără armă.
5. Când apelezi `attack()`, se afișează numele și tipul armei.

### Clasa HumanB

1. `HumanB` are un nume și un pointer la armă.
2. Arma poate fi inițial `NULL`.
3. Se poate seta mai târziu cu `setWeapon()`.
4. `attack()` verifică dacă arma există.
5. Dacă arma există, afișează mesajul de atac.
6. Dacă nu există, afișează că nu are armă.

### Ce face main

1. Se creează un obiect `Weapon`.
2. Se creează `Bob` cu referință la armă.
3. `Bob` atacă.
4. Tipul armei se schimbă.
5. `Bob` atacă din nou și vede noul tip.
6. Se creează `Jim` fără armă.
7. I se setează arma ulterior.
8. `Jim` atacă.
9. Tipul armei se schimbă din nou.
10. `Jim` atacă iar și vede schimbarea.

### Ideea importantă

- Referința obligă obiectul să aibă armă de la început.
- Pointerul permite ca arma să lipsească inițial.

### Concluzie

Exercițiul arată diferența practică dintre referință și pointer în design-ul claselor.

## ex05 - Harl și pointerii la metode membre

### Ce face exercițiul

Clasa `Harl` are mai multe mesaje, iar `complain()` alege mesajul corect în funcție de nivelul primit.

### Metodele din clasă

1. `debug()` afișează mesajul pentru nivelul DEBUG.
2. `info()` afișează mesajul pentru nivelul INFO.
3. `warning()` afișează mesajul pentru nivelul WARNING.
4. `error()` afișează mesajul pentru nivelul ERROR.

### Cum funcționează complain

1. `complain(level)` primește un string.
2. Se creează un array cu nivelurile posibile.
3. Se creează un array cu pointeri la metodele membre.
4. Cele două array-uri sunt în aceeași ordine.
5. Se parcurge lista de niveluri cu un `for`.
6. Când nivelul primit se potrivește, se apelează metoda corespunzătoare.
7. Dacă nu există potrivire, nu se afișează nimic.

### Sintaxa importantă

`(this->*functions[i])();`

Pas cu pas:

1. `functions[i]` este un pointer la o metodă din clasa `Harl`.
2. `this` este obiectul curent.
3. `->*` leagă pointerul la metodă de obiect.
4. `()` execută metoda aleasă.

### Concluzie

Exercițiul arată cum poți alege o metodă dintr-un tabel, fără să scrii multe `if` sau `else`.

## ex04 - Programul replace și testele create ulterior

### Ce face programul

Programul citește un fișier și înlocuiește toate aparițiile lui `s1` cu `s2`.

### Cum funcționează pas cu pas

1. Programul verifică dacă numărul de argumente este corect.
2. Dacă nu este corect, afișează mesajul de usage.
3. Programul verifică dacă `s1` este gol.
4. Dacă `s1` este gol, afișează eroare.
5. Programul încearcă să deschidă fișierul de intrare.
6. Dacă fișierul nu poate fi deschis, afișează eroare.
7. Dacă fișierul s-a deschis corect, citește tot conținutul.
8. Parcurge textul și construiește un rezultat nou.
9. Înlocuiește toate aparițiile lui `s1` cu `s2`.
10. Scrie rezultatul într-un fișier nou cu sufixul `.replace`.

### Ideea importantă

- Dacă `s1` nu există în text, conținutul rămâne același.
- Înlocuirile se fac fără suprapunere.
- Programul nu modifică fișierul original.

### Testele create ulterior

După explicația despre program, a fost creat un fișier `TESTS.md`.

În acel fișier au fost adăugate:

1. comenzi pentru build și run
2. comenzi pentru crearea fișierelor de test
3. teste pozitive scrise ca secvențe de terminal
4. teste de eroare scrise ca secvențe de terminal
5. comenzi pentru curățarea fișierelor `.replace`

### Fișierele de test create prin comenzi

1. `test.txt`
2. `empty.txt`
3. `file.txt`

## Concluzie generală

Acest fișier conține o variantă mai detaliată, pas cu pas, a explicațiilor discutate în chat până la momentul în care au fost create testele pentru ex04.