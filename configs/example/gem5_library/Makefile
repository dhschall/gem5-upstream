

N=1000

CC=aarch64-linux-gnu-g++


all: branch

#branch.cpp: branch_gen.py
#	python branch_gen.py $N $@

branch: branch.cpp
	$(CC) -o  $@ -g -static $<

clean:
	rm -f branch.cpp
	rm -f branch
