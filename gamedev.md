# Engines

## Godot

### How to dynamic clone/instance scene/script file

- First we need to preload scene

```python
var obj = preload("res://objs/obj.tscn");
```

- Than instantiate it

```python
var inst = bullet.instance();
```

- Abd finnaly child it

```python
add_child(inst);
```
