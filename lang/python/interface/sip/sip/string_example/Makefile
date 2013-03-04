SIP=/usr/bin/sip

all: sip

sipcode:
	mkdir sipcode
	cp sipcode-Makefile sipcode/Makefile

sip: sipcode $(OBJS)
	$(SIP) -s ".cc" -c sipcode string.sip
	cd sipcode && make

clean:
	rm -rf sipcode
