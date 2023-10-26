#!/bin/bash

# Replace these variables with your own values
REPO_PATH="/Users/harshitjain/Projects/LEARNING/dsa/100-days-of-dsa-1"
COMMIT_MESSAGE="Automated commit and push"
REMOTE_NAME="origin"
BRANCH_NAME="main"

# Navigate to the repository directory
cd "$REPO_PATH" || exit 1

# Check if there are changes in the working directory
if [[ -n $(git status -s) ]]; then
  # Add all changes to the staging area
  git add -A

  # Commit the changes
  git commit -m "$COMMIT_MESSAGE"

  # Push to the remote repository
  git push $REMOTE_NAME $BRANCH_NAME

  echo "Changes committed and pushed successfully."
else
  echo "No changes to commit."
fi

