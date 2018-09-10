# Programming
```
       #include <syslog.h>

       void openlog(const char *ident, int option, int facility);
       void syslog(int priority, const char *format, ...);
       void closelog(void);

       #include <stdarg.h>

       void vsyslog(int priority, const char *format, va_list ap);
```

openlog and closelog are optional. Without openlog, the ident is NULL, and the program is used.

The facility argument is used to specify what type of program is logging the message.
This lets the configuration file specify that messages from different facilities will be handled differently.

# Configure

man rsyslog.conf
## Filter
 
```
# /etc/rsyslog.conf

# Log all, but not mail or local3, with severity _info_ or above,  to file /var/log/messages
*.info;mail.none;local3.none /var/log/messages
# Log mail to /var/log/maillog 
mail.* /var/log/maillog
local3.* /var/log/application.log
```

## Syncing


```
By default, files are not synced after earch write. 
To enable syncing of log files globally, use either the "$ActionFileEnableSync" directive or the "sync" parameter to omfile. 
Enabling  this option degrades performance and it is advised not to enable syncing unless you know what you are doing.  
To selectively disable syncing for certain files, you may prefix the file path with a minus sign ("-").
```
## Remote machine
To forward messages to another host via UDP, prepend the hostname with the at sign ("@").  

To forward it via plain tcp, prepend two at signs ("@@").
```
*.* @192.168.0.1
```

# Reference
1. [rsyslog](https://wiki.gentoo.org/wiki/Rsyslog#Local_logging)
