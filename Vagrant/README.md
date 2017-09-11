# Manual
## [Init](https://www.vagrantup.com/docs/cli/init.html)
```
# vagrant init bento/ubuntu-16.04
vagrant init xenji/ubuntu-17.04-server
vagrant up
```

## [suspend](https://www.vagrantup.com/docs/cli/suspend.html) & [resume](https://www.vagrantup.com/docs/cli/resume.html)
```
vagrant suspend
vagrant resume
```

## [halt](https://www.vagrantup.com/docs/cli/halt.html) & [up](https://www.vagrantup.com/docs/cli/up.html)
```
# vagrant reload = vagrant halt + vagrant up.
# vagrant reload > reboot as it will do provisioning

vagrant halt   # shut down
vagrant up
vagrant reload
vagrant provision
```

## [destory](https://www.vagrantup.com/docs/cli/destroy.html)
```
vagrant destroy
```

# Recipe
Vagrant = Virtual Machine + Box + Provisioning

Having a virtual machine ready is easy but not easier than setting up a real computer.
You need to 
1. install operating system. linux, Mac Os or windows.
2. setup the virtual machine. networking, shared folder.
3. install all the software.
Of course, after all setup, we can save it as an image, and load it anytime you need it.
However, when you install or update software, you have to create a new image.

Vagrant can help to do all things above and more.

## Virtual Machine
Vagrant supports different kind of virtual machines and call it [providers](https://www.vagrantup.com/docs/providers/). By default, it assume VirtualBox.

## [Box](https://www.vagrantup.com/docs/boxes.html)
```
mkdir ubuntu16.04
cd ubuntu16.04
vagrant init bento/ubuntu-16.04
```
It creates a file Vagrantfile in the current directory.
The file Vagrantfile looks like this:
```
Vagrant.configure("2") do |config|
  config.vm.box = "bento/ubuntu-16.04"
end
```


Boxes have all the information required to install your system. e.g. the image for the virtual machine.
When you execute `vagrant init xenji/ubuntu-17.04-server`, it will automatically download the box from online reporsitory to local disk, so that next time it will not download again when you create another virtual machine.
The corresponding box info is https://app.vagrantup.com/xenji/boxes/ubuntu-17.04-server.
We can also use command `vagrant box` to 

## [Provisioning](https://www.vagrantup.com/docs/provisioning/)


The Vagrantfile is the recipe to describe all this.


# References
1. [Remote Desktop and VNC on Ubuntu Server](https://peteris.rocks/blog/remote-desktop-and-vnc-on-ubuntu-server/)
