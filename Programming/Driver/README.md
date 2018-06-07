# Why?
1. Why we need kernel module?
2. How to access kernel space from user space?
3. How to access device?

# Kernel Module
1. Very limited stack
2. No libraries to link to
3. No one help you to clean
4. Concurrency in mind
5. No floating point arithmetic


# Example
```
docker pull ubuntu:16.04
docker run -rm -it -v /data:/data:rw 5e8b97a2a082 /bin/bash
apt-get update
apt-get install build-essential linux-headers-$(uname -r)
```

# References
1. [Linux Device Drivers, Third Edition](https://lwn.net/Kernel/LDD3/)
2. [Kernel Space, User Space Interfaces](http://wiki.tldp.org/kernel_user_space_howto)
