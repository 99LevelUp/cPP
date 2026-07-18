# Explicații din chat până la testele pentru ex04

## ex00 - Zombies pe stack și pe heap

În ex00, programul arată diferența dintre un obiect creat pe stack și unul creat pe heap.

- `randomChump(name)` creează un `Zombie` local.
- Obiectul este creat pe stack și este distrus automat când funcția se termină.
- `newZombie(name)` creează un `Zombie` cu `new`.
- Obiectul este creat pe heap și trebuie eliberat manual cu `delete`.
- `announce()` afișează numele zombie-ului și mesajul lui.

Ideea principală:
- stack = distrugere automată
- heap = distrugere manuală

## ex01 - Horda de zombi

În ex01, programul creează un array de zombi cu `new Zombie[N]`.

- `zombieHorde(N, name)` alocă un array de `N` zombi pe heap.
- Fiecare zombie primește același nume cu `setName(name)`.
- Funcția returnează pointerul către primul element din array.
- În `main`, array-ul trebuie eliberat cu `delete[]`.

Diferența importantă:
- dacă ai folosit `new[]`, trebuie să folosești `delete[]`

Observație practică:
- dacă afișezi `zzz->announce()` într-o buclă, vei apela mereu primul zombie.
- pentru toți zombii, trebuie folosit `zzz[i].announce()`.

## ex02 - Pointer și referință

În ex02, programul compară un string normal, un pointer și o referință.

- `str` este string-ul original.
- `stringPTR` stochează adresa lui `str`.
- `stringREF` este o referință la `str`.

Ce se afișează:
- `&str` și `&stringREF` sunt aceeași adresă.
- `stringPTR` afișează adresa lui `str`.
- `*stringPTR` afișează valoarea lui `str`.
- `stringREF` afișează direct valoarea lui `str`.

Diferența pe scurt:
- pointer = variabilă care ține o adresă
- referință = alt nume pentru același obiect

## ex03 - Weapon, HumanA și HumanB

În ex03, exercițiul arată diferența dintre a păstra o armă prin referință și prin pointer.

### Weapon

Clasa `Weapon` stochează tipul armei.

- are constructor cu tip
- `getType()` returnează tipul
- `setType()` schimbă tipul

### HumanA

`HumanA` păstrează arma ca referință.

- în clasa `HumanA`, membrul `weapon` este `Weapon&`
- trebuie inițializat direct în constructor
- `HumanA` nu poate exista fără armă
- `attack()` afișează numele și tipul armei

### HumanB

`HumanB` păstrează arma ca pointer.

- în clasa `HumanB`, membrul `weapon` este `Weapon*`
- poate fi `NULL` la început
- arma i se poate seta mai târziu cu `setWeapon()`
- `attack()` verifică dacă arma există
- dacă nu există armă, afișează că nu are armă

### Ce face main

- creează o armă
- creează `Bob` cu referință la armă
- `Bob` atacă
- se schimbă tipul armei
- `Bob` atacă din nou și vede noul tip
- creează `Jim` fără armă
- îi setează arma ulterior
- `Jim` atacă
- după schimbarea tipului, și `Jim` vede noul tip

Ideea principală:
- referința obligă obiectul să aibă armă de la început
- pointerul permite ca arma să lipsească inițial

## ex05 - Harl și pointerii la metode membre

În ex05, clasa `Harl` are mai multe metode private care afișează mesaje diferite.

- `debug()`
- `info()`
- `warning()`
- `error()`

Metoda publică `complain(level)` primește un string și alege ce metodă să apeleze.

Cum funcționează:
- se creează un array cu nivelurile posibile
- se creează un array cu pointeri la metodele membre
- se caută nivelul primit
- când apare potrivirea, se apelează metoda corespunzătoare

Sintaxa importantă:
- `(this->*functions[i])();`

Asta înseamnă:
- `functions[i]` este un pointer la o metodă din `Harl`
- `this` este obiectul curent
- `->*` leagă metoda de obiect
- `()` execută metoda

Ideea exercițiului:
- alegerea metodei se face dintr-un tabel
- nu sunt necesare multe `if/else`
- se învață folosirea pointerilor la metode membre

## ex04 - Programul replace și testele create ulterior

În ex04, programul citește un fișier și înlocuiește toate aparițiile lui `s1` cu `s2`.

- dacă numărul de argumente este greșit, afișează mesaj de usage
- dacă `s1` este gol, afișează eroare
- dacă fișierul nu poate fi deschis, afișează eroare
- dacă totul este valid, citește conținutul și scrie într-un fișier nou cu sufixul `.replace`

Funcția de înlocuire parcurge textul și construiește un rezultat nou fără suprapuneri.

### Testele pentru ex04

După explicația despre program, a fost creat și un fișier `TESTS.md` pentru testare.

În acel fișier au fost adăugate:
- comenzi pentru build și run
- comenzi pentru crearea fișierelor de test
- teste pozitive cu comenzi de terminal
- teste de eroare cu comenzi de terminal
- comenzi pentru curățarea fișierelor `.replace`

Fișierele de test create prin comenzi au fost:
- `test.txt`
- `empty.txt`
- `file.txt`

## Observație finală

Acest fișier rezumă explicațiile date în chat până la momentul în care au fost create testele pentru ex04.
