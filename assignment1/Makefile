# set environment variable KDIR

ifndef KDIR
    KDIR = /lib/modules/$(shell uname -r)/build
endif

obj-m += helloworld.o
all:
	make -C $(KDIR) SUBDIRS=$(CURDIR) modules

clean:
	make -C $(KDIR) SUBDIRS=$(CURDIR) clean
