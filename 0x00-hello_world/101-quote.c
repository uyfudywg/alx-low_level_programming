#!/bin/bash 
gss -S -masm=intel $CFILE -o'echo $CFILE | cut -d. -fl'.s
