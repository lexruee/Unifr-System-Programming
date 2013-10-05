#! /usr/bin/ruby -w
#
#@author	Alexander Rüedlinger
#@matrikel	08-129-710
#@date		2013
#

host_prefix = "diufsppc"
host_postfix = ".unifr.ch"

ids = (701..720)

found_hosts = Array.new
ids.each do |id|
	hostname = "#{host_prefix}#{id}#{host_postfix}"
	out = `ping #{hostname} -c 1`
	if out.include? "1 packets transmitted, 1 received"
		found_hosts << hostname
		puts "found host: #{hostname}"	
	end
end

