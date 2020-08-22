# Install
```
sudo apt-get install openssh-server
```

# Generating KEY
```
ssh-keygen -t rsa -b 4096 -C "your_email@example.com"
```

# Changing passphase
```
ssh-keygen -p
```

# Generate Public Key from Private Key
```
ssh-keygen -y -f ~/.ssh/id_rsa > ~/.ssh/id_rsa.pub
```

# Reference
1. [Connecting to GitHub with SSH](https://help.github.com/articles/connecting-to-github-with-ssh/)
2. [An Illustrated Guide to SSH Agent Forwarding](http://www.unixwiz.net/techtips/ssh-agent-forwarding.html)
