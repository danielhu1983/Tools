MODULE=libMySQL.so
CROSS = 
CC = $(CROSS)gcc
CXX = $(CROSS)g++
DEBUG = -g -O2
CFLAGS = $(DEBUG) -Wall -c -fPIC
RM = rm -rf

SRCS = $(wildcard ./*.cc)
OBJS = $(patsubst %.cc, %.o, $(SRCS))

MYSQL_ROOT = /daniel/mysql
HEADER_PATH=-I$(MYSQL_ROOT)/include

TARGETPATH = /daniel/lib

LIBS=-L$(MYSQL_ROOT)/lib -Wl,-R,$(MYSQL_ROOT)/lib -lmysqlclient -lpthread -lm -lrt -lssl -lcrypto -ldl

TARGET = $(TARGETPATH)/$(MODULE)

$(TARGET) : $(OBJS)
	$(CXX) $^ -o $@ $(LIB_PATH) $(LIBS) $(DEBUG) -shared -fPIC

$(OBJS):%.o : %.cc
	$(CXX) $(CFLAGS) $< -o $@ $(HEADER_PATH)
clean:
	$(RM) *.o 
