find -type f -name "*.sh" -print | sed -e 's/\.sh$//' | sed -e 's/^\.\///'
