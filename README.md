# MPLDOS
Multi Platform Lean Disk Operating System. A cross-platform clone of CP/M

## Why?

I want to create this OS to:
- Have a portable cross-platform OS for small embedded systems (8-bit MPUs with >= 32 KB of memory)
- Have an OS smaller and simpler than Unix-like OSs (like Fuzix), without the overhead of multiple processes
- To have a consistent platform so that hardware independent code can be executed on multiple different machines (e.g. two 6502-based boards with different memory mapped IO devices)
- To have a consistent OS across many MPU architectures, especially ones that couldn't run something Unix-like
- Enable easier access to disk IO on small 8-bit platforms
- Enable microcontrollers to have a "real" interactive operating system
- As a lesson in alternate history to see what it could have been like had CP/M been written in C and thus used and ported to other architectures (besides the existing ones of 8080, 8086, 68k, and Z80k)
- To see the 'A>' prompt on as many platforms as possible

## Project scope

### In scope
- API compatibility with CP/M (similarly to how 86-DOS re-implemented the CP/M APIs)
- Written in C (like FreeDOS), with as little assembly as possible
- Machine-independent BDOS and machine-dependent BIOS
- Programs written on one system will run on another with a different BIOS
- Compatibility with CPM 1.x API
- Flat filesystem
- 386, 8086, 8080 platforms
- SD Card support
- 1.44 MB PC floppy support
- CCP (console command processor)
- Built-in commands: DIR, ERA, REN, SAVE, TYPE, USER
- Transient commands: STAT, PIP, ED, DUMP

## Future scope
- 6502, AVR platforms
- Compatibility with CP/M 2.2 API
- Transient commands: ASM, DDT, SYSGEN, SUBMIT
- MS-DOS commands: PAUSE, COMP, SORT
- Unix commands (these have been ported to MS-DOS so can in principle be ported): grep, cat, head, sed, tail, uniq, wc

## Out of scope
- Binary compatibility with CP/M
