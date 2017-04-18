# set environment variable KDIR
# KDIR = /lib/modules/$(shell uname -r)/build
obj-m += helloworld.o
all:
	make -C $(KDIR) SUBDIRS=$(CURDIR) modules

clean:
	make -C $(KDIR) SUBDIRS=$(CURDIR) clean
