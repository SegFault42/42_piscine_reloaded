ifconfig | grep ether | sed 's/[[:blank:]]//g' | sed 's/ether//g'
