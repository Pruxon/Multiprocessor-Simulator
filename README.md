# Multiprocessor-Simulator
Jan Prugarewicz
Projekt 3- Dokumentacja
Temat projektu:
Prosty system wieloprocesorowy, o następujących założeniach:
•	System może zawierać dowolną liczbę procesorów
•	Z procesorem są związane operacje, jakie może on wykonywać i np. czas potrzebny do ich wykonania
•	System może realizować kilka zadać jednocześnie. Zadania są definiowane, jako ciąg operacji dwuargumentowych
•	Symulacja może polegać np. na przedstawieniu czasu wykonywania poszczególnych zadań i listy procesorów zaangażowanych do ich wykonania
Założenia projektu:
Zasymulowanie systemu wieloprocesorowego poprzez rozdzielanie zadań i symulację wykonywania ich równocześnie. 


Opis:
Program symuluje działanie systemu wieloprocesorowego. Użytkownik może podłączyć, odłączyć procesory, po podłączeniu procesora, może używać jego funkcji. Funkcje składowane są w wektorze poleceń, po czym po uruchomieniu są wykonywane jednocześnie, w zależności od tego, czy dany procesor jest „wolny”. W razie pomyłki, można polecenie usunąć. Użytkownik ma możliwość zaprogramowania swojej funkcji na podstawie dostępnych w programie i używania jej.
Program w razie błędu obsługuje mechanizm wyjątków (np. gdy użytkownik chciałby podzielić przez 0).
Podejście do projektu:
Do składowania danych używam <vector>.
Jako wynik program wyświetla funkcję, argumenty, wynik, czas oraz numer procesora, który to wykonał.
Program wykorzystuje mechanizm dziedziczenia, aby zmniejszyć rozmiar kodu oraz biblioteki <cmath>, <iostream>, <string>, <sstream>.




