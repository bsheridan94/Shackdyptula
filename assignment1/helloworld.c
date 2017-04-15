/*
 * Assignment #1
 * Hello Wolrd Module
*/

#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>


static int hello_init(void)
{
	printk(KERN_ALERT "Hello World!\r\n");
	return 0;
}

static void hello_exit(void)
{
	printk(KERN_ALERT "Hello World has been unloaded\r\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Brian Sheridan");
MODULE_DESCRIPTION("SHACKDYPTULA ASSIGNMENT #1");

