# the program you want to have, eventually...
PROG=tonc

###------------------------------------------------------------------------###
# for a cleaned up main directory all files will moved to subdirectories
# defined here. I you want to have a mess in your main directory replace
# all these with dots.
SRC=.
OUT=../build
EXE=../exe
INC=.

###------------------------------------------------------------------------###
# we start searching for source code in SRC, you can expand this path also
# to other source directories
vpath % $(SRC)

###------------------------------------------------------------------------###
# put all your sources in this block
OBJS=main.o

###------------------------------------------------------------------------###
# choose your compiler here
OSTYPE=LINUXG

ifeq ($(OSTYPE),LINUXG)
CC=gcc
LINKER=gcc

# compile flags
CFLAGS=-std=c11
# linker flags
LFLAGS=
endif

ifeq ($(OSTYPE),LINUXI)
CC=icc
LINKER=icc

# compile flags
CFLAGS=-std=c11
# linker flags
LFLAGS=
endif

###------------------------------------------------------------------------###
# these targets exist:
.PHONY: all
.PHONY: clean

# this is the first, so it will be made by default
all: $(OUT) $(EXE) $(MOD) $(EXE)/$(PROG)

###------------------------------------------------------------------------###
# put all object files in the subdirectories
SRCS = $(patsubst %,$(OUT)/%,$(OBJS))

# define the rules to actually build them
$(OUT)/%.o: %.c %.h
	@echo "making $@ from $<" && \
	$(CC) $(CFLAGS) -o $@ -c $<

###------------------------------------------------------------------------###
# build everything together
$(EXE)/$(PROG): $(SRCS)
	$(LINKER) $^ $(LFLAGS) -o $@

# clean up, at the right places
clean:
	$(RM) $(OUT)/*.o $(EXE)/$(PROG)

###------------------------------------------------------------------------###
# maybe the build directory is missing, if so we should create it
$(OUT):
	@echo "making a directory for the object files" && mkdir -p $@

# if the output directory is not present, better create one
$(EXE):
	@echo "making a directory for the binaries" && mkdir -p $@

# same for the modules, the source you have to create yourself, unfortunately
$(MOD):
	@echo "making a directory for the modules" && mkdir -p $@
