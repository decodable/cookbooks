
Get installed rpm
```
rpm -qa
```

Get information about rpm
```
rpm -qip foo.rpm
```

extract rpm without install
```
rpm2cpio foo.rpm | cpio -idmv
```
