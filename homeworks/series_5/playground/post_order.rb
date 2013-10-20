#! /usr/bin/ruby


class Node 
	attr_accessor :id, :data, :right, :left

	def initialize(a_hash)
		@id, @data = a_hash[:id], a_hash[:data]
		@left, @right = a_hash[:left], a_hash[:right]	
	end
end

node_1 = Node.new :id => 0, :data => 1
node_2 = Node.new :id => 1, :data => 2
node_3 = Node.new :id => 2, :data => 3
node_4 = Node.new :id => 3, :data => 4
node_5 = Node.new :id => 4, :data => 5

node_1.left = node_2
node_1.right = node_5
node_2.left = node_3
node_2.right = node_4

def post_order(root, stack)
	post_order(root.left,stack) if not root.left.nil?
	post_order(root.right,stack) if not root.right.nil?
	puts root.data
	stack << root.data
end

stack = Array.new

puts "post traverse"
post_order(node_1,stack)

puts "stack:"
puts stack
