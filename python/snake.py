import tkinter as tk
import random

# Set up display
WIDTH, HEIGHT = 400, 400
GRID_SIZE = 20

# Emoji options
emoji_faces = ["😀", "😎", "😂", "😍", "😉"]
snake_face = "😀"

# Initialize window
root = tk.Tk()
root.title("Emoji Snake Game")
canvas = tk.Canvas(root, width=WIDTH, height=HEIGHT, bg="white")
canvas.pack()

# Snake and Food
snake = [(5, 5)]
direction = (1, 0)
food = (random.randint(0, WIDTH // GRID_SIZE - 1), random.randint(0, HEIGHT // GRID_SIZE - 1))
food_emoji = random.choice(emoji_faces)

# Move function
def move():
    global snake_face, food, food_emoji
    head_x, head_y = snake[0]
    new_head = (head_x + direction[0], head_y + direction[1])
    
    # Check for collisions
    if new_head in snake or not (0 <= new_head[0] < WIDTH // GRID_SIZE and 0 <= new_head[1] < HEIGHT // GRID_SIZE):
        return
    
    snake.insert(0, new_head)
    if new_head == food:
        snake_face = food_emoji  # Change snake face to eaten food emoji
        food = (random.randint(0, WIDTH // GRID_SIZE - 1), random.randint(0, HEIGHT // GRID_SIZE - 1))
        food_emoji = random.choice(emoji_faces)
    else:
        snake.pop()
    
    draw()
    root.after(200, move)

# Draw function
def draw():
    canvas.delete("all")
    for i, (x, y) in enumerate(snake):
        emoji = snake_face if i == 0 else "🟡"
        canvas.create_text(x * GRID_SIZE + GRID_SIZE // 2, y * GRID_SIZE + GRID_SIZE // 2, text=emoji, font=("Arial", 16))
    canvas.create_text(food[0] * GRID_SIZE + GRID_SIZE // 2, food[1] * GRID_SIZE + GRID_SIZE // 2, text=food_emoji, font=("Arial", 16))

# Key event handler
def change_direction(event):
    global direction
    if event.keysym == "Up" and direction != (0, 1):
        direction = (0, -1)
    elif event.keysym == "Down" and direction != (0, -1):
        direction = (0, 1)
    elif event.keysym == "Left" and direction != (1, 0):
        direction = (-1, 0)
    elif event.keysym == "Right" and direction != (-1, 0):
        direction = (1, 0)

# Bind keys
root.bind("<KeyPress>", change_direction)

# Start game
move()
root.mainloop()
