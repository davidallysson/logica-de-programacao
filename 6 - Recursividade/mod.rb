def mod(x, y)
  if x < y
    return x
  elsif x - y < y
    return x - y
  else
    return mod(x - y, y)
  end
end
