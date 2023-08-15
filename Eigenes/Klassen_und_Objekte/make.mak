mainAccount.exe: mainAccount.cpp Account.o Account.h
    g++ mainAccount.exe mainAccount.cpp Account.o
Account.o: Account.cpp 
    g++ -c Account.cpp
clean:
    del *.o,*.a,*.exe