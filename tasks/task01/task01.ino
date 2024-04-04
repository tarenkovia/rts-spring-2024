long* intervalMicros = new long[5];
long intervals[5] = {10000, 1000, 500, 100, 50};
int* lampStates = new int[5];
int pins[5] = {3, 5, 6, 9, 10};

void setup() {
  for (int i = 0; i < 5; i++) 
  {
    intervalMicros[i] = 0;
    lampStates[i] = LOW;
    pinMode(pins[i], OUTPUT);
  }
}

void loop() {
  unsigned long micrCur = micros();

  if (micrCur - intervalMicros[0] >= intervals[0]) 
  {
    intervalMicros[0] = micrCur;

    if (lampStates[0] == LOW) 
    {
      lampStates[0] = HIGH;
    }
    else 
    {
      lampStates[0] = LOW;
    }

    digitalWrite(pins[0], lampStates[0]);
  }

  if (micrCur - intervalMicros[1] >= intervals[1]) 
  {
    intervalMicros[1] = micrCur;

    if (lampStates[1] == LOW) 
    {
      lampStates[1] = HIGH;
    }
    else 
    {
      lampStates[1] = LOW;
    }

    digitalWrite(pins[1], lampStates[1]);
  }
  
  if (micrCur - intervalMicros[2] >= intervals[2]) 
  {
    intervalMicros[2] = micrCur;

    if (lampStates[2] == LOW) 
    {
      lampStates[2] = HIGH;
    }
    else 
    {
      lampStates[2] = LOW;
    }

    digitalWrite(pins[2], lampStates[2]);
  }

  if (micrCur - intervalMicros[3] >= intervals[3]) 
  {
    intervalMicros[3] = micrCur;

    if (lampStates[3] == LOW)
    {
      lampStates[3] = HIGH;
    }
    else 
    {
      lampStates[3] = LOW;
    }

    digitalWrite(pins[3], lampStates[3]);
  }

  if (micrCur - intervalMicros[4] >= intervals[4]) 
  {
    intervalMicros[4] = micrCur;

    if (lampStates[4] == LOW) 
    {
      lampStates[4] = HIGH;
    }
    else 
    {
      lampStates[4] = LOW;
    }

    digitalWrite(pins[4], lampStates[4]);
  }
}