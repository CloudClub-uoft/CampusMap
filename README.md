# CampusMap

[![forthebadge](https://forthebadge.com/images/badges/open-source.svg)](https://forthebadge.com) [![forthebadge](https://forthebadge.com/images/badges/built-with-love.svg)](https://forthebadge.com)

IoT-driven predictive insight into study space usage, weather, foot traffic, noise levels, and more across UofT St. George campus.

## Features

- **CampusMap API** - Allows anyone to retrieve historical, current, or predicted data. Powered by Firebase Cloud Functions. See `./webapp/`.
- **CampusMap Node** - A rugged IoT device featuring a plethora of sensors. Tiered design for different degrees of remoteness (i.e. lithium polymer battery w/ solar for remote power, 4G LTE for remote connectivity, etc.). Based on the ESP32 microcontroller. See `./hardware/`.
- **CampusMap.ca** - React app for web and mobile that presents the collected and predicted data. Features a campus-wide heatmap, time-dependent predictive graphs, and Google Calendar/Outlook integration for study space planning. See `./webapp/`.

## The Data Pipeline

1. IoT endpoint (Node) registers to Google Cloud IoT service, collects data from sensors, and publishes it to a Firebase PubSub topic.
2. Firebase Cloud Functions\* backend processes PubSub messages and pushes them to the Firebase Database\*\*.
3. ML model listens for Database updates, trains on new data and predicts future data.
4. Webapp listens for Database updates to refresh data displays (graphs, etc.), and fetches historical data through the API as necessary.

\*Cloud Functions also handles API calls, pulling data from the Database as necessary.
\*\*Unclear whether Realtime or Firestore (see *todo*).

# Development

## Requirements

Subproject-specific development requirements and dependencies are listed in each folder's `README`.

## Leads

- Harsimrat Singh - Club co-founder, operations and generally dealing with university bureaucracy
- Jayden Lefebvre - Electronics design and prototyping, IoT and Backend/API lead
- Preet Mistry - MI and analytics lead
- Shayshu Nahata - App/Frontend lead

## Todo

**Metaplanning** - Replace all "..." in notes below (with *your* adjacent initials) with your expanded planning.

### Phase 1 - Proposal

- [ ] Planning - Done by **24/1/21**
  - [ ] Node Version 0 - Proof of data collection concept - **Jayden and Harsimrat**
    - [X] Preliminary components list
      - [X] ~~Camera - privacy concerns? Necessary?~~ -> Camera unnecessary.
      - [X] ~~GPS - Necessary? Alternative?~~ -> Tiered deployment (in terms of remote-ness)
      - [ ] UofT WiFi - ESP32 vs Arduino+RPi for enterprise networks? 
    - [X] V0 Electronics BoM
    - [ ] Preliminary electronics schematics (for checking connections and BoM completeness)
    - [ ] Assembly BoM (fasteners, connectors, etc.)
    - [X] Combined Node BoM cost (prototype vs bulk estimates)
    - [ ] Software architecture
      - [ ] UofT device "secured" WiFi credentials - consider device quantity, permanence of connection (refresh), campus coverage? Store on-device?
      - [ ] Instructions from cloud?
  - [ ] Cloud Backend (Firebase)
    - [ ] CloudClub support email -> Firebase - **Harsimrat and Jayden**
    - [ ] Set up `campusmap.cloudclub.ca` -> Firebase Hosting - **Harsimrat and Jayden**
    - [ ] Cloud Functions and Database - estimate total daily IoT endpoint calls + bandwidth -> [pricing](https://firebase.google.com/pricing) - **Jayden**
    - [ ] Cloud Database - [Realtime or Firestore?](https://firebase.google.com/docs/database/rtdb-vs-firestore) - **Jayden and Preet**
    - [ ] Cloud Hosting - [Pricing](https://firebase.google.com/pricing) **Shayshu**
    - [ ] [Machine Learning](https://firebase.google.com/docs/ml/) - Check [pricing](https://firebase.google.com/pricing) for Google Firebase ML, how to use TensorFlow? - **Preet**
  - [ ] React Webapp - **Shayshu**
    - [ ] App structure outline
    - [ ] App frontend layout
    - [ ] ... - **SN**
- [ ] Proof of Concept - working Node, data pipeline, webapp data display done by **31/1/21**
  - [ ] Node - **Jayden**
    - [ ] Electronics schematics (for PCB manufacturing)
    - [ ] Master CAD
      - [ ] PCB
      - [X] Microcontroller
      - [ ] Sensors
      - [ ] Power systems
    - [ ] Prototype V1 (Breadboard) with working software + data pipeline to backend
    - [ ] Manufacturing and assembly instructions
  - [ ] Cloud Backend
    - [ ] Database structure - **Jayden**
    - [ ] API Cloud Functions written - **Jayden**
    - [ ] ... **JL**
  - [ ] Machine Learning - **Preet**
    - [ ] Test PyTorch + Firebase ML integration
    - [ ] ... **PM**
  - [ ] Webapp - **Shayshu**
    - [ ] Graphs for displaying data
    - [ ] Generic pretty website frontend
    - [ ] ... **SN**
- [ ] Proposal - **Harsimrat et al.** - Submitted by **31/1/21**
  - [ ] Written documentation of planning
  - [ ] Recordings (photo, video, renders) of prototype
  - [ ] Data pipeline layout, API explanation
  - [ ] Get deployment approval from libraries, the pit, other spaces
  - [ ] ... **HS**

### Phase 2 - Prototyping and Development

**Sample implementation** - Launch the webapp on a Raspberry Pi, show it on the TVs in the Pit

...

### Phase 3 - Manufacturing and Deployment

...