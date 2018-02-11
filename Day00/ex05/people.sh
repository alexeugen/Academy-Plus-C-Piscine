#!/bin/sh
ldapsearch -x -LLL "uid=z*" cn | grep ^cn | sort -r | cut -c 5-
