#!/bin/bash
git add .

commitMessage=$(date)

git commit -m "$commitMessage"

git push
