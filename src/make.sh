#!/bin/bash

gcc client.c clientModules.c -o client
gcc admin.c normal.c agent.c server.c serverModules.c -o server

