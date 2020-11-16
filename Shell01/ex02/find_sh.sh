#!/bin/sh
find . -type f -name "*.sh" | sed "s/.*\///" | rev | cut -c 4- | rev 
