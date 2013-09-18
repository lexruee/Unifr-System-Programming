#! /usr/bin/ruby -w

last_name = "Rueedlinger"
series_number = ""
shell_command = "tar -cvzf"
group_number = "05"
lang = "en"
file_ext = "tgz"
upload_folder = "./upload/"

series_dir = ARGV.first # get first argument
dirs = series_dir.split("/"); # split path into dirs
dirs.pop if dirs.last == "/" # pop last forward slash

number = dirs.last.split("_").last # get the number of the dir
# if single digit add a zero before the number
series_number << "0" if number.length==1 
series_number << number # push the series number


archive_name = upload_folder 
archive_name << "#{group_number}_#{series_number}_#{last_name}_#{lang}.#{file_ext}"
puts archive_name
puts "create tgz file: #{archive_name}"
exec("#{shell_command} #{archive_name} #{series_dir}")

