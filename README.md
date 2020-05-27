# ObjektinisProgramavimas

# Release v0.1
Application objektinis1Uzd.cpp is the vector implementation of the project.

Application reads user input as Student names, surnames, homework and exam results, then calculates the final mark with both the medians and averages. Student marks can be generated randomly.

# Release v0.2
Added data reading from file. The output is now sorted.

# Release v0.3
Added the header file, splitted the program in two .cpp files - one for functions and struct object, and the other for main.

# Release v0.4
Added the ability to randomly generate input files. The result is now split into good students and bad ones. Run time in now being monitored for each function.

# Release v0.5
Added the deque implementation of the program and tested how the program behaves to more input in terms of runtime.
# Testavimo kompiuteris : <br/>
  CPU - i7-8750H
  RAM - 16Gb DDR4-2666Mhz Dual Channel
  Storage - Toshiba XG5 512Gb SSD
  <br/>
# Testavimo rezultatai (Vector) <br/>

Studentų skaičius : 1000<br/>
Namų darbų skaičius : 5<br/>
  Generavimas: 132ms<br/>
  Skaitymas: 57ms<br/>
  Vidurkių skaičiavimas: 0ms<br/>
  Medianų skaičiavimas: 1ms<br/>
  Rušiavimas(std::sort): 11 ms<br/>
  Rušiavimas į kietekus ir lievakus: 3ms<br/>
  Rašymas: 18ms<br/>
  <br/>
Studentų skaičius : 10000<br/>
Namų darbų skaičius : 5<br/>
  Generavimas: 102ms<br/>
  Skaitymas: 368ms<br/>
  Vidurkių skaičiavimas: 1ms<br/>
  Medianų skaičiavimas: 6ms<br/>
  Rušiavimas(std::sort): 95 ms<br/>
  Rušiavimas į kietekus ir lievakus: 15ms<br/>
  Rašymas: 79ms<br/>
  <br/>
Studentų skaičius : 100000<br/>
Namų darbų skaičius : 5<br/>
  Generavimas: 704ms<br/>
  Skaitymas: 4920ms<br/>
  Vidurkių skaičiavimas: 18ms<br/>
  Medianų skaičiavimas: 111ms<br/>
  Rušiavimas(std::sort): 2014ms<br/>
  Rušiavimas į kietekus ir lievakus: 231ms<br/>
  Rašymas: 1153ms<br/>
  <br/>
Studentų skaičius : 1000000<br/>
Namų darbų skaičius : 5<br/>
  Generavimas: 6375ms<br/>
  Skaitymas: 54199ms<br/>
  Vidurkių skaičiavimas: 143ms<br/>
  Medianų skaičiavimas: 1113ms<br/>
  Rušiavimas(std::sort): 23558ms<br/>
  Rušiavimas į kietekus ir lievakus: 2504ms<br/>
  Rašymas: 13166ms<br/>
<br/>
<br/>
# Testavimo rezultatai (Deque)

Studentų skaičius : 1000<br/>
Namų darbų skaičius : 5<br/>
  Generavimas: 25ms<br/>
  Skaitymas: 34ms<br/>
  Vidurkių skaičiavimas: 1ms<br/>
  Medianų skaičiavimas: 8ms<br/>
  Rušiavimas(std::sort): 10 ms<br/>
  Rušiavimas į kietekus ir lievakus: 2ms<br/>
  Rašymas: 9ms<br/>
  <br/>
Studentų skaičius : 10000<br/>
Namų darbų skaičius : 5<br/>
  Generavimas: 142ms<br/>
  Skaitymas: 267ms<br/>
  Vidurkių skaičiavimas: 11ms<br/>
  Medianų skaičiavimas: 74ms<br/>
  Rušiavimas(std::sort): 114 ms<br/>
  Rušiavimas į kietekus ir lievakus: 17ms<br/>
  Rašymas: 75ms<br/>
  <br/>
Studentų skaičius : 100000<br/>
Namų darbų skaičius : 5<br/>
  Generavimas: 651ms<br/>
  Skaitymas: 4080ms<br/>
  Vidurkių skaičiavimas: 234ms<br/>
  Medianų skaičiavimas: 1466ms<br/>
  Rušiavimas(std::sort): 2718ms<br/>
  Rušiavimas į kietekus ir lievakus: 202ms<br/>
  Rašymas: 1396ms<br/>
  <br/>
Studentų skaičius : 1000000<br/>
Namų darbų skaičius : 5<br/>
  Generavimas: 8369ms<br/>
  Skaitymas: 53374ms<br/>
  Vidurkių skaičiavimas: 2306ms<br/>
  Medianų skaičiavimas: 14148ms<br/>
  Rušiavimas(std::sort): 33068ms<br/>
  Rušiavimas į kietekus ir lievakus: 3320ms<br/>
  Rašymas: 13470ms<br/>
