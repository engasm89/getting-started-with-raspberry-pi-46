# Getting Started With Raspberry Pi 46

## Course Snapshot

| Field | Details |
| --- | --- |
| Instructor | Ashraf S A AlMadhoun |
| Hardware Focus | Raspberry Pi |
| Course Link | https://www.udemy.com |
| Repository Updated | 2025-11-18 |

## Overview

Getting Started With Raspberry Pi 46 is a hands-on course focused on practical Raspberry
Pi development. This repository contains curated starter code, wiring notes, and a
repeatable workflow that mirrors the lessons from the video curriculum.

## Learning Objectives

- Understand the core goals of the **Getting Started With Raspberry Pi 46** lessons.
- Map the theoretical material onto executable firmware samples.
- Practice reviewing telemetry / console logs with the provided samples.
- Customize the code to match your target hardware setup.

## Hardware & Components

Consult `CIRCUIT.md` for wiring notes. Typical builds require a development board,
sensors/actuators described in the Getting Started With Raspberry Pi 46 videos, jumper
wires, and a USB cable for programming plus logging.

## Setup Instructions

1. Install the latest Arduino IDE or your preferred toolchain.
2. Clone this repository or download it as a ZIP.
3. Review the `README.md`, `CIRCUIT.md`, and `data/` samples.
4. Upload the code to your dev board and monitor the serial console.

## Code Walkthrough

The `*.c` files are intentionally lightweight so you can focus on the core concept taught
in the course. Each file now includes metadata comments that summarize intent, I/O
expectations, and how telemetry maps to the lesson.

## Usage

```bash
# Build and inspect the sample on a desktop toolchain
gcc -Wall -Wextra -std=c11 *.c -o demo && ./demo

# Or upload via Arduino IDE to replicate the Getting Started With Raspberry Pi 46 lab
```

## Sample Data

Open `data/sample-telemetry.jsonl` to inspect representative console output. This is
useful when validating your hardware wiring or cloud logging pipeline.

## Additional Notes (Legacy Content)

# Getting Started with Raspberry Pi (Course 46)

- Course: Getting Started with Raspberry Pi
- Author: Ashraf S A AlMadhoun
- Link: https://www.udemy.com/course/raspberry-pi-getting-started-with-raspberry-pi/?couponCode=JULYMAXDICOUNT

## Overview

Blink an LED on Raspberry Pi using simple GPIO control. This starter project explains exporting a GPIO, setting direction, and writing values.

## Code Explained

- Exports `GPIO17` and sets it as output.
- Toggles the LED on and off in a timed loop.
- Prints status messages for visibility.

## Purchase With Discount

Enroll using the link above to get a discounted price and kickstart your Raspberry Pi journey.
