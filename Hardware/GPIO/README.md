# Accessing via IO Address Space
## Access PCIE Configuration Space
We can access PCIE configuration Space indirectly from registers PCI CONFIG_ADDRESS and PCI CONFIG_DATA in IO address space. Please refer to [PCI configuration space](https://en.wikipedia.org/wiki/PCI_configuration_space).


# References
1. [Accessing Intel ICH/PCH GPIOs](https://lab.whitequark.org/notes/2017-11-08/accessing-intel-ich-pch-gpios/)
2. [ROBUST C LIBRARY AND UTILITY FOR GPIO SYSFS INTERFACE IN LINUX](http://www.electronics-lab.com/robust-c-library-utility-gpio-sysfs-interface-linux/)
3. [GPIO Sysfs Interface for Userspace](https://www.kernel.org/doc/Documentation/gpio/sysfs.txt)
4. [The platform device API](https://lwn.net/Articles/448499/)
5. [Using I/O ports in C programs](https://www.tldp.org/HOWTO/IO-Port-Programming-2.html)
6. [Intel chipset的GPIO 找法](http://white5168.blogspot.com/2013/08/intel-chipsetgpio.html#.WxyPUtVKi00)
7. [Dump GPIO I/O Registers](https://mail.coreboot.org/pipermail/coreboot/2008-February/031026.html)
8. [Linux I/O Performance Tests using dd](https://www.thomas-krenn.com/en/wiki/Linux_I/O_Performance_Tests_using_dd)
