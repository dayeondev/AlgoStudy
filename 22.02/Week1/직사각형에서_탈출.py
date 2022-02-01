in_coords = [int(num) for num in input().split()]
# in_coords = 6, 2, 10, 3

def get_dist(coords):
    result = 0
    
    _x, _y, _w, _h = coords
    # print(_x)
    harf = []
    harf.append(_w / 2)
    harf.append(_h / 2)

    x_dist = 0
    y_dist = 0
    
    if _x < harf[0]:
        x_dist = _x
    else:
        x_dist = _w - _x

    if _y < harf[1]:
        y_dist = _y
    else:
        y_dist = _h - _y

    if x_dist < y_dist:
        result = x_dist
    else:
        result = y_dist

    return result

print(get_dist(in_coords))