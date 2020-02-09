#include<linux/init.h>
#include<linux/module.h>

int first_module_init(void)
{
	printk(KERN_ALERT "HELLO LINUS\n");
	return 0;
}

void first_module_exit(void)
{
	printk(KERN_ALERT "bye linux\n");
	
}
module_init(first_module_init);
module_exit(first_module_exit);
