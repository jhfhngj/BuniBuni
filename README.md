# 🐇 BuniBuni — The Hopping Robot Rabbit

BuniBuni is a minimalist, expressive robot rabbit built with an Arduino Nano, MG90S servos, and a chaotic wiring philosophy. It hops, turns, stretches, and reacts to IR remote commands — all while staying light enough to actually leave the ground.

## 🎯 Features

- **Hops** using coordinated servo thrust
- **Turns** left and right with tank-steering-like leg motion
- **Stretches** dramatically (and painfully)
- **IR Remote Controlled** for wireless command input
- You get your own **Lightweight chassis** with recommended 20% PLA infill
- **Optional rubber feet** so BuniBuni doesn't headbutt you

## 🧠 Tech Specs

| Component        | Description                                  |
|------------------|----------------------------------------------|
| Microcontroller  | Arduino Nano                                 |
| Servos           | 4× MG90S (metal gear)                        |
| Power            | 5V 4A battery or USB power bank              |
| Control          | IR receiver + remote                         |
| Body             | You find it                                  |
| Legs             | You find them                                |

## 🛠️ How It Works

Each motion is triggered by an IR remote command:

| Command | Action    |
|---------|-----------|
| `0x2`   | Hop       |
| `0xE0`  | Turn Left |
| `0x90`  | Turn Right|
| `0xA8`  | Stretch   |

But, since this *is* open source, you can customize the INO to work with your IR remote!

## 📦 Files

- `Softwarez/BuniBuni.ino` — Arduino sketch. [Sketch](Softwarez/bunibuni.ino)
- `Softwarez/Dependencies.txt` — The libraries you'll need (note: this is Arduino, not Python, so you can't just arduinonano install Dependencies.txt)! [Dependencies](Softwarez/Dependencies.txt)
- `Body/parts_list.xlsx` — Components and links. [List](Body/parts_list.xlsx)
- `Body/body_design_notes.md` — Useful design notes and printing tips! [Body design notes](Body/body_design_notes.md)

## 📹 Demo

Watch BuniBuni hop and stretch on (Not available yet).

## 🧪 Build Talk

> “No ears, no tail — just hop and be cool.”

BuniBuni is designed to be light enough to jump, expressive enough to feel alive, and reckless enough to be lovable.

## 💵 Price

With cheaper everything, BuniBuni can float around **$60 CAD** in the pool.

With higher-quality parts, filament, and a proper 5V 4A battery, BuniBuni lands closer to **$90 CAD**.

> “Why so expensive?”

Simple: the battery (since it is beta, I am testing it with only PSU) is high-amp (4A) to support MG90S servos. MG90S costs around $7 each — pricey, but worth it. Why? Metal gears. More torque. More durability.

I chose MG90S because they’re strong enough for hopping. And the 5V 4A battery? Because with great power comes great responsibility (Spider-Man reference). MG90S can draw **500mA to 1A each**, so you need serious current to keep BuniBuni bouncing.

> "Why not SG90?"

As I said earlier, MG90Ses are more powerful. They are tough. SG90s, however, are weaker, but good for general projects. They use a nylon/plastic gear, and have less durability, stall easier, and are still good for less power projects.
