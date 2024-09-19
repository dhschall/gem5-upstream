

N=2048

CC=aarch64-linux-gnu-g++


all: branch

branch.cpp: branch_gen.py
	python branch_gen.py $N $@

branch: branch.cpp
	$(CC) -o  $@ -g  -static $< -I /mydata/gem5-fdp/include -L /mydata/gem5-fdp/util/m5/build/arm64/out -lm5

clean:
	rm -f branch.cpp
	rm -f branch
