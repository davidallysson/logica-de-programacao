def div(x, y)
  if x < y
  	return 0
  elsif x - y < y
    return 1
  else
    return 1 + div(x - y, y)
  end
end
