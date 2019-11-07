import math

T = int(input())

for i in range(0, T):
    x1, y1, r1, x2, y2, r2 = map(int, input().split())

    radius_sum = r1 + r2
    radius_diff = abs(r1 - r2)
    dist = (x1 - x2) ** 2 + (y1 - y2) ** 2
    dist = math.sqrt(dist)



    if radius_diff == 0 and dist ==0:
        print(-1)
    else:
        if radius_diff < dist and radius_sum > dist:
            print(2)
        else:
            if radius_sum == dist or radius_diff == dist:
                print(1)
            else:
                if radius_sum < dist or radius_diff > dist or dist == 0 :
                    print(0)

