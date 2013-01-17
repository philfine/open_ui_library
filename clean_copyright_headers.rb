#!/usr/bin/env ruby

filename = ARGV[0]

#remove file header

beginning = true

file = File.new(filename, "r")
out = File.new("/tmp/file.tmp", "w");
while (line = file.gets)
	beginning = false if(line =~ /^#[a-z]/)
	#print line if beginning == false
	out.print line if beginning == false
end
out.close
file.close

`cp /tmp/file.tmp #{filename}`
