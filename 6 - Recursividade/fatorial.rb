def fat(x)
	if(x < 0 && x % 1 != 0)
		return -1
	elsif(x == 1)
		return 1
	else
		return x * fat(x-1)
	end
end
