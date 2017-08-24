
[Interrupt request (PC architecture)](https://en.wikipedia.org/wiki/Interrupt_request_(PC_architecture))

```
$ cat /proc/interrupts
           CPU0       CPU1
  0:         36          0   IO-APIC-edge      timer
  4:       6733          0   IO-APIC-edge      serial
  8:          1          0   IO-APIC-edge      rtc0
  9:        460          0   IO-APIC-fasteoi   acpi
 16:         33          0   IO-APIC-fasteoi   ehci_hcd:usb1
 23:         31          0   IO-APIC-fasteoi   ehci_hcd:usb2
 40:          0          0   PCI-MSI-edge      PCIe PME
 41:          0          0   PCI-MSI-edge      PCIe PME
 42:          0          0   PCI-MSI-edge      PCIe PME, pciehp
 43:    4245932          0   PCI-MSI-edge      eth0
 ...
```
