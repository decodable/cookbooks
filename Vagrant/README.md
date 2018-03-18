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
When you execute `vagrant init ubuntu/xenial64`, it will automatically download the box from online reporsitory to local disk, so that next time it will not download again when you create another virtual machine.
The corresponding box info is https://app.vagrantup.com/ubuntu/boxes/xenial64.
We can also use command `vagrant box` to manage box.

```
$ vagrant box add ubuntu/xenial64
ubuntu/xenial64 (virtualbox, 20170830.1.1)
PS C:\> vagrant add vagrant box add ubuntu/xenial64
PS C:\> vagrant box add ubuntu/xenial64
==> box: Loading metadata for box 'ubuntu/xenial64'
    box: URL: https://vagrantcloud.com/ubuntu/xenial64
==> box: Adding box 'ubuntu/xenial64' (v20180316.0.0) for provider: virtualbox
    box: Downloading: https://vagrantcloud.com/ubuntu/boxes/xenial64/versions/20
180316.0.0/providers/virtualbox.box
    box: Download redirected to host: cloud-images.ubuntu.com
    box: Progress: 100% (Rate: 836k/s, Estimated time remaining: --:--:--)
==> box: Successfully added box 'ubuntu/xenial64' (v20180316.0.0) for 'virtualbo
x'!
```

## [Virtual Machine](https://www.vagrantup.com/docs/providers/)
Vagrant supports different kind of virtual machines and call it [providers](https://www.vagrantup.com/docs/providers/). By default, it assume VirtualBox.

## [Provisioning](https://www.vagrantup.com/docs/provisioning/)


The Vagrantfile is the recipe to describe all this.


# References
1. [Official Website](https://www.vagrantup.com/)
2. [Putty Unable to Use Vagrant’s Private Key](http://www.alittleofboth.com/2014/04/putty-unable-to-use-vagrants-private-key/)
