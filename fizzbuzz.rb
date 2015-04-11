#fizzbuzz implementation in ruby
#@rdar

(1..100).each do |n|
    fizz = if n % 3 == 0 then 'fizz' else nil end
    buzz = if n % 5 == 0 then 'buzz' else nil end
    puts "#{n} #{fizz}#{buzz}"
end
