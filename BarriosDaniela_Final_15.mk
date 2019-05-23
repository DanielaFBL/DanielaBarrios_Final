plot.png:datos.dat plot.py
  python plot.py

%.dat : a.out
	./a.out 

a.out: DanielaBarrios_Final.cpp
	g++ DanielaBarrios_Final.cpp
  
  
clean:
	rm -rf a.out datos.dat *.png *~
