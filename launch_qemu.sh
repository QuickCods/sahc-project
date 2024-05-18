#!/bin/bash

qemu-system-arm \
  -M virt \
  -cpu cortex-a15 \
  -m 512M \
  -nographic \
  -kernel integrity_check.bin \
  -machine dumpdtb=virt.dtb