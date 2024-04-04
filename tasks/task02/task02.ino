#include <TaskManagerIO.h>

long intervals[5] = {10000, 1000, 500, 100, 50};
int* states = new int[5];
int pins[5] = {3, 5, 6, 9, 10};

void setup() {
  for (int i = 0; i < 5; i++) 
  {
    states[i] = LOW;
    pinMode(pins[i], OUTPUT);
  }

  taskid_t taskId0 = taskManager.scheduleFixedRate(intervals[0], [] {
    if (states[0] == LOW) 
    {
      states[0] = HIGH;
    }
    else {
      states[0] = LOW;
    }

    digitalWrite(pins[0], states[0]);
  }, TIME_MICROS);

  taskid_t taskId1 = taskManager.scheduleFixedRate(intervals[1], [] {
    if (states[1] == LOW) 
    {
      states[1] = HIGH;
    }
    else {
      states[1] = LOW;
    }

    digitalWrite(pins[1], states[1]);
  }, TIME_MICROS);

  taskid_t taskId2 = taskManager.scheduleFixedRate(intervals[2], [] {
    if (states[2] == LOW) 
    {
      states[2] = HIGH;
    }
    else {
      states[2] = LOW;
    }

    digitalWrite(pins[2], states[2]);
  }, TIME_MICROS);

  taskid_t taskId3 = taskManager.scheduleFixedRate(intervals[3], [] {
    if (states[3] == LOW) 
    {
      states[3] = HIGH;
    }
    else {
      states[3] = LOW;
    }

    digitalWrite(pins[3], states[3]);
  }, TIME_MICROS);

  taskid_t taskId4 = taskManager.scheduleFixedRate(intervals[4], [] {
    if (states[4] == LOW) 
    {
      states[4] = HIGH;
    }
    else {
      states[4] = LOW;
    }

    digitalWrite(pins[4], states[4]);
  }, TIME_MICROS);
}

void loop() {
  taskManager.runLoop();
}