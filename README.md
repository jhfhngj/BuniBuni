# 🐇 BuniBuni — The Hopping Robot Rabbit

BuniBuni is a minimalist, expressive robot rabbit built with an Arduino Nano, MG90S servos, and a chaotic wiring philosophy. It hops, turns, stretches, and reacts to IR remote commands — all while staying light enough to actually leave the ground.

## 🎯 Features

- **Hops** using coordinated servo thrust
- **Turns** left and right with tank-steering-like leg motion
- **Stretches** dramatically (and painfully)
- **IR Remote Controlled** for wireless command input
- **Lightweight chassis** with recommended 20% PLA infill
- **Oval legs with optional rubber feet** for grip and style

## 🧠 Tech Specs

| Component        | Description                                  |
|------------------|----------------------------------------------|
| Microcontroller  | Arduino Nano                                 |
| Servos           | 4× MG90S (metal gear)                        |
| Power            | 5V 4A battery or USB power bank              |
| Control          | IR receiver + remote                         |
| Body             | PLA, hollow rectangle, floating servo mounts |
| Legs             | Oval-shaped, lightweight                     |

## 🛠️ How It Works

Each motion is triggered by an IR remote command:

| Command | Action    |
|---------|-----------|
| `0x2`   | Hop       |
| `0xE0`  | Turn Left |
| `0x90`  | Turn Right|
| `0xA8`  | Stretch   |

Servos are mounted at each corner of the chassis and control the legs directly. The body is hollow, and electronics are placed “tupperware-style” — no cable management, just vibes.

## 📦 Files

- `BuniBuni.ino` — Arduino sketch
- `images/` — Rendered chassis and build photos
- `parts_list.md` — Components and links
- `body_design_notes.md` — Chassis layout and printing tips

## 📹 Demo

Watch BuniBuni hop and stretch on [YouTube](Not available yet).

## 🧪 Build Philosophy

> “No ears, no tail — just torque and chaos.”

BuniBuni is designed to be light enough to jump, expressive enough to feel alive, and reckless enough to be lovable.

## 💵 Price

With a cheaper battery, BuniBuni can float around **$55 CAD**.

With higher-quality parts, filament, and a proper 5V 4A battery, BuniBuni lands closer to **$81 CAD**.

> “Why so expensive?”

Simple: the battery is high-amp (4A) to support MG90S servos. MG90S costs around $7 each — pricey, but worth it. Why? Metal gears. More torque. More durability.

I chose MG90S because they’re strong enough for hopping. And the 5V 4A battery? Because with great power comes great responsibility (Spider-Man reference). MG90S can draw **500mA to 1A each**, so you need serious current to keep BuniBuni bouncing.

> "Why not SG90?"

As I said earlier, MG90Ses are more powerful. They are tough. SG90s, however, are weaker, but good for general projects. They use a nylon/plastic gear, and have less durability, stall easier, and are still good for less power projects.
