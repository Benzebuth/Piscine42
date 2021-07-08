#!/bin/bash
ifconfig -a ether | grep "ether " | sed 's/^[[:space:]]*ether //' | rev | sed 's/ //'| rev
