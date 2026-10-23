from collections import deque

def solution(maps):
    rows = len(maps)
    cols = len(maps[0])

    dist = [[0] * cols for _ in range(rows)]

    dx = [-1, 1, 0, 0]
    dy = [0, 0, -1, 1]

    # 좌표 저장
    q = deque()

    # 시작 위치 추가
    q.append((0, 0))
    dist[0][0] = 1

    while q:
        x, y = q.popleft()
        
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            
            # 다음 위치가 맵 안에 있는지 확인
            if not (0 <= nx < rows and 0 <= ny < cols):
                # 이동할 수 있는 칸인지 확인
                continue
                
            # 벽인지 확인
            if maps[nx][ny] == 0:
                continue
                
			# 방문한 적이 있는지 확인
            if dist[nx][ny] != 0:
                continue
            
            dist[nx][ny] = dist[x][y] + 1
            q.append((nx,ny))
            
    answer = dist[rows-1][cols-1]
    
    if answer == 0:
        return -1
    
    return answer