DIRNAME=$1 
if [ ! -f $DIRNAME/readme.md ]; then
    echo "usage: upload_model_to_gist.sh <dirname>"
    echo "  <dirname>/readme.md must exist"
fi
