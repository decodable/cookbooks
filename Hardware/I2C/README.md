From software point of view, I do not see difference between i2c and SMBus.

# i2c-tools
Use i2c-tools to play i2c in shell script.
```
i2cdetect -l            # Output a list of installed busses.
i2cdetect [-y] i2cbus   # probe bus 0, option -y to disable interactive mode
i2cget [-y] i2cbus chip-address data-address
i2cset [-y] i2cbus chip-address data-address value
```

# i2c-dev
with kernel module i2c-dev, we can access i2c via ioctl using C.

See [Documentation/i2c/dev-interface - Kernel.org](https://www.kernel.org/doc/Documentation/i2c/dev-interface).

# References
1. [I²C - Wikipedia](https://en.wikipedia.org/wiki/I%C2%B2C)
2. [System Management Bus](https://en.wikipedia.org/wiki/System_Management_Bus)
3. [Comparing the I²C Bus to the SMBus](https://www.maximintegrated.com/en/app-notes/index.mvp/id/476)
4. [Using I2C bus from user space](https://www.acmesystems.it/user_i2c)
5. [Using I2C from userspace in Linux](https://xgoat.com/wp/2007/11/11/using-i2c-from-userspace-in-linux/)
