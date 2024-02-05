# tbswQsort
ANSI-C bietet den Quicksort-Algorithmus als "eingebaute" Funktion. Leider ist das unter den IEC-Sprachen nicht nutzbar.

Die vorliegende Library dient daher als Wrapper um die C-Funktion ''qsort'', um diese in denIEC-Sprachen nutzen zu können

## Funktionen
Die Library beinhaltet 2 Funktionen:
### Sortieren von Strings
<code>UINT qsort_str(UDINT pStrings, UDINT len, UDINT count)</code>
* pStrings: Adresse des zu sortierenden Stringfeldes
* len: Länge eines Strings im Stringfeld
* count: Anzahl der zu sortierenden Strings
Der Rückgabewert ist derzeit immer 0

Die Strings werden in ASCII-aufsteigender Folge sortiert

 ### Sortieren von Ganzzahlen
<code>UINT qsort_int(UDINT pIntArray, UDINT count)</code>
* pIntArray: Adresse des zu sortierenden INT-Arrays
* count: Anzahl der zu sortierenden Zahlen
Der Rückgabewert ist derzeit immer 0

## Anmerkung
Die Funktionen sortieren in einem Durchlauf das gesamte übergebene Array. Daher ist besonders bei großen Feldern darauf zu achten, dass die Funktion in einer niederprioren Taskklasse läuft, idealerweise in TC#8.
