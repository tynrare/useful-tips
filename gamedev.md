# Engines

## Godot

### How to dynamic create/clone/instance scene/script file

- First we need to preload scene somewhere in begin of file

```python
var obj = preload("res://objs/obj.tscn");
```

- Than instantiate it

```python
var inst = bullet.instance();
```

- And finnaly child it

```python
add_child(inst);
```
- Or we can create it without preload, but it will be much slower

```python
add_child(load("res://objs/obj.tscn").instance());
```

### How to set "editable" variable in godot

- Here's "export" variables, thats sets from editor. This is [official doc](https://godot.readthedocs.io/en/latest/learning/scripting/gdscript/gdscript_basics.html#exports) and list of hints from there:

```python
# If the exported value assigns a constant or constant expression,
# the type will be inferred and used in the editor

export var number = 5

# Export can take a basic data type as an argument which will be
# used in the editor

export(int) var number

# Export can also take a resource type to use as a hint

export(Texture) var character_face
export(PackedScene) var scene_file

# Integers and strings hint enumerated values

# Editor will enumerate as 0, 1 and 2
export(int, "Warrior", "Magician", "Thief") var character_class
# Editor will enumerate with string names
export(String, "Rebecca", "Mary", "Leah") var character_name

# Strings as paths

# String is a path to a file
export(String, FILE) var f
# String is a path to a directory
export(String, DIR) var f
# String is a path to a file, custom filter provided as hint
export(String, FILE, "*.txt") var f

# Using paths in the global filesystem is also possible,
# but only in tool scripts (see further below)

# String is a path to a PNG file in the global filesystem
export(String, FILE, GLOBAL, "*.png") var tool_image
# String is a path to a directory in the global filesystem
export(String, DIR, GLOBAL) var tool_dir

# The MULTILINE setting tells the editor to show a large input
# field for editing over multiple lines
export(String, MULTILINE) var text

# Limiting editor input ranges

# Allow integer values from 0 to 20
export(int, 20) var i
# Allow integer values from -10 to 20
export(int, -10, 20) var j
# Allow floats from -10 to 20, with a step of 0.2
export(float, -10, 20, 0.2) var k
# Allow values y = exp(x) where y varies betwee 100 and 1000
# while snapping to steps of 20. The editor will present a
# slider for easily editing the value.
export(float, EXP, 100, 1000, 20) var l

# Floats with easing hint

# Display a visual representation of the ease() function
# when editing
export(float, EASE) var transition_speed

# Colors

# Color given as Red-Green-Blue value
export(Color, RGB) var col  # Color is RGB
# Color given as Red-Green-Blue-Alpha value
export(Color, RGBA) var col  # Color is RGBA

# another node in the scene can be exported too

export(NodePath) var node
```
