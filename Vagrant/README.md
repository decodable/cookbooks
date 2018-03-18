# Install Plugin
```
vagrant plugin install vagrant-disksize
```

# Basic
## [init](https://www.vagrantup.com/docs/cli/init.html)
```
vagrant init ubuntu/xenial64
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

# Basic++
Vagrant = Box + Virtual Machine + Provisioning

Having a virtual machine ready is easy but not easier than setting up a real computer.
You need to 
1. install operating system. linux, Mac Os or windows.
2. setup the virtual machine. networking, shared folder.
3. install all the software.
Of course, after all setup, we can save it as an image, and load it anytime you need it.
However, when you install or update software, you have to create a new image.

Vagrant can help to do all things above and more.

## [Box](https://www.vagrantup.com/docs/boxes.html)
```
mkdir ubuntu16.04
cd ubuntu16.04
vagrant init ubuntu/xenial64
```
It creates a file Vagrantfile in the current directory.
The file Vagrantfile looks like this:
```
Vagrant.configure("2") do |config|
  config.vm.box = "ubuntu/xenial64"
end
```


Boxes have all the information required to install your system. e.g. the image for the virtual machine.
When you execute `vagrant init xenji/ubuntu-17.04-server`, it will automatically download the box from online reporsitory to local disk, so that next time it will not download again when you create another virtual machine.
The corresponding box info is https://app.vagrantup.com/xenji/boxes/ubuntu-17.04-server.
We can also use command `vagrant box` to manage box.

```
$ vagrant box add bento/ubuntu-16.04
Bringing machine 'default' up with 'virtualbox' provider...
==> default: Importing base box 'bento/ubuntu-16.04'...
==> default: Matching MAC address for NAT networking...
==> default: Checking if box 'bento/ubuntu-16.04' is up to date...
==> default: A newer version of the box 'bento/ubuntu-16.04' is available! You currently
==> default: have version '2.3.4'. The latest is version '201708.22.0'. Run
==> default: `vagrant box update` to update.
==> default: Setting the name of the VM: ubuntu1604_default_1505166139756_15167
==> default: Fixed port collision for 22 => 2222. Now on port 2200.
==> default: Clearing any previously set network interfaces...
==> default: Preparing network interfaces based on configuration...
    default: Adapter 1: nat
==> default: Forwarding ports...
    default: 22 (guest) => 2200 (host) (adapter 1)
==> default: Booting VM...
==> default: Waiting for machine to boot. This may take a few minutes...
    default: SSH address: 127.0.0.1:2200
    default: SSH username: vagrant
    default: SSH auth method: private key
    default:
    default: Vagrant insecure key detected. Vagrant will automatically replace
    default: this with a newly generated keypair for better security.
    default:
    default: Inserting generated public key within guest...
    default: Removing insecure key from the guest if it's present...
    default: Key inserted! Disconnecting and reconnecting using new SSH key...
==> default: Machine booted and ready!
==> default: Checking for guest additions in VM...
==> default: Mounting shared folders...
    default: /vagrant => C:/Users/milix/vagrant/ubuntu16.04
```

## Virtual Machine
Vagrant supports different kind of virtual machines and call it [providers](https://www.vagrantup.com/docs/providers/). By default, it assume VirtualBox.

## [Provisioning](https://www.vagrantup.com/docs/provisioning/)


The Vagrantfile is the recipe to describe all this.


# References
1. [Official Website](https://www.vagrantup.com/)
2. [Remote Desktop and VNC on Ubuntu Server](https://peteris.rocks/blog/remote-desktop-and-vnc-on-ubuntu-server/)
3. [Putty Unable to Use Vagrant’s Private Key](http://www.alittleofboth.com/2014/04/putty-unable-to-use-vagrants-private-key/)
