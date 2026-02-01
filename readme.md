# Cosmic Beam Tracer 🌌

Arduino-based project for detecting and tracing cosmic radiation events.

## Features
- Real-time detection of cosmic particle hits
- Interrupt-based pulse counting
- Serial logging
- Expandable (SD card, RTC, cloud upload)

## Hardware
- Arduino Uno / Nano
- Geiger–Müller tube module
- Optional: SD card, RTC, OLED

## How it works
Cosmic particles trigger ionization events inside the Geiger tube.
Each pulse is counted using an external interrupt for high accuracy.

## Future ideas
- CPM / μSv calculation
- GPS-tagged radiation map
- Web dashboard
- Satellite coincidence experiments 😏
