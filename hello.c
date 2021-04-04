#include<linux/init.h>
#include<linux/module.h>
//the entry point
int hello_init(void){
	printk (KERN_ALERT "TEST: Hello class, this is team 1\n");//kept in th elog file, it will be displayed in the console later on
	return 0;
}
void hello_exit(void){
	printk(KERN_ALERT "TEST: Good bye, from team 1");
}

module_init(hello_init);
module_exit(hello_exit);
