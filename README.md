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

