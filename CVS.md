Add files or directories into source control
```
cvs add [files]
```

Commit changes
```
cvs commit [files]
```

Update from repository
```
cvs update -d [files]
```

Dummy update to show status of files
```
cvs -qn update [files]
```

Show status in detail
```
cvs status [files]
```

See the differences between the version I am working on and the version in the repository
```
cvs diff [files]
```

See the differences between different versions
```
cvs diff -r rev1 -r rev2 [files]
```

Discard local changes
```
cvs update -C [files]
```

CVS checkout specific revision
```
cvs checkout -r <revision> -p filename.ext
```
