# ST VL53L1X IIO Proximity Driver

[![License: GPL v2](https://img.shields.io/badge/License-GPL%202.0%2B-blue.svg)](LICENSE)
[![Kernel](https://img.shields.io/badge/Kernel-6.12%2B-brightgreen)](https://www.kernel.org/)

Out-of-tree Linux kernel driver for the **ST VL53L1X** Time-of-Flight (ToF) laser ranging sensor using the **IIO proximity** subsystem.

This driver is currently under upstream review.

### Status
- **Version**: v8 (will be submitted shortly)
- **Target**: `drivers/iio/proximity/vl53l1x-i2c.c`
- **Binding**: `Documentation/devicetree/bindings/iio/proximity/st,vl53l0x.yaml`

---

### Features
- Standard IIO proximity interface
- Supports both polled and interrupt-driven operation
- Device Tree support
- Follows latest IIO subsystem best practices

---

### Build Instructions

```bash
# From the repository root
make

# Install the module
sudo modprobe industrialio
sudo insmod vl53l1x-i2c.ko