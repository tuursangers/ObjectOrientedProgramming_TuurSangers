/*

//////////  NOTES & FEEDBACK  //////////

Object slice - wanneer je een function(Baseclass) gevraagt wordt,
haalt ie alle nieuwe dhit(childclass) weg.

Munt
-float value
-str naam

//value munt in class zetten
//koffiemunt value=0

koffieautomaat:
insertCoin(muntgeld) - niet herkend
insertCoint(1euro) - value +100
insertCoint(Cent50) - value +50
insertCoin(koffiemunt) - doet dingen zonder value

//////////////////////

FUNCTIES MET KLEINE LETTER

//////////  LES 4  //////////
IO Streams
-character IO streams 
	cin cout cerr[error] (clog)
-file-io streams
	-

Cout & Cin - standaard geimplementeerd

////
ifstream - uit lezen
std::ifstream in_stream;
in_stream.open("Cvolleidge/locatie/file.txt");

if(!ins_stream){
	std::cout << "probleem openen";
	exit(1);  ///0 - was geen probleem | 1 - foutmelding 
}

char ch
in_stream ......

////////

stream operators
>> get (extraction)
<< put (insertion)

<< (is hetzelfde als) ostream::put()

//////

maak een programmatje dat een file opent en daar dingen mee doet

*/