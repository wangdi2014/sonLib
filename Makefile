include ../../include.mk
binPath = ../../bin
libPath = ../../lib

all : cP

cP:
	cd C && make all
	
clean :
	cd C && make clean

test :
	python allTests.py --testLength=SHORT --logDebug
