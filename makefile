#
#
# SNEeSe, an Open Source Super NES emulator.
#
#
# Copyright (c) 1998-2004 Charles Bilyue'.
# Portions Copyright (c) 2003-2004 Daniel Horchner.
#
# This is free software.  See 'LICENSE' for details.
# You must read and accept the license prior to use.
#
#


PLATFORM := dos

# DOS (DJGPP, GCC)


# How to call the tools we need to use

NASM   := nasm -w+orphan-labels -w+macro-params -O20 -DC_LABELS_PREFIX=_
GCC    := gcc -Werror -Wall
RM     := rm -f
MD     := mkdir


# Default filename extension for executables
EXE_EXT := .exe


# How to inform the linker of libraries we're using

ALLEG  := -lalleg


# Set up build for this platform.

SUFFIX :=
AFLAGS := -f coff
GXX    := gxx

ZLIB   := 1 # comment this line to disable ZLIB support
ifdef ZLIB
MIOFLAGS := -lz
endif


include makefile.all
