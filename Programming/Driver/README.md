# Kernel Module
1. Very limited stack
2. No libraries to link to
3. No one help you to clean
4. Concurrency in mind
5. No floating point arithmetic


# Example
```
docker pull ubuntu:16.04
docker run --rm -it 357066ae78a8
apt-get install linux-headers-$(uname -r)
```
