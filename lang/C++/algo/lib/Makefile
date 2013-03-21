all: clean ClientData667

lib:
	$(CXX) -c ClientData667.cpp -o ClientData667.o 
	$(AR) cr libmydemo.a ClientData667.o 

ClientData667: lib
	$(CXX) ClientData667.cpp ClientData667_main.cpp -o ClientData667	# OK BUT WITHOUT A LIB 
	#$(CXX) libmydemo.a ClientData667_main.cpp -o ClientData667			# NOK, WRONG ORDER!
	$(CXX) ClientData667_main.cpp libmydemo.a -o ClientData667			# OK, 
	#$(CXX) -L. -lmydemo ClientData667_main.cpp -o ClientData667		# NOK, C SYNTAX BUT WRONG ORDER
	$(CXX) ClientData667_main.cpp -L. -lmydemo -o ClientData667			# OK, C SYNTAX!

clean:
	rm -f ClientData667 credit.dat
