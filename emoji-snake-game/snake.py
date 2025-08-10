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

# Game state variables
snake = [(5, 5)]
direction = (1, 0)
food = (random.randint(0, WIDTH // GRID_SIZE - 1), random.randint(0, HEIGHT // GRID_SIZE - 1))
food_emoji = random.choice(emoji_faces)
score = 0
game_started = False

# Move function
def move():
    global snake_face, food, food_emoji, score
    head_x, head_y = snake[0]
    new_head = (head_x + direction[0], head_y + direction[1])
    
    # Check for collisions
    if new_head in snake or not (0 <= new_head[0] < WIDTH // GRID_SIZE and 0 <= new_head[1] < HEIGHT // GRID_SIZE):
        return
    
    snake.insert(0, new_head)
    if new_head == food:
        snake_face = food_emoji  # Change snake face to eaten food emoji
        score += 1  # Increase score
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
    canvas.create_text(WIDTH // 2, 10, text=f"Score: {score}", font=("Arial", 16))

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

# Start game function
def start_game():
    global game_started, snake, direction, food, food_emoji, score
    if not game_started:
        game_started = True
        snake = [(5, 5)]
        direction = (1, 0)
        food = (random.randint(0, WIDTH // GRID_SIZE - 1), random.randint(0, HEIGHT // GRID_SIZE - 1))
        food_emoji = random.choice(emoji_faces)
        score = 0
        move()

# Draw start menu
def draw_start_menu():
    canvas.delete("all")
    canvas.create_text(WIDTH // 2, HEIGHT // 2 - 20, text="Welcome to Emoji Snake Game!", font=("Arial", 20))
    canvas.create_text(WIDTH // 2, HEIGHT // 2 + 20, text="Press 'Enter' to Start", font=("Arial", 16))

# Key event handler for starting the game
def key_press(event):
    if event.keysym == "Return":
        start_game()
    else:
        change_direction(event)

# Bind keys
root.bind("<KeyPress>", key_press)

# Draw start menu initially
draw_start_menu()
root.mainloop()