<br/>



# Release v1.0
Added implementations of two strategies and compared the runtimes.

# Naudojimosi instrukcija : <br/>
  Failai be priedo "vec" yra skirti programos implementacijai su deku.<br/>
  Failai su priedu "vec" yra skirti programos implementacijai su vektoriais.<br/>
  Failai be priedo "2" yra skirti programos implementacijai su Strategija A.<br/>
  Failai su priedu "2" yra skirti programos implementacijai su Strategija B.<br/>
  <br/>
  Norint pasileisti: <br/>
    Atsidarius makefile failą reikia pakoreguoti failus kuriuos naudojite antroje eilutėje.
    Pavyzdys : g++ -std=c++17 -o main main_vec_2.cpp func_vec_2.cpp <br/>
    Šitaip sukonfiguruotas makefile paleis programa naudojant vektorių ir strategijos B implementaciją.
  <br/>
  <br/>
# Testavimo kompiuteris : <br/>
  CPU - i7-8750H
  RAM - 16Gb DDR4-2666Mhz Dual Channel
  Storage - Toshiba XG5 512Gb SSD
  <br/>
# Testavimo rezultatai (Vector)(A) <br/>

Studentų skaičius : 100000<br/>
Namų darbų skaičius : 5<br/>
  Generavimas: 704ms<br/>
  Skaitymas: 4920ms<br/>
  Vidurkių skaičiavimas: 18ms<br/>
  Medianų skaičiavimas: 111ms<br/>
  Rušiavimas(std::sort): 2014ms<br/>
  Rušiavimas į kietekus ir lievakus: 231ms<br/>
  Rašymas: 1153ms<br/>
  <br/>
<br/>
# Testavimo rezultatai (Vector)(B) <br/>

Studentų skaičius : 100000<br/>
Namų darbų skaičius : 5<br/>
  Generavimas: 704ms<br/>
  Skaitymas: 4920ms<br/>
  Vidurkių skaičiavimas: 18ms<br/>
  Medianų skaičiavimas: 111ms<br/>
  Rušiavimas(std::sort): 2014ms<br/>
  Rušiavimas į kietekus ir lievakus: 936977ms<br/>
  Rašymas: 1153ms<br/>
  <br/>
<br/>
# Testavimo rezultatai (Deque)(A)

Studentų skaičius : 100000<br/>
Namų darbų skaičius : 5<br/>
  Generavimas: 651ms<br/>
  Skaitymas: 4080ms<br/>
  Vidurkių skaičiavimas: 234ms<br/>
  Medianų skaičiavimas: 1466ms<br/>
  Rušiavimas(std::sort): 2718ms<br/>
  Rušiavimas į kietekus ir lievakus: 202ms<br/>
  Rašymas: 1396ms<br/>
  <br/>
<br/>

# Testavimo rezultatai (Deque)(B)

Studentų skaičius : 100000<br/>
Namų darbų skaičius : 5<br/>
  Generavimas: 651ms<br/>
  Skaitymas: 4080ms<br/>
  Vidurkių skaičiavimas: 234ms<br/>
  Medianų skaičiavimas: 1466ms<br/>
  Rušiavimas(std::sort): 2718ms<br/>
  Rušiavimas į kietekus ir lievakus: 402809ms<br/>
  Rašymas: 1396ms<br/>
  <br/>
<br/>



# Release v1.1
The code has been rewritten to support classes instead of structures.

Compared the runtimes of using structs and using classes and different O flags.

# Testavimo rezultatai (Struct) <br/>

Studentų skaičius : 100000<br/>
Namų darbų skaičius : 5<br/>
  Generavimas: 704ms<br/>
  Skaitymas: 4920ms<br/>
  Vidurkių skaičiavimas: 18ms<br/>
  Medianų skaičiavimas: 111ms<br/>
  Rušiavimas(std::sort): 2014ms<br/>
  Rušiavimas į kietekus ir lievakus: 231ms<br/>
  Rašymas: 1153ms<br/>
  <br/>
<br/>
Studentų skaičius : 1000000<br/>
Namų darbų skaičius : 5<br/>
  Generavimas: 6375ms<br/>
  Skaitymas: 54199ms<br/>
  Vidurkių skaičiavimas: 143ms<br/>
  Medianų skaičiavimas: 1113ms<br/>
  Rušiavimas(std::sort): 23558ms<br/>
  Rušiavimas į kietekus ir lievakus: 2504ms<br/>
  Rašymas: 13166ms<br/>
<br/>

# Testavimo rezultatai (Class) <br/>

Studentų skaičius : 100000<br/>
Namų darbų skaičius : 5<br/>
  Generavimas: 580ms<br/>
  Skaitymas: 3072ms<br/>
  Vidurkių skaičiavimas: 18ms<br/>
  Medianų skaičiavimas: 65ms<br/>
  Rušiavimas(std::sort): 1197ms<br/>
  Rušiavimas į kietekus ir lievakus: 142ms<br/>
  Rašymas: 739ms<br/>
  <br/>
