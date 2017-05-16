
.SUFFIXES:	.o .c .cpp .cc .C .a

RM = -rm

.cpp.o:	
	$(C++) $(CCFLAGS) $*.cpp


#############################################################

C++        = g++
CCFLAGS    = -c -Iinclude


VPATH   = Obj

OBJECTS1 = codigo1.o

default: codigo1

codigo1: $(OBJECTS1) 
	-mv $(OBJECTS1) Obj
	cd Obj ; $(C++) -o ../codigo1 $(OBJECTS1) -lglut -lGL -lGLEW -lGLU; cd .

clean:
	$(RM) $(VPATH)/*.o codigo1
 

