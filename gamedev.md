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
