$array = [1, 2, 3];
@dereferenced_array = @{$array};
print($dereferenced_array[0], "\n");
print($dereferenced_array[1], "\n");
print($dereferenced_array[2], "\n");
print($array, "\n");
print(@dereferenced_array, "\n");
