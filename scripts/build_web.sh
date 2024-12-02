#!/usr/bin/env bash

rm -rf data/*

cd web || exit
npm run build

cp -R dist/* ../data/
