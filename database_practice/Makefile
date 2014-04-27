CXX := g++
CXXFLAGS := -I/usr/include/mysql -I/usr/local/include/mysql++
LDFLAGS := -L/local/lib -L/usr/lib -lmysqlclient -lmysqlpp -lnsl -lz -lm

EXECUTABLE := main
all: 
	$(CXX) $(CXXFLAGS) test.cpp -o test $(LDFLAGS)

  

clean:
	rm -f $(EXECUTABLE) *.o