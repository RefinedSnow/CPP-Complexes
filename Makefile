CC       = g++
LINKER   = g++ -o
rm       = del

SRCDIR   = src
OBJDIR   = obj
BINDIR   = bin
INCDIR   = include

CFLAGS   = -W -Wall -I. -I$(INCDIR) 
LFLAGS   = -W -Wall -I. -I$(INCDIR) -lm

all: $(BINDIR)/complexe

$(BINDIR)/complexe: $(OBJDIR)/Main.o $(OBJDIR)/Complexe.o $(OBJDIR)/complexes.o
	$(CC) $(LFLAGS) $^ -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compile $< OK"

.PHONY: clean
clean:
	@$(rm) $(OBJDIR)/*
	@echo "cleaned $(OBJDIR)/"

.PHONY: distclean
distclean: clean
	@$(rm) $(BINDIR)/*
	@echo "cleaned $(BINDIR)/"
