all: objf slib app

# Which compiler
CC = gcc

# Where to install
INSTDIR = /usr/local/bin
MANDIR = /usr/local/man/man1

# Where are the include files kept
INCLUDE = .

# Options for development
CFLAGS = -g -fPIC -lm

# Options for release
# CFLAGS = -O -Wall -ansi

# Local libraries
#MYLIB = libeautifulwork.a

objf: $(SRCS)
	$(CC) $(CFLAGS)  -c  $(SRCS)



slib: 
	gcc -o libeautifulwork.so $(OBJ) -shared  

app: main.c libeautifulwork.so
	gcc -g -o app main.c -L. libeautifulwork.so -leautifulwork -lm


clean:
	rm *.o app

SRCS = poweroftwo.c sdetect.c find-maximum-value.c counting-bits-set.c set-or-clear-bits-without-branching.c lcm.c gcd.c armstrong-number.c prime.c twinprime.c palindrome.c prime-factor.c power.c factorial-of-n.c sum-of-series-of-factorials.c sum-of-n-numbers.c check-odd-even.c biggest-number.c sum-even-odd.c number-divisible-by-five.c swap-values.c binary-to-decimal.c integer-reverse.c  user-authentication.c decimal-to-binary-and-count.c leap-year.c swap-values-xor.c year-week-days.c inventory-store.c  multiplication-bitwise.c project-euler-1.c	

OBJ = poweroftwo.o sdetect.o find-maximum-value.o counting-bits-set.o set-or-clear-bits-without-branching.o lcm.o gcd.o armstrong-number.o prime.o twinprime.o palindrome.o prime-factor.o power.o factorial-of-n.o sum-of-series-of-factorials.o sum-of-n-numbers.o check-odd-even.o biggest-number.o sum-even-odd.o number-divisible-by-five.o swap-values.o binary-to-decimal.o integer-reverse.o user-authentication.o decimal-to-binary-and-count.o leap-year.o swap-values-xor.o year-week-days.o inventory-store.o   multiplication-bitwise.o project-euler-1.o
