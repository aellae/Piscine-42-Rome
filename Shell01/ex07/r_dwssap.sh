#!/bin/sh
cat /etc/passwd | grep -v '#' | awk "NR % 2==0" | cut -d : -f 1 | rev | sort -r | head -n "$((FT_LINE2 - 1))"| tail -n "$((FT_LINE2 - FT_LINE + 1))" | awk '{print}' ORS=", "| sed 's/, *$/\./'
