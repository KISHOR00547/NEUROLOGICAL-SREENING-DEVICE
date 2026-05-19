# NEUROLOGICAL-SREENING-DEVICE

<img width="1156" height="750" alt="image" src="https://github.com/user-attachments/assets/4240c975-b510-453b-bbee-7e42837762a6" />

# Affordable Neurological Screening Device

## Overview
This project is a low-cost, portable, wearable neurological screening device designed to enable early detection of neurological disorders such as Parkinson’s disease, Alzheimer’s disease, and Epilepsy. The system is built for rural clinics, primary healthcare centres, and medical camps where access to advanced neurological screening is limited.

The device performs rapid, non-invasive neurological screening using embedded sensors and on-device processing, eliminating the need for expensive hospital infrastructure or internet connectivity.

## Problem Statement
Neurological disorders often begin with subtle symptoms such as tremors, delayed reflexes, memory issues, and speech abnormalities. Early detection significantly improves treatment outcomes, but screening tools are expensive, hospital-dependent, and inaccessible to economically weaker and rural populations.

This project addresses that healthcare gap by creating an affordable point-of-care neurological screening solution.

## Features
- Tremor and hand stability assessment
- EMG-based muscle activity analysis
- Motor coordination evaluation
- Reflex response measurement
- Cognitive and speech screening
- Fully offline edge processing
- Portable and wearable design
- Touchscreen-based easy interface
- Rapid screening in under 10 minutes

## System Components
### Hardware
- ESP32-S3
- IMU Sensor
- EMG Sensor
- Flex Sensor
- Force Sensitive Resistor (FSR)
- Microphone
- Touchscreen Display
- Battery Power System

### Software
- C++
- Embedded Signal Processing
- FFT-based tremor analysis
- Sensor fusion algorithms
- Edge-based decision making

## Working Principle
The system performs 5 integrated neurological screening tests:

### 1. Tremor Detection
IMU sensors monitor hand movement and perform frequency analysis to detect abnormal tremors associated with neurological disorders.

### 2. Muscle Activity Assessment
EMG sensors capture neuromuscular signals to detect weakness, abnormal firing, or delayed muscle responses.

### 3. Motor Coordination Test
Guided movement tasks combine IMU and EMG data to evaluate movement control and coordination.

### 4. Reflex Measurement
Flex and force sensors measure response timing and reaction strength.

### 5. Cognitive & Speech Screening
Memory tasks, touchscreen interaction, and microphone-based speech analysis help identify cognitive and speech irregularities.

## Advantages
- Affordable (~₹5,000)
- Non-invasive screening
- No internet required
- Fast deployment in rural healthcare
- Minimal operator training required
- Objective sensor-based assessment

## Unique Selling Points
- 5-in-1 neurological screening system
- Low-cost EMG + IMU integration
- Portable wearable design
- Fully offline operation
- Community healthcare focused
- Rapid screening workflow

## SWOT Analysis
### Strengths
- Low-cost
- Portable
- Multi-sensor integration
- Rural deployment ready
- Objective measurement

### Weaknesses
- Screening only, not diagnosis
- EMG calibration required
- Early validation stage

### Opportunities
- Government healthcare adoption
- Rural medical camps
- AI predictive healthcare
- Elderly care applications

### Threats
- Medical regulatory approvals
- Clinical competition
- Data privacy concerns

## Future Improvements
- AI-based neurological risk prediction
- Cloud health record integration
- Expanded disease screening support
- Rehabilitation monitoring features

## Conclusion
This project demonstrates how embedded technology can make neurological screening affordable and accessible for underserved communities. By combining multimodal sensing, offline processing, and a low-cost design, the system helps bridge the gap between early symptoms and timely medical intervention.