<br/>
Studentų skaičius : 1000000<br/>
Namų darbų skaičius : 5<br/>
  Generavimas: 5924ms<br/>
  Skaitymas: 52681ms<br/>
  Vidurkių skaičiavimas: 181ms<br/>
  Medianų skaičiavimas: 1124ms<br/>
  Rušiavimas(std::sort): 16794ms<br/>
  Rušiavimas į kietekus ir lievakus: 1297ms<br/>
  Rašymas: 12321ms<br/>
<br/>
<br/>
<br/>
# -O Flag'u testavimo rezultatai (Class) <br/>
  Flag'as : DEFAULT<br/>
  Studentų skaičius : 1000000<br/>
  Namų darbų skaičius : 5<br/>
    Generavimas: 5924ms<br/>
    Skaitymas: 52681ms<br/>
    Vidurkių skaičiavimas: 181ms<br/>
    Medianų skaičiavimas: 1124ms<br/>
    Rušiavimas(std::sort): 16794ms<br/>
    Rušiavimas į kietekus ir lievakus: 1297ms<br/>
    Rašymas: 12321ms<br/>
<br/>
<br/>
  Flag'as : O1<br/>
  Studentų skaičius : 1000000<br/>
  Namų darbų skaičius : 5<br/>
    Generavimas: 7183ms<br/>
    Skaitymas: 48585ms<br/>
    Vidurkių skaičiavimas: 41ms<br/>
    Medianų skaičiavimas: 177ms<br/>
    Rušiavimas(std::sort): 2689ms<br/>
    Rušiavimas į kietekus ir lievakus: 601ms<br/>
    Rašymas: 12361ms<br/>
<br/>
<br/>
  Flag'as : O2<br/>
  Studentų skaičius : 1000000<br/>
  Namų darbų skaičius : 5<br/>
    Generavimas: 8699ms<br/>
    Skaitymas: 48375ms<br/>
    Vidurkių skaičiavimas: 21ms<br/>
    Medianų skaičiavimas: 156ms<br/>
    Rušiavimas(std::sort): 2727ms<br/>
    Rušiavimas į kietekus ir lievakus: 595ms<br/>
    Rašymas: 12661ms<br/>
<br/>
<br/>
  Flag'as : O3<br/>
  Studentų skaičius : 1000000<br/>
  Namų darbų skaičius : 5<br/>
    Generavimas: 8219ms<br/>
    Skaitymas: 48359ms<br/>
    Vidurkių skaičiavimas: 21ms<br/>
    Medianų skaičiavimas: 155ms<br/>
    Rušiavimas(std::sort): 2724ms<br/>
    Rušiavimas į kietekus ir lievakus: 592ms<br/>
    Rašymas: 12387ms<br/>
<br/>
<br/>


# Struct changet to Class

Comparing those three programs:
Vector:
1000:
nuskaitymas: 9.88362 ms
nuskaitymas class: 9.78208 ms
rusiavimas: 38.0968 ms
rusiavimas class: 38.5048 ms

10000:
nuskaitymas: 83.853 ms
nuskaitymas class: 80.4708 ms
rusiavimas: 3301.62 ms
rusiavimas class: 3322.8 ms

-----------------------------

List:
1000:
nuskaitymas: 8.74101 ms
nuskaitymas class: 6.41533 ms
rusiavimas: 3.20756 ms
rusiavimas class: 2.24833 ms

10000:
nuskaitymas: 64.9942 ms
nuskaitymas class: 73.2753 ms
rusiavimas: 297.288 ms
rusiavimas class: 312.394 ms


-----------------------------

Deque:
1000:
nuskaitymas: 12.4846 ms
nuskaitymas class: 12.9323 ms
rusiavimas: 28.0806 ms
rusiavimas class: 27.1918 ms

10000:
nuskaitymas: 118.204 ms
nuskaitymas class: 110.323 ms
rusiavimas: 2466.91 ms
rusiavimas class: 2470.75 ms

# Release v1.2
Custom "<<" operator added. This allowed me to rewrite all of the output functions to be clearer and more concise.

# Release v1.5
Added main class Zmogus and changed classes in a way that Mokinys class is now derived.

# Release v2.0
Added Doxygen documentation under Documentation folder.

Updated the README.md

# How to run the program
1. Clone project [Objektinis Programavimas [master]](https://github.com/VytenisDom/ObjektinisProgramavimas/tree/master) to your computer.
2. Open up the downloaded folder.
2. Open BASH or ZSHELL console terminal inside the folder.
4. Run `make`.
5. Run the program by `make run`.
6. Use the UI to complete different tasks and compare runtimes.
