
# Query
Get installed rpm
```
rpm -qa
```

Get information about package
```
rpm -qip foo.rpm
```

List files in package
```
rpm -qlp foo.rpm
```

extract rpm without install
```
rpm2cpio foo.rpm | cpio -idmv
rpm2cpio foo.rpm | cpio -idmv */XXX*.so
```

verify package installed
```
rpm -q --verify {package}
```